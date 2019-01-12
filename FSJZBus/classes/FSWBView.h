//
//  FSWBView.h
//  ShareEconomy
//
//  Created by FudonFuchina on 16/8/13.
//  Copyright © 2016年 FudonFuchina. All rights reserved.
//

#import "FSBaseView.h"

@class FSWBView;
typedef void(^FSWBViewBlock)(FSWBView *bView,NSInteger bIndex);

@interface FSWBView : FSBaseView

@property (nonatomic,strong) UILabel    *titleLabel;
@property (nonatomic,copy) FSWBViewBlock    block;

- (void)showWBView:(BOOL)show;

@end
