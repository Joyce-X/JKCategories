//
//  UITableView+iOS7Style.h
//  JKCategories (https://github.com/shaojiankui/JKCategories)
//
//  Created by Jakey on 15/6/1.
//  Copyright (c) 2015年 www.skyfox.org. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITableView (JKiOS7Style)
/**
 *  @brief  iOS 7 设置页面的 UITableViewCell 样式
 *
 *  @param cell      cell
 *  @param indexPath indexPath
 */
-(void)jk_applyiOS7SettingsStyleGrouping:(UITableViewCell *)cell forRowAtIndexPath:(NSIndexPath *)indexPath;
@end
