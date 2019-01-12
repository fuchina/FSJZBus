//
//  FSABPackView.h
//  Expand
//
//  Created by Fudongdong on 2017/8/1.
//  Copyright © 2017年 china. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FSABPackView : UIView

@property (nonatomic,copy) void (^tapCallback)(FSABPackView *packView);

// 最大长度
@property (nonatomic,assign) CGFloat maxWidth;

- (void)setUpText:(NSString *)up aText:(NSString *)a bText:(NSString *)b;
- (void)setUpText:(NSString *)up;
- (void)setAText:(NSString *)a;
- (void)setBText:(NSString *)b;

@end
