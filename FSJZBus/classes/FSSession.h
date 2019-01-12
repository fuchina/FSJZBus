//
//  FSSession.h
//  Expand
//
//  Created by Fudongdong on 2017/11/16.
//  Copyright © 2017年 china. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FSSession : NSObject

// GET请求
+ (NSURLSessionTask *)get:(NSString *)url completion:(void(^)(NSDictionary *bData,NSString *error))completion;

@end
