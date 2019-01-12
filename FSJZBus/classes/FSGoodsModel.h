//
//  FSGoodsModel.h
//  myhome
//
//  Created by FudonFuchina on 2018/2/3.
//  Copyright © 2018年 fuhope. All rights reserved.
//

/*
     @time：数据库时间；
     @name：名称；
     @from：供应商；
     @type：商品类型，计量还是计重；
     @unit：单位；
 */

#import <Foundation/Foundation.h>

@interface FSGoodsModel : NSObject

@property (nonatomic,strong) NSNumber   *aid;
@property (nonatomic,copy) NSString     *time;
@property (nonatomic,copy) NSString     *name;
@property (nonatomic,copy) NSString     *supp;
@property (nonatomic,copy) NSString     *type;
@property (nonatomic,copy) NSString     *unit;
@property (nonatomic,copy) NSString     *freq;  // 被选中的频数

+ (NSArray<NSString *> *)tableFields;

@end
