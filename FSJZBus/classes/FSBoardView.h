//
//  FSBoardView.h
//  myhome
//
//  Created by FudonFuchina on 2019/2/28.
//  Copyright © 2019 fuhope. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, FSActionType) {
    FSActionTypeQRCode = 0,                 //  二维码
    FSActionTypeLoanCounter,                //  个人账本
    FSActionTypeBestAccount,                //  公司账本
    FSActionTypeCalculator,                 //  计算器
    FSActionTypeTODO,                       //  待办
    FSActionTypeBirthday,                   //  生日
    FSActionTypePassword,                   //  密码
    FSActionTypeMakePassword,               //  生成密码
    FSActionTypeDiary,                      //  日记
    FSActionTypeLocation,                   //  定位
    FSActionTypeContact,                    //  通讯录
    FSActionTypeOther,                      //  其他
    FSActionTypeLast,                       //  其他
};

static NSString *FSBoardViewClickNotification = @"FSBoardViewClickNotification";

@interface FSBoardView : UIView

@end
