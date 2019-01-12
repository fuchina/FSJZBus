//
//  FSPwdAPI.h
//  myhome
//
//  Created by FudonFuchina on 2018/5/1.
//  Copyright © 2018年 fuhope. All rights reserved.
//

#import "FSBaseAPI.h"

@interface FSPwdAPI : FSBaseAPI

+ (NSString *)changeCorePasswordWithOld:(NSString *)old new:(NSString *)newPwd;

// 忘记了原密码
+ (NSString *)changeCorePasswordOnlyWithNewPwd:(NSString *)newPwd;

// 更改环境
+ (void)completionHandle:(NSString *)newA;

+ (NSString *)nowPwd;

@end
