//
//  FSMultiPeerService.h
//  myhome
//
//  Created by FudonFuchina on 2017/10/21.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>
#import "FSMultiPeerTool.h"
#import <FSTuple.h>

@interface FSMultiPeerService : NSObject

@property (nonatomic, strong) MCNearbyServiceAdvertiser *advertiser;
@property (nonatomic, strong) MCSession                 *session;
@property (nonatomic, strong) MCPeerID                  *peerID;

@property (nonatomic,copy) void (^receivedData)(id bData);
@property (nonatomic,copy) void (^usersChanged)(NSArray<MCPeerID *> *users);
@property (nonatomic,copy) void (^receiveResource)(NSString *rName,NSString *from,NSProgress *p);
@property (nonatomic,copy) void (^finishedResource)(NSString *rName,NSString *from,NSURL *local,NSError *error);

@end
