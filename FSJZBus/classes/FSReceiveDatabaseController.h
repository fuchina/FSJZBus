//
//  FSReceiveDatabaseController.h
//  myhome
//
//  Created by FudonFuchina on 2017/11/5.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"

@interface FSReceiveDatabaseController : FSBaseController

@property (nonatomic,copy) void (^hasReceivedData)(FSReceiveDatabaseController *bVC);

@end
