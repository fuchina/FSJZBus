//
//  FSChatImageController.h
//  myhome
//
//  Created by FudonFuchina on 2017/10/28.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"

@interface FSChatImageController : FSBaseController

@property (nonatomic,strong) NSURL  *url;

+ (UIImage *)imageWithURL:(NSURL *)url;

@end
