//
//  ZCAlertViewResponder.h
//  ZCAlertViewControllerDemo
//
//  Created by zhangchao on 16/6/2.
//  Copyright © 2016年 zhangchao. All rights reserved.
//

#if defined(__has_feature) && __has_feature(modules)
@import Foundation;
#else
#import <Foundation/Foundation.h>
#endif
#import "ZCAlertView.h"

@interface ZCAlertViewResponder : NSObject

- (instancetype)init:(ZCAlertView *)alertview;
/**
 *  关闭
 */
- (void)close;

@end
