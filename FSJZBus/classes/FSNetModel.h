//
//  FSNetModel.h
//  myhome
//
//  Created by FudonFuchina on 2017/7/17.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSNetModel : NSObject

@property (nonatomic,strong) NSNumber   *aid;
@property (nonatomic,copy) NSString     *time;
@property (nonatomic,copy) NSString     *name;
@property (nonatomic,copy) NSString     *count;

+ (NSArray<NSString *> *)tableFields;

@end
