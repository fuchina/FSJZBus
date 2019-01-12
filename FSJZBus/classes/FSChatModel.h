//
//  FSChatModel.h
//  myhome
//
//  Created by FudonFuchina on 2017/10/22.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSChatModel : NSObject

@property (nonatomic,strong) NSNumber   *aid;
@property (nonatomic,copy)   NSString   *type;      // 类型，文字，图片，文件，视频等
@property (nonatomic,copy)   NSString   *content;   // 内容
@property (nonatomic,copy)   NSString   *send;      // 发送时间
@property (nonatomic,copy)   NSString   *rece;      // 接收时间
@property (nonatomic,copy)   NSString   *from;      // 发送者
@property (nonatomic,copy)   NSString   *to;        // 接收者
@property (nonatomic,copy)   NSString   *read;      // 已读标记

@end
