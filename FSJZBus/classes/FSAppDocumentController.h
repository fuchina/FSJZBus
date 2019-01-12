//
//  FSAppDocumentController.h
//  FSDocument
//
//  Created by fudon on 2016/12/17.
//  Copyright © 2016年 fuhope. All rights reserved.
//

/*
 //取得一个目录下得所有文件名
 NSArray *files = [fm subpathsAtPath: [self dataFilePath] ];
 
 //读取某个文件
 NSData *data = [fm contentsAtPath:[self dataFilePath]];
 
 //或者
 NSData *data = [NSData dataWithContentOfPath:[self dataFilePath]];
 }
 
 */

#import <UIKit/UIKit.h>
#import "FSBaseController.h"

@interface FSAppDocumentController : UIViewController

@property (nonatomic,copy) NSString *path;

@end
