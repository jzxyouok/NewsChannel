//
//  JhtChannelBarColorAndFontModel.h
//  JhtNewsChannelDemo
//
//  GitHub主页: https://github.com/jinht
//  CSDN博客: http://blog.csdn.net/anticipate91
//
//  Created by Jht on 2016/12/16.
//  Copyright © 2016年 JhtNewsChannelDemo. All rights reserved.
//
#import <UIKit/UIKit.h>

/** 频道栏_颜色和字号类_参数model */
@interface JhtChannelBarColorAndFontModel : NSObject

/** 频道常规颜色 */
@property (nonatomic, strong) UIColor *itemNormalColor;
/** 频道被选中的颜色 */
@property (nonatomic, strong) UIColor *itemSelectedColor;

/** 轨道颜色 */
@property (nonatomic, strong) UIColor *trackColor;

/** 未选中的 字号 */
@property (nonatomic, strong) UIFont *itemNormalFont;
/** 选中的字号 */
@property (nonatomic, strong) UIFont *itemSelectedFont;


@end
