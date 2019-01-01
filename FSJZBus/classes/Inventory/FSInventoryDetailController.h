//
//  FSInventoryDetailController.h
//  myhome
//
//  Created by FudonFuchina on 2018/3/9.
//  Copyright © 2018年 fuhope. All rights reserved.
//

#import "FSInventoryModel.h"
#import "FSShakeBaseController.h"

@interface FSInventoryDetailController : FSShakeBaseController

@property (nonatomic,strong) FSInventoryModel   *model;
@property (nonatomic,strong) NSString           *table;

@property (nonatomic,copy) void (^edited)(void);

@end
