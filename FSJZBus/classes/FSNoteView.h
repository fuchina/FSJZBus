//
//  FSNoteView.h
//  myhome
//
//  Created by FudonFuchina on 2017/8/22.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FSNoteView : UIView<UIScrollViewDelegate>

@property (nonatomic,copy) void (^close)(FSNoteView *bView);
@property (nonatomic,copy) void (^keyboardExit)(void);

@end
