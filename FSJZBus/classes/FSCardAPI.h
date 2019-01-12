//
//  FSCardAPI.h
//  myhome
//
//  Created by FudonFuchina on 2018/3/3.
//  Copyright © 2018年 fuhope. All rights reserved.
//

#import "FSCardModel.h"
#import "FSBaseAPI.h"

@interface FSCardAPI : FSBaseAPI

+ (NSMutableArray<FSCardModel *> *)cards:(NSString *)zone page:(NSInteger)page password:(NSString *)password;

+ (NSString *)addCard:(NSString *)card note:(NSString *)note zone:(NSString *)zone password:(NSString *)password;
+ (NSString *)updateCard:(NSString *)card note:(NSString *)note zone:(NSString *)zone aid:(NSNumber *)aid password:(NSString *)password;

@end
