//
//  FSMultiPeer.h
//  myhome
//
//  Created by FudonFuchina on 2017/10/21.
//  Copyright © 2017年 fuhope. All rights reserved.
//

/*
     1.连接与断开可控；
     2.
 
 */

#import <Foundation/Foundation.h>
#import "FSMultiPeerClient.h"
#import "FSMultiPeerService.h"

@interface FSMultiPeer : NSObject

@property (nonatomic,strong) FSMultiPeerService *service;
@property (nonatomic,strong) FSMultiPeerClient  *client;

+(FSMultiPeer *)sharedInstance;

@end
