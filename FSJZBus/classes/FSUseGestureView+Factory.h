//
//  FSUseGestureView+Factory.h
//  FSCalculator
//
//  Created by fudongdong on 2018/12/28.
//

#import "FSUseGestureView.h"
#import "FSAppManager.h"

@interface FSUseGestureView (Factory)


// 校验
+ (void)verify:(UIView *)superView password:(NSString *)password success:(void(^)(FSUseGestureView * view))success;
+ (void)verify:(UIView *)superView password:(NSString *)password success:(void(^)(FSUseGestureView * view))success cancel:(void(^)(void))cancel;

// 修改
+ (void)change:(UIView *)superView password:(NSString *)password completion:(void(^)(FSUseGestureView *view))completion;

// 设置
+ (void)setup:(UIView *)superView completion:(void(^)(FSUseGestureView *view))completion;

@end

