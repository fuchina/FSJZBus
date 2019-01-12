//
//  FSIMBaseModel.h
//  myhome
//
//  Created by FudonFuchina on 2018/2/4.
//  Copyright © 2018年 fuhope. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSIMBaseModel : NSObject

@property (nonatomic,copy) NSString     *readableTime;
@property (nonatomic,copy) NSString     *profit;    // 利润
@property (nonatomic,copy) NSString     *rate;      // 收益率
@property (nonatomic,copy) NSString     *yera;      // 年化收益率
@property (nonatomic,copy) NSString     *isp;       // 理想售价
@property (nonatomic,copy) NSString     *days;      // 进货到今天数

@property (nonatomic,copy) NSString     *pp;      // 售罄时为'利润'，否则为'好价'
@property (nonatomic,copy) NSString     *tt;      // 售罄时为'出货'，否则为'距今'

@end
