//
//  FSNetsController.h
//  myhome
//
//  Created by FudonFuchina on 2017/7/9.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"

@interface FSNetsController : FSBaseController

@property (nonatomic,copy) void (^callback)(FSNetsController *bVC,NSString *bUrl);

@end
