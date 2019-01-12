//
//  FSAddInventoryController.h
//  myhome
//
//  Created by FudonFuchina on 2018/2/3.
//  Copyright © 2018年 fuhope. All rights reserved.
//

#import "FSBaseController.h"

@interface FSAddInventoryController : FSBaseController

@property (nonatomic,copy) NSString  *table;
@property (nonatomic,copy) void (^addSuccess)(FSAddInventoryController *bVC);

@end
