//
//  FSLocationModel.h
//  myhome
//
//  Created by FudonFuchina on 2017/5/16.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSLocationModel : NSObject

@property (nonatomic,strong) NSNumber   *aid;
@property (nonatomic,copy) NSString     *time;
@property (nonatomic,copy) NSString     *name;  // 名字
@property (nonatomic,copy) NSString     *loti;  // 经度
@property (nonatomic,copy) NSString     *lati;  // 纬度

+ (NSArray<NSString *> *)tableFields;

@end
