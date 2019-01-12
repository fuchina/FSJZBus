//
//  ExhaustiveCalendar.h
//  ShareEconomy
//
//  Created by FudonFuchina on 16/8/7.
//  Copyright © 2016年 FudonFuchina. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ExhaustiveCalendar : NSObject

// 根据公历获取纪月
+ (NSString *)lunarMonthWithDate:(NSDate *)date;

@end
