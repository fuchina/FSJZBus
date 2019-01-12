//
//  FSSave.h
//  FSSave
//
//  Created by fudon on 2017/1/9.
//  Copyright © 2017年 fuhope. All rights reserved.
//

/*
    原理:存储NSSring/NSArray/NSDictionary/UIImage
    
    总目录 = 可清理目录（图片缓存）+ 支持增删改查的目录 + 仅仅保存和查询的目录  (永久缓存，如保存的日记、提醒数据等)
    
    可清理目录：定期自动清理和手动清理，目前只有图片缓存
    不可清理目录：增删改查功能，模仿数据库
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface FSSave : NSObject

// 图片保存
+ (void)saveImage:(UIImage *)image forKey:(NSString *)url;
+ (UIImage *)imageFromCacheWithUrl:(NSString *)url;

// 键值对保存(NSString/NSArray/NSDictionary)
+ (void)saveObject:(id)object forKey:(NSString *)key;
+ (id)objectForKey:(NSString *)key;

// 类数据库保存(NSString/NSDictioanry/NSArray)
// 增加
+ (void)addObject:(id)object table:(NSString *)table;
+ (NSArray *)selectWithTable:(NSString *)table condition:(NSString *)condition;


@end
