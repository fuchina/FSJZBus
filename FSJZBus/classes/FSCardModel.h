//
//  FSCardModel.h
//  myhome
//
//  Created by FudonFuchina on 2018/3/3.
//  Copyright © 2018年 fuhope. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSCardModel : NSObject

@property (nonatomic,strong) NSNumber   *aid;
@property (nonatomic,copy)   NSString   *time;
@property (nonatomic,copy)   NSString   *card;
@property (nonatomic,copy)   NSString   *note;
@property (nonatomic,copy)   NSString   *zone;

+ (NSArray<NSString *> *)tableFields;

@end
