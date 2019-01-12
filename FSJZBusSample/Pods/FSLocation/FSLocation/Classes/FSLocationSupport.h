//
//  FSLocationSupport.h
//  FSCalculator
//
//  Created by fudongdong on 2019/1/9.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FSLocationSupport : NSObject

// 导航,coordinate为目的地
+ (void)navigationToMapsWithDestination:(CLLocationCoordinate2D)coordinate;

@end

NS_ASSUME_NONNULL_END
