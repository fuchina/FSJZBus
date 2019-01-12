//
//  FSUrlModel.h
//  myhome
//
//  Created by FudonFuchina on 2017/7/18.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSUrlModel : NSObject

@property (nonatomic,strong) NSNumber   *aid;
@property (nonatomic,copy) NSString     *time;
@property (nonatomic,copy) NSString     *name;  // 名称，如苹果，亚马逊
@property (nonatomic,copy) NSString     *url;   // 网址
@property (nonatomic,copy) NSString     *type;  // 分类，如生活服务，网上银行
@property (nonatomic,copy) NSString     *count; // 频率

+ (NSArray<NSString *> *)tableFields;

@end
