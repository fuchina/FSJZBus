//
//  FSMultiPeerTool.h
//  myhome
//
//  Created by FudonFuchina on 2017/10/21.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>
#import <FSKit.h>
#import <FSTuple.h>

static NSString     *_send_type = @"JINZHA_MUTILPEER_SEND_TYPE";

@interface FSMultiPeerTool : NSObject

+ (NSString *)deviceNameBytesShorterThan64Bytes;

// ServiceType，不要更改，以免出现不同版本连接不上的问题
+ (NSString *)multiPeerServiceType;

// 发送文字
+ (NSString *)session:(MCSession *)session sendObject:(NSDictionary *)from toUsers:(NSArray<NSString *> *)users withMode:(MCSessionSendDataMode)mode;
// 发送图片
+ (Tuple2*)session:(MCSession *)session sendImageWithURL:(NSURL *)url toUsers:(NSString *)user withMode:(MCSessionSendDataMode)mode completion:(void(^)(NSError *error))completion;
+ (NSMutableArray *)hanleUsers:(NSArray<NSString *> *)users session:(MCSession *)session;

@end
