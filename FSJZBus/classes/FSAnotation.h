//
//  FSAnotation.h
//  FSAccount
//
//  Created by FudonFuchina on 2019/4/13.
//

#import <Foundation/Foundation.h>
#import <MAMapKit/MAMapKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FSAnotation : NSObject<MAAnnotation>

///标注view中心坐标
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

///annotation标题
@property (nonatomic, copy) NSString *title;

///annotation副标题
@property (nonatomic, copy) NSString *subtitle;

/**
 * @brief 设置标注的坐标，在拖拽时会被调用.
 * @param newCoordinate 新的坐标值
 */
- (void)setCoordinate:(CLLocationCoordinate2D)newCoordinate;

@end

NS_ASSUME_NONNULL_END
