//
//  FSBaseView.h
//  ShareEconomy
//
//  Created by fudon on 16/5/4.
//  Copyright © 2016年 FudonFuchina. All rights reserved.
//

#import "FSBaseController.h"

@interface FSBaseView : UIView

@property (nonatomic,weak)UIViewController    *responderController;
@property (nonatomic,copy) void (^backTapBlock)(void);

// 只有在有黑色背影的时候调用这方法，暂时屏蔽左滑手势
- (instancetype)initWithFrame:(CGRect)frame controller:(UIViewController *)controller;

- (void)freeAction;


@end
