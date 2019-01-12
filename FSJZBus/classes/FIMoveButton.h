//
//  FIMoveButton.h
//  FuHope
//
//  Created by FudonFuchina on 15/8/29.
//  Copyright (c) 2015年 ronglian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FIMoveButton : UIView

@property (nonatomic, copy) void (^tapBlock)(FIMoveButton *bView,NSInteger bTaps);

@end
