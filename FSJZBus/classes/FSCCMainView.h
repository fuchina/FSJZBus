//
//  FSCCMainView.h
//  NL
//
//  Created by fudon on 16/8/4.
//  Copyright © 2016年 Fudongdong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FSCCDayView.h"

@interface FSCCMainView : UIView

@property (nonatomic,strong) NSDate     *firstDay;
@property (nonatomic,copy) CCDayViewBlock   block;

@end
