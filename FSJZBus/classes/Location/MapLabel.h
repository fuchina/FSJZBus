//
//  MapLabel.h
//  FuSoft
//
//  Created by FudonFuchina on 16/1/2.
//  Copyright © 2016年 Fuhope. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface MapLabel : UILabel

@property (nonatomic,strong) CLLocation     *location;
@property (nonatomic,copy) void (^block)(MapLabel *bLabel);

@end
