//
//  FSGestureController.h
//  myhome
//
//  Created by FudonFuchina on 2017/8/31.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import "FSBaseController.h"

typedef NS_ENUM(NSInteger, FSGestureMode) {
    FSGestureModeChange = 1,        // 修改
    FSGestureModeSet,               // 设置
};

@interface FSGestureController : FSBaseController

@property (nonatomic,copy)   NSString      *corePwd;
@property (nonatomic,assign) FSGestureMode  mode;
@property (nonatomic,assign) BOOL           hiddenTopLeftCancelButton;

@property (nonatomic,copy) void (^validateSuccess)(void);
@property (nonatomic,copy) void (^cancelInputPassword)(void);
@property (nonatomic,copy) void (^setedSuccess)(FSGestureController *bVC);

// 判断有没有设置密码
+ (BOOL)hasSettedPassword:(NSString *)corePwd;

+ (void)setHavedBeUnlockGesture:(BOOL)did;
+ (BOOL)isNeedUnlockGesture;
+ (BOOL)shouldAlertGesture;
+ (void)setShouldAlertGesture:(BOOL)shouldAlert;

@end
