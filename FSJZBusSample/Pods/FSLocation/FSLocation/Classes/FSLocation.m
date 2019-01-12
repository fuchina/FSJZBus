//
//  FSLocation.m
//  FSLocation
//
//  Created by fudon on 2016/12/15.
//  Copyright © 2016年 fuhope. All rights reserved.
//

#import "FSLocation.h"
#import <CoreLocation/CoreLocation.h>

typedef void(^FSLocationCoordinateBlock)(NSArray<CLLocation *> *locations,NSError *bError);

@interface FSLocation ()<CLLocationManagerDelegate>

@property (nonatomic,strong) CLLocationManager                              *manager;
@property (nonatomic,strong) NSMutableArray<FSLocationCoordinateBlock>      *blocks;

@end

@implementation FSLocation

+ (void)currentLongitudeAndlatitude:(void(^)(NSArray<CLLocation *> *locations,NSError *bError))completion{
    [[FSLocation sharedManager] longitudeAndlatitude:^(NSArray<CLLocation *> *locations,NSError *bError) {
        if (completion) {
            completion(locations,bError);
        }
    }];
}

+ (void)addressWithLocation:(CLLocation *)location completionHandler:(void (^)(NSArray< CLPlacemark *> *placemarks, NSError *error))completion{
    CLGeocoder *geocoder = [[CLGeocoder alloc] init];
    [geocoder reverseGeocodeLocation:location completionHandler:^(NSArray *array, NSError *error){
        if (completion) {
            completion(array,error);
        }
    }];
}

+ (void)currentAddressWithCompletionHandler:(void (^)(NSArray< CLPlacemark *> *placemarks, NSError *error))completion{
    [self currentLongitudeAndlatitude:^(NSArray<CLLocation *> *locations, NSError *bError) {
        if (!bError && locations.count) {
            [self addressWithLocation:[locations firstObject] completionHandler:^(NSArray<CLPlacemark *> *placemarks, NSError *error) {
                if (completion) {
                    completion(placemarks,error);
                }
            }];
        }
    }];
}

+ (NSString *)chineseAddressWithPlace:(CLPlacemark *)placemark{
    return [[NSString alloc] initWithFormat:@"%@%@",placemark.subLocality?:@"",placemark.name?:@""];
}

+ (CGFloat)distanceLocation:(CLLocation *)location toLocation:(CLLocation *)another{
    if ([location isKindOfClass:CLLocation.class] && [another isKindOfClass:CLLocation.class]) {
        return [location distanceFromLocation:another];
    }
    return -1;
}

/***********************************************************************************************************************************************/
static FSLocation *_instance = nil;
+ (FSLocation *)sharedManager{
    static dispatch_once_t predicate;
    dispatch_once(&predicate, ^{
        _instance = [[self alloc] init];
    });
    return _instance;
}

- (instancetype)init{
    self = [super init];
    if (self) {
        _manager = [[CLLocationManager alloc] init];
        _manager.delegate = self;
        _manager.desiredAccuracy = kCLLocationAccuracyBest;
        _manager.distanceFilter = kCLDistanceFilterNone; // kCLDistanceFilterNone为默认值，意为任何移动都会回调；如果为其他值，达到值域的移动才会回调定位数据。
        [_manager requestWhenInUseAuthorization];
        [_manager requestAlwaysAuthorization];
    }
    return self;
}

- (void)longitudeAndlatitude:(void(^)(NSArray<CLLocation *> *locations,NSError *bError))completion{
    if (!completion) {
        return;
    }
    CLAuthorizationStatus status = CLLocationManager.authorizationStatus;
    BOOL isAuthorization = kCLAuthorizationStatusAuthorizedAlways == status || kCLAuthorizationStatusAuthorizedWhenInUse == status;
    if (isAuthorization == NO) {
        if (completion) {
            NSString *desc = @"需要在工程plist文件中增加\
            NSLocationAlwaysUsageDescription,\
            NSLocationWhenInUseUsageDescription,\
            NSLocationAlwaysAndWhenInUseUsageDescription,\
            字段";
            NSError *error = [[NSError alloc] initWithDomain:desc code:-250 userInfo:nil];
            completion(nil,error);
        }
        return;
    }
    
    dispatch_async(dispatch_get_main_queue(), ^{
        [self.blocks addObject:completion];
        [self->_manager startUpdatingLocation];
    });
}

- (NSMutableArray *)blocks{
    if (!_blocks) {
        _blocks = NSMutableArray.new;
    }
    return _blocks;
}

- (void)locationManager:(CLLocationManager *)manager didUpdateLocations:(NSArray<CLLocation *> *)locations{
    if (locations.count) {
        CLLocation *location = locations.firstObject;
        NSTimeInterval ts = [location.timestamp timeIntervalSince1970];
        NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
        if ((now - ts) < 20) { // 20秒内的才可以
            [manager stopUpdatingLocation];

            dispatch_async(dispatch_get_main_queue(), ^{
                for (FSLocationCoordinateBlock block in self.blocks) {
                    block(locations,nil);
                }
                [self.blocks removeAllObjects];
            });
        }
    }
}

- (void)locationManager:(CLLocationManager *)manager
       didFailWithError:(NSError *)error{
    [manager stopUpdatingLocation];
    
    dispatch_async(dispatch_get_main_queue(), ^{
        for (FSLocationCoordinateBlock block in self.blocks) {
            block(nil,error);
        }
        [self.blocks removeAllObjects];
    });
}

@end
