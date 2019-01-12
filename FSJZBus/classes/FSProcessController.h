//
//  FSProcessController.h
//  Expand
//
//  Created by Fudongdong on 2017/10/24.
//  Copyright © 2017年 china. All rights reserved.
//

#import "FSBaseController.h"
@class FSProcessModel;

@interface FSProcessController : FSBaseController

- (void)addData:(FSProcessModel *)model atIndex:(NSInteger)index;

@end
