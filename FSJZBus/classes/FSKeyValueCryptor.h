//
//  FSKeyValueCryptor.h
//  myhome
//
//  Created by FudonFuchina on 2018/5/5.
//  Copyright © 2018年 fuhope. All rights reserved.
//

// 将加密与存储分开，凡是要加密的key都放到这里来

#import <Foundation/Foundation.h>

@interface FSKeyValueCryptor : NSObject

// 加密的key，在修改核心密码时需要更新
+ (NSArray<NSString *> *)cryptorFields;

// 手势密码
+ (void)setGesturePassword:(NSString *)pwd password:(NSString *)password;
+ (NSString *)gesturePassword:(NSString *)password;
+ (void)removeGesture;

+ (NSString *)saveObject:(NSString *)value forKey:(NSString *)key pwd:(NSString *)pwd;
+ (NSString *)objectForKey:(NSString *)key password:(NSString *)pwd;
+ (void)removeObjectForKey:(NSString *)key;

@end
