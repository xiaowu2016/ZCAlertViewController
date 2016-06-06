//
//  ZCSwitchView.h
//  ZCAlertViewControllerDemo
//
//  Created by zhangchao on 16/6/2.
//  Copyright © 2016年 zhangchao. All rights reserved.
//

#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
#else
#import <UIKit/UIKit.h>
#endif

@interface ZCSwitchView : UIView

@property (strong, nonatomic) UIColor *tintColor;
@property (strong, nonatomic) UIColor *labelColor;
@property (strong, nonatomic) UIFont *labelFont;
@property (strong, nonatomic) NSString *labelText;
@property (nonatomic, getter=isSelected) BOOL selected;

@end
