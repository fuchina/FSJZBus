//
//  FSSearchController.h
//  FSSearchDemo
//
//  Created by fudon on 2017/1/16.
//  Copyright © 2017年 fuhope. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FSSearchController : UIViewController

@property(strong, nonatomic) UISearchController *searchController;
@property(strong, nonatomic) NSMutableArray *allCities; // 所有城市
@property(strong, nonatomic) NSMutableArray *filteredCities; // 根据searchController搜索的城市

@end
