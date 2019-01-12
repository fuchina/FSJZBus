//
//  FSAddCardsController.h
//  myhome
//
//  Created by FudonFuchina on 2018/3/4.
//  Copyright © 2018年 fuhope. All rights reserved.
//

#import "FSBaseController.h"
#import "FSCardModel.h"

@interface FSAddCardsController : FSBaseController

@property (nonatomic,copy) NSString     *password;

@property (nonatomic,copy) NSString     *zone;
@property (nonatomic,copy) NSString     *name;
@property (nonatomic,strong)FSCardModel *model;

@property (nonatomic,copy) void (^callback)(NSString *zone);
@property (nonatomic,copy) void (^changeZone)(FSAddCardsController *v,FSCardModel *m);

@end
