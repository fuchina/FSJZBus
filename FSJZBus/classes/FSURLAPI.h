//
//  FSURLAPI.h
//  myhome
//
//  Created by FudonFuchina on 2018/8/26.
//  Copyright © 2018年 fuhope. All rights reserved.
//

#import "FSBaseAPI.h"
#import "FSUrlModel.h"

@interface FSURLAPI : FSBaseAPI

+ (void)initConfigForNewUsers:(void(^)(void))completion;

+ (NSString *)addUrl:(NSString *)name url:(NSString *)url;

@end
