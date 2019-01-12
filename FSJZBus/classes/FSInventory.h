//
//  FSInventory.h
//  myhome
//
//  Created by FudonFuchina on 2018/2/3.
//  Copyright © 2018年 fuhope. All rights reserved.
//

/*
 1.计量：
 按量减少，可售最小单位。
 
 2.计重：
 按重减少，单位：公斤。
 
 3.计价：
 只记录成本价；
 
 面向对象管理：
 1.库存表
     @aid：序号；
     @ctime：数据库存储时间；
   @cost：原价，总成本,【不要修改】;
   @num：计量的数量，计重的重量，【不要修改】;
   @sid：商品id；
   @name：商品名称；
   @type:类型
   @time：进货的时间；
     @rest：计量的剩余数量，计重的剩余重量，操作时记这个；
     @done：售罄；
     @sale：收入，每次销售收入的累加；
 
 // 这三个值不需要存库
     @profit：收益；【售完后才有值】
     @rate：收益率；同上
     @yera：年化收益率；
 
 2.辅助表：
     @aid：序号；
     @ctime：数据库时间；
     @name：商品名称；
     @time：销售的时间；
     @to：卖给谁;
 
 3.商品库
     @aid：序号；
     @time：数据库时间；
     @name：名称；
     @from：供应商；
     @type：商品类型，计量还是计重；
     @unit：单位；
     @freq：排序用;
 */

#ifndef FSInventory_h
#define FSInventory_h

#define Notification_Add_Goods_Success      @"Notification_Add_Goods_Success"

typedef NS_ENUM(NSInteger, FSInventoryType) {
    FSInventoryTypeUnknown = 0,          // 未知
    FSInventoryTypeNumber = 1,           // 计数
    FSInventoryTypeWeight = 2,           // 计重
    FSInventoryTypePrice = 3,            // 计价
};

#endif /* FSInventory_h */
