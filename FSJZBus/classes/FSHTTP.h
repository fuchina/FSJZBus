//
//  FSHTTP.h
//  myhome
//
//  Created by fudon on 2017/6/8.
//  Copyright © 2017年 fuhope. All rights reserved.
//

/*
 参考:
 http://www.jianshu.com/p/fafc67475c73
 
 */

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, FSHTTPMethod) {
    FSHTTPMethodGET,
    FSHTTPMethodPOST,
};

@interface FSHTTP : NSObject

- (NSURLSessionTask *)requestByGETWithUrl:(NSString *)urlString success:(void(^)(id bData))success fail:(void(^)(NSString *bError))fail;

/*
 NSString *path = [[NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) lastObject] stringByAppendingPathComponent:response.suggestedFilename];
 // 剪切文件
 [[NSFileManager defaultManager] moveItemAtURL:location toURL:[NSURL fileURLWithPath:path] error:nil];
 */
- (void)downloadFileWithUrl:(NSString *)urlString success:(void(^)(NSURL *bPath))success fail:(void(^)(NSString *bError))fail;

- (void)requestWithUrl:(NSString *)urlString params:(NSDictionary *)dic method:(FSHTTPMethod)method;

@end
