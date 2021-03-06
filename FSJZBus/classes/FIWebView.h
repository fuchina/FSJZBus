//
//  FIWebView.h
//  FSMasonry
//
//  Created by fudon on 15/12/9.
//  Copyright © 2015年 FudonFuchina. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FIWebView : UIWebView

//  获取某个标签的结点个数
- (int)nodeCountOfTag:(NSString *)tag;

///  获取当前页面URL
- (NSString *) getCurrentURL;

///  获取标题
- (NSString *) getTitle;

///  获取图片
- (NSArray *) getImgs;

///  获取当前页面所有链接
- (NSArray *) getOnClicks;

///  改变背景颜色
- (void) setBackgroundColor:(UIColor *) color;

///  为所有图片添加点击事件(网页中有些图片添加无效)
- (void) addClickEventOnImg;

///  改变指定标签的字体颜色
- (void) setFontColor:(UIColor *) color withTag:(NSString *)tagName;

///  改变指定标签的字体大小
- (void) setFontSize:(int) size withTag:(NSString *)tagName;

@end
