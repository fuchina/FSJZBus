//
//  FSChatInputView.h
//  myhome
//
//  Created by FudonFuchina on 2017/10/22.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FSChatInputView : UIView

@property (nonatomic,copy) void (^photoCallback)(void);
@property (nonatomic,copy) void (^sendMessage)(NSString *message);
- (void)clearText;

@end
