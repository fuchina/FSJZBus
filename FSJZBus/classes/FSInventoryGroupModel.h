//
//  FSInventoryGroupModel.h
//  FSAccount
//
//  Created by FudonFuchina on 2019/6/15.
//

#import <Foundation/Foundation.h>
#import "FSInventoryModel.h"

@interface FSInventoryGroupModel : NSObject

@property (nonatomic,copy) NSString *soleKey;

@property (nonatomic,copy) NSString *name;
@property (nonatomic,copy) NSString *rest;
@property (nonatomic,copy) NSString *cost;
@property (nonatomic,copy) NSString *costBank;
@property (nonatomic,copy) NSString *num;
@property (nonatomic,copy) NSString *sale;
@property (nonatomic,copy) NSString *saleBank;
@property (nonatomic,copy) NSString *isp;
@property (nonatomic,copy) NSString *ispShow;
@property (nonatomic,copy) NSString *pp;
@property (nonatomic,assign) BOOL   isSoldout;

@property (nonatomic,strong) NSArray<FSInventoryModel *>    *list;

- (void)addObject:(FSInventoryModel *)model;

@end
