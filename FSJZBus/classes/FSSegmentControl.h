//
//  FSSegmentControl.h
//  ShareEconomy
//
//  Created by FudonFuchina on 16/8/7.
//  Copyright © 2016年 FudonFuchina. All rights reserved.
//

#import "FSBaseView.h"

@class FSSegmentControl;
typedef void(^FSSegmentControlBlock)(FSSegmentControl   *bControl,NSInteger bSelectedIndex);

@interface FSSegmentControl : FSBaseView

@property (nonatomic,copy) FSSegmentControlBlock    block;

@end
