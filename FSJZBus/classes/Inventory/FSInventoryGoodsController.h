//
//  FSInventoryGoodsController.h
//  myhome
//
//  Created by FudonFuchina on 2018/2/3.
//  Copyright © 2018年 fuhope. All rights reserved.
//

#import "FSBaseController.h"
#import "FSGoodsModel.h"

@interface FSInventoryGoodsController : FSBaseController

@property (nonatomic,copy) void (^selectedGoods)(FSInventoryGoodsController *bVC,FSGoodsModel *bModel);

@end
