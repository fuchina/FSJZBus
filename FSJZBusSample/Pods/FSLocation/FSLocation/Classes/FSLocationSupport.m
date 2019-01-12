//
//  FSLocationSupport.m
//  FSCalculator
//
//  Created by fudongdong on 2019/1/9.
//

#import "FSLocationSupport.h"
#import "FSUIKit.h"

@implementation FSLocationSupport

static NSString *_map_Apple    = @"苹果地图";
static NSString *_map_Gaode    = @"高德地图";
static NSString *_map_Baidu    = @"百度地图";
//static NSString *_map_Google   = @"谷歌地图";
//static NSString *_map_Tencent  = @"腾讯地图";
+ (void)navigationToMapsWithDestination:(CLLocationCoordinate2D)coordinate{
    NSMutableArray *array = [[NSMutableArray alloc] init];
    BOOL hasBaiduMap = [[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:@"baidumap://"]];
    if (hasBaiduMap) {
        [array addObject:_map_Baidu];
    }
    BOOL hasAMap = [[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:@"iosamap://"]];
    if (hasAMap) {
        [array addObject:_map_Gaode];
    }
    //    BOOL hasGoogleMap = [[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:@"comgooglemaps://"]];
    //    if (hasGoogleMap) {
    //        [array addObject:_map_Google];
    //    }
    //    BOOL hasTencentMap = [[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:@"qqmap://"]];
    //    if (hasTencentMap) {
    //        [array addObject:_map_Tencent];
    //    }
    //
    [array addObject:_map_Apple];
    NSMutableArray *styles = [[NSMutableArray alloc] initWithCapacity:array.count];
    for (int x = 0; x < array.count ; x ++) {
        [styles addObject:@(UIAlertActionStyleDefault)];
    }
    [FSUIKit alertOnCustomWindow:UIAlertControllerStyleActionSheet title:@"选择导航方式" message:nil actionTitles:array styles:styles handler:^(UIAlertAction *action) {
        NSString *title = action.title;
        if ([title isEqualToString:_map_Apple]) {
            MKMapItem *currentLocation = [MKMapItem mapItemForCurrentLocation];
            MKMapItem *toLocation = [[MKMapItem alloc] initWithPlacemark:[[MKPlacemark alloc] initWithCoordinate:coordinate addressDictionary:nil]];
            [MKMapItem openMapsWithItems:@[currentLocation, toLocation]
                           launchOptions:@{MKLaunchOptionsDirectionsModeKey: MKLaunchOptionsDirectionsModeDriving,
                                           MKLaunchOptionsShowsTrafficKey: [NSNumber numberWithBool:YES]}];
        }else if ([title isEqualToString:_map_Baidu]){
            NSString *urlString = [[NSString stringWithFormat:@"baidumap://map/direction?origin={{我的位置}}&destination=latlng:%f,%f|name=目的地&mode=driving&coord_type=gcj02",coordinate.latitude, coordinate.longitude] stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
            BOOL can = [[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:urlString]];
            if (can) {
                [[UIApplication sharedApplication] openURL:[NSURL URLWithString:urlString]];
            }
        }else if ([title isEqualToString:_map_Gaode]){
            NSString *urlScheme = @"urlScheme";
            NSDictionary *infoDictionary = [[NSBundle mainBundle] infoDictionary];
            NSString *appName = [infoDictionary objectForKey:@"CFBundleDisplayName"];
            NSString *urlString = [[NSString stringWithFormat:@"iosamap://navi?sourceApplication=%@&backScheme=%@&lat=%f&lon=%f&dev=0&style=1",appName,urlScheme,coordinate.latitude, coordinate.longitude] stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
            
            BOOL can = [[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:urlString]];
            if (can) {
                [[UIApplication sharedApplication] openURL:[NSURL URLWithString:urlString]];
            }
        }
    }];
}
/*
 else if (_map_Tencent){
 NSString *urlString = [[NSString stringWithFormat:@"qqmap://map/routeplan?from=我的位置&type=drive&tocoord=%f,%f&to=终点&coord_type=1&policy=0",coordinate.latitude, coordinate.longitude] stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
 BOOL can = [[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:urlString]];
 if (can) {
 [[UIApplication sharedApplication] openURL:[NSURL URLWithString:urlString]];
 }
 }
 else if ([title isEqualToString:_map_Google]){
 NSString *urlScheme = @"urlScheme";
 NSString *urlString = [[NSString stringWithFormat:@"comgooglemaps://?x-source=%@&x-success=%@&saddr=&daddr=%f,%f&directionsmode=driving",[FSKit appName],urlScheme,coordinate.latitude, coordinate.longitude] stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
 BOOL can = [[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:urlString]];
 if (can) {
 [[UIApplication sharedApplication] openURL:[NSURL URLWithString:urlString]];
 }
 }
 */


@end
