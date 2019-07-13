//
//  FSInventoryListController.h
//  FSAccount
//
//  Created by FudonFuchina on 2019/6/16.
//

#import "FSShakeBaseController.h"
#import "FSInventoryGroupModel.h"

@interface FSInventoryListController : FSShakeBaseController

@property (nonatomic,strong) FSInventoryGroupModel  *model;
@property (nonatomic,copy) NSString                 *table;
@property (nonatomic,assign) BOOL                   soldout;

@property (nonatomic,copy) void (^edited)(void);

@end
