//
//  FSAppRunState.h
//  AppRunState
//
//  Created by fudon on 2017/3/13.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSAppRunState : NSObject

+(FSAppRunState *)sharedInstance;

/*
 1.FPS使用方法：
    [FSAppRunState sharedInstance].open = YES;
    [[FSAppRunState sharedInstance] setFpsBlock:^(double bFPS) {
        NSLog(@"fps :%f",bFPS);
    }];
 
 2.FPS开关
    [FSAppRunState sharedInstance].open = ![FSAppRunState sharedInstance].open;
 */
@property (nonatomic,copy) void (^fpsBlock)(double fps);
@property (nonatomic,assign) BOOL   open;

+ (unsigned long)memoryUsage;   // 内存使用率

+ (double)cpuUsage;             // CPU使用情况

@end
