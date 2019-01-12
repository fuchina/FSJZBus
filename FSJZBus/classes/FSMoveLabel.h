//
//  FSMoveLabel.h
//  ShareEconomy
//
//  Created by FudonFuchina on 16/8/21.
//  Copyright © 2016年 FudonFuchina. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FSMoveLabel : UIView

@property (nonatomic,copy) NSString     *text;
@property (nonatomic,strong) UIColor    *textColor;

@property (nonatomic,copy) void (^tapBlock)(FSMoveLabel *bLabel);

- (void)start;
- (void)stop;

@end
