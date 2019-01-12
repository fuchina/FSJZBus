//
//  FSGoodsAPI.h
//  myhome
//
//  Created by FudonFuchina on 2018/3/8.
//  Copyright © 2018年 fuhope. All rights reserved.
//

#import "FSBaseAPI.h"
#import "FSInventoryModel.h"
#import "FSGoodsModel.h"
#import "FSInventoryAllModel.h"

@interface FSGoodsAPI : FSBaseAPI

+ (NSMutableArray *)goodsWith:(NSString *)table page:(NSInteger)page;
+ (NSMutableArray *)goodsWith:(NSString *)table page:(NSInteger)page soldout:(BOOL)soldout;

+ (NSString *)addInventory:(FSGoodsModel *)model date:(NSDate *)date cost:(NSString *)cost num:(NSString *)num table:(NSString *)table;

+ (NSString *)updateSubject:(NSString *)sale rest:(NSString *)rest table:(NSString *)table model:(FSInventoryModel *)model;

+ (FSInventoryAllModel *)statistic:(NSString *)table;

// 售罄
+ (NSString *)soldout:(NSString *)sale table:(NSString *)table model:(FSInventoryModel *)model;

// 根据time（=sid）来查找goodsModel
+ (FSGoodsModel *)goodsModelWithTime:(NSString *)time;

// 商品
+ (NSString *)addGoods:(NSInteger)type name:(NSString *)name unit:(NSString *)unit from:(NSString *)from;

@end
