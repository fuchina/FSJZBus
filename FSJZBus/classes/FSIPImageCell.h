//
//  FSIPImageCell.h
//  FSImage
//
//  Created by fudon on 2016/11/28.
//  Copyright © 2016年 Fudongdong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FSIPModel.h"

@interface FSIPImageCell : UICollectionViewCell

@property (nonatomic, strong) FSIPModel         *model;
@property (nonatomic, copy) void (^singleTapBlock)(void);

- (void)recoverSubviews;

@end
