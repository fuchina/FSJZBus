//
//  FSMultipeerProcessView.h
//  Expand
//
//  Created by Fudongdong on 2017/10/24.
//  Copyright © 2017年 china. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FSMultipeerProcessView : UIView

@property (nonatomic,copy)void (^tapCallback)(FSMultipeerProcessView *view);

- (void)setName:(NSString *)name;
- (void)setFile:(NSString *)file;
- (void)setProcess:(CGFloat)process;

@end
