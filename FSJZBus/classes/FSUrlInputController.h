//
//  FSUrlInputController.h
//  myhome
//
//  Created by FudonFuchina on 2017/8/13.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"

@interface FSUrlInputController : FSBaseController

@property (nonatomic,copy) void (^selectUrlCallback)(FSUrlInputController *bVC,NSString *bUrl);

@end
