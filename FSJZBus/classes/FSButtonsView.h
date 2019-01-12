//
//  FSButtonsView.h
//  myhome
//
//  Created by FudonFuchina on 2016/12/11.
//  Copyright © 2016年 fuhope. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FSButtonsView : UIView

@property (nonatomic,copy) void (^clickBlock)(FSButtonsView *bView,NSInteger bSelectedIndex);
@property (nonatomic,assign) NSInteger              selectedIndex;

- (instancetype)initWithFrame:(CGRect)frame items:(NSArray *)items normalColor:(UIColor *)normalColor selectedColor:(UIColor *)selectedColor;


@end
