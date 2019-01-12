//
//  FSChatViewController.h
//  myhome
//
//  Created by FudonFuchina on 2017/10/22.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"

@interface FSChatViewController : FSBaseController

@property (nonatomic,copy)void(^sendDataBlock)(NSString *str);
@property (nonatomic,copy)void(^sendImage)(NSURL *url);

@end
