//
//  FSKeepLocationController.h
//  myhome
//
//  Created by fudon on 2017/2/24.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"
#import "FSLocationModel.h"
#import <CoreLocation/CoreLocation.h>

@interface FSKeepLocationController : FSBaseController

@property (nonatomic,strong) FSLocationModel    *model;
@property (nonatomic,strong) CLLocation         *location;

@end
