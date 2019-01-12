//
//  FSWSKCell.h
//  FTK
//
//  Created by fudon on 2017/2/3.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FSWSKCell : UITableViewCell

@property (nonatomic,strong) NSDictionary   *dic;
@property (nonatomic,assign) NSInteger   type;   // 牌,王为13

@property (nonatomic, copy)  void(^addAction)(NSInteger bType,NSInteger bColor);    // 增加回调,bType:牌,bColor:黑1梅2红3方4
@property (nonatomic, copy)  void(^deleteAction)(NSInteger bType,NSInteger bColor);    // 删除回调,bType:牌,bColor:黑1梅2红3方4

@end
