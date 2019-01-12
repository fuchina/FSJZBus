//
//  FSLocation.h
//  FSLocation
//
//  Created by fudon on 2016/12/15.
//  Copyright © 2016年 fuhope. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

/*
    1.需要在工程plist文件中增加
    NSLocationAlwaysUsageDescription
    NSLocationWhenInUseUsageDescription
    NSLocationAlwaysAndWhenInUseUsageDescription
    字段
 */

@interface FSLocation : NSObject

/*
    获取当前经纬度的母对象数组
    @result bError:如果为nil表示成功，不为nil表示出错
 */
+ (void)currentLongitudeAndlatitude:(void(^)(NSArray<CLLocation *> *locations,NSError *bError))completion;

/*
    根据location获取地址
 */
+ (void)addressWithLocation:(CLLocation *)location completionHandler:(void (^)(NSArray< CLPlacemark *> *placemarks, NSError *error))completion;

/*
    获取当前地址
    CLPlacemark对象有个name属性，就是地址的名字，用于显示
 */
+ (void)currentAddressWithCompletionHandler:(void (^)(NSArray< CLPlacemark *> *placemarks, NSError *error))completion;

// 转换为中国习惯的地址顺序
+ (NSString *)chineseAddressWithPlace:(CLPlacemark *)placemark;

+ (CGFloat)distanceLocation:(CLLocation *)location toLocation:(CLLocation *)another;

@end
