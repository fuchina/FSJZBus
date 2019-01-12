//
//  FSStoreManager.h
//  FSStoreManager
//
//  Created by fudon on 2016/12/6.
//  Copyright © 2016年 fuhope. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, FSUploadChannel) {
    FSUploadChannelQiniu,  // 七牛
    FSUploadChannelFuhope
};

@interface FSStoreManager : NSObject

+ (void)uploadUTF8Data:(NSData *)data key:(NSString *)key completion:(void(^)(void))completion;

@end
