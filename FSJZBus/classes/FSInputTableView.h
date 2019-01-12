//
//  FSInputTableView.h
//  MVVM
//
//  Created by Fudongdong on 2017/8/7.
//  Copyright © 2017年 china. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FSInputTableView : UIView

@property (nonatomic,strong) UITextField    *textField;
@property (nonatomic,strong) UITableView    *tableView;

// 必须设置，让tableView正好到屏幕底部
@property (nonatomic,assign) CGFloat         tableHeight;

@property (nonatomic,copy) NSString *(^textCallback)(NSString *input,NSInteger row);
@property (nonatomic,copy) NSInteger (^numberOfRowsInSection)(void);
@property (nonatomic,copy) void (^didSelectCallback)(NSString *input,NSInteger row);

@end
