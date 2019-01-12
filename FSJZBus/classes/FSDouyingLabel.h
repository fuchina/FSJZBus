//
//  FSDouyingLabel.h
//  myhome
//
//  Created by FudonFuchina on 2018/9/15.
//  Copyright © 2018年 fuhope. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FSDouyingLabel : UILabel

- (void)douyingShow:(NSString *)txt completion:(void (^)(void))completion;

@end
