//
//  FSCCDayView.h
//  NL
//
//  Created by fudon on 16/8/4.
//  Copyright © 2016年 Fudongdong. All rights reserved.
//

#import <UIKit/UIKit.h>

#define CCGreenColor    [UIColor colorWithRed:100 / 255.0 green:170 / 255.0 blue:70 / 255.0 alpha:1]

@class FSCCDayView;
typedef void(^CCDayViewBlock)(FSCCDayView *bView);

typedef NS_ENUM(NSInteger, FSCCDayViewStatus) {
    FSCCDayViewStatusDefault = 0,       // 默认
    FSCCDayViewStatusSelected,      // 选择
    FSCCDayViewStatusToday          // 是今天
};

@interface FSCCDayView : UIView

@property (nonatomic,strong) NSDate             *date;
@property (nonatomic,strong) UIFont             *font;
@property (nonatomic,copy)   CCDayViewBlock     block;
@property (nonatomic,assign) FSCCDayViewStatus  status;

@end
