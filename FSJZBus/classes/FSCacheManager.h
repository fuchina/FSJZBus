//
//  FSCacheManager.h
//  ShareEconomy
//
//  Created by fudon on 16/6/7.
//  Copyright © 2016年 FudonFuchina. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSCacheManager : NSObject

/**
 *  储存字符串到🔑钥匙串
 *
 *  @param sValue 对应的Value
 *  @param sKey   对应的Key
 */
+ (void)saveKeychainValue:(NSString *)sValue Key:(NSString *)sKey;

/**
 *  从🔑钥匙串获取字符串
 *
 *  @param sKey 对应的Key
 *
 *  @return 返回储存的Value
 */
+ (NSString *)readKeychainValue:(NSString *)sKey;

/**
 *  从🔑钥匙串删除字符串
 *
 *  @param sKey 对应的Key
 */
+ (void)deleteKeychainValue:(NSString *)sKey;

// 所有缓存的大小
+ (void)allCacheSize:(void(^)(NSUInteger bResult))resultBlock;

// 清除缓存
+ (void)clearAllCache:(void(^)(void))success;


@end
