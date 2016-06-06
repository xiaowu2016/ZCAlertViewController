//
//  ZCAlertViewStyleKit.h
//  ZCAlertViewControllerDemo
//
//  Created by zhangchao on 16/6/2.
//  Copyright © 2016年 zhangchao. All rights reserved.
//

#if defined(__has_feature) && __has_feature(modules)
@import Foundation;
@import UIKit;
#else
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#endif
#import "ZCButton.h"

@interface ZCAlertViewStyleKit : NSObject
/**
 *  设置Checkmark的image
 *
 *  @return UIImage
 */
+ (UIImage*)imageOfCheckmark;

/**
 *  设置Cross的image
 *
 *  @return UIImage
 */
+ (UIImage*)imageOfCross;

/**
 *  设置Notice的image
 *
 *  @return UIImage
 */
+ (UIImage*)imageOfNotice;

/**
 *  设置Warning的image
 *
 *  @return UIImage
 */
+ (UIImage*)imageOfWarning;

/**
 *  设置Info的image
 *
 *  @return UIImage
 */
+ (UIImage*)imageOfInfo;

/**
 *  设置Edit的image
 *
 *  @return UIImage
 */
+ (UIImage*)imageOfEdit;

/**
 *  设置Question的image
 *
 *  @return UIImage
 */
+ (UIImage*)imageOfQuestion;

/**
 *  绘制Checkmark类型的弹框框架
 */
+ (void)drawCheckmark;

/**
 *  绘制Cross类型的弹框框架
 */
+ (void)drawCross;

/**
 *  绘制Notice类型的弹框框架
 */
+ (void)drawNotice;

/**
 *  绘制Warning类型的弹框框架
 */
+ (void)drawWarning;

/**
 *  绘制Info类型的弹框框架
 */
+ (void)drawInfo;

/**
 *  绘制Edit类型的弹框框架
 */
+ (void)drawEdit;

/**
 *  绘制Question类型的弹框框架
 */
+ (void)drawQuestion;

@end
