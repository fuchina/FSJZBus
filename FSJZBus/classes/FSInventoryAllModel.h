//
//  FSInventoryAllModel.h
//  myhome
//
//  Created by FudonFuchina on 2018/3/11.
//  Copyright © 2018年 fuhope. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSInventoryAllModel : NSObject

@property (nonatomic,copy) NSString     *cost;  // 投入
@property (nonatomic,copy) NSString     *sale;  // 销售
@property (nonatomic,copy) NSString     *bank;  // 库存

@property (nonatomic,copy) NSString     *sold;  // 总售
@property (nonatomic,copy) NSString     *cstd;  // 总成
@property (nonatomic,copy) NSString     *prof;  // 利润

@end
