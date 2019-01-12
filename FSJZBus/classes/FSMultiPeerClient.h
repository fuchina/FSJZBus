//
//  FSMultiPeerClient.h
//  myhome
//
//  Created by FudonFuchina on 2017/10/21.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>
#import "FSMultiPeerTool.h"
#import <FSTuple.h>

@interface FSMultiPeerClient : NSObject<MCNearbyServiceBrowserDelegate>

@property (nonatomic, strong) MCNearbyServiceBrowser    *browser;
@property (nonatomic, strong) MCSession                 *session;
@property (nonatomic, strong) MCPeerID                  *peerID;

@property (nonatomic,copy) void (^tips)(NSString *str);
@property (nonatomic,copy) void (^findAFriend)(MCPeerID *users);
@property (nonatomic,copy) void (^loseAFriend)(MCPeerID *users);
@property (nonatomic,copy) void (^usersChanged)(NSArray<MCPeerID *> *users);
@property (nonatomic,copy) void (^receivedData)(id bData);

- (void)connectToPeerID:(MCPeerID *)peerID completion:(void(^)(BOOL connected))completion;

@end
