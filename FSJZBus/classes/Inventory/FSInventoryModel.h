//
//  FSInventoryModel.h
//  myhome
//
//  Created by FudonFuchina on 2018/2/4.
//  Copyright © 2018年 fuhope. All rights reserved.
//

#import "FSIMBaseModel.h"

@interface FSInventoryModel : FSIMBaseModel

@property (nonatomic,strong) NSNumber   *aid;
@property (nonatomic,copy) NSString     *ctime; //数据创建时间

@property (nonatomic,copy) NSString     *gid;   // 商品id
@property (nonatomic,copy) NSString     *name;  // 商品名称
@property (nonatomic,copy) NSString     *type;  // 商品类型

@property (nonatomic,copy) NSString     *time;  // 进货时间
@property (nonatomic,copy) NSString     *cost;  // 进价
@property (nonatomic,copy) NSString     *num;   // 数目

@property (nonatomic,copy) NSString     *rest;  // 剩余
@property (nonatomic,copy) NSString     *done;  // 售罄，一个时间秒数
@property (nonatomic,copy) NSString     *sale;  // 回收

+ (NSArray<NSString *> *)tableFields;

@end
