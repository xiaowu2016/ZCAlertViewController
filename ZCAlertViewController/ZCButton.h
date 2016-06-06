//
//  ZCButton.h
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

@class ZCTimerDisplay;

@interface ZCButton : UIButton

typedef void (^ZCActionBlock)(void);
typedef BOOL (^ZCValidationBlock)(void);
typedef NSDictionary* (^CompleteButtonFormatBlock)(void);
typedef NSDictionary* (^ButtonFormatBlock)(void);

//操作类型
typedef NS_ENUM(NSInteger, ZCActionType)
{
    ZCNone,
    ZCSelector,
    ZCBlock
};

/**
 *  用于设置按钮操作类型
 */
@property ZCActionType actionType;

/**
 *  用于设置按钮操作事件
 */
@property (nonatomic, copy) ZCActionBlock actionBlock;

/**
 *  用于设置验证按钮事件
 */
@property (nonatomic, copy) ZCValidationBlock validationBlock;

/**
 *  设置完成按钮格式
 */
@property (nonatomic, copy) CompleteButtonFormatBlock completeButtonFormatBlock;

/**
 *  设置按钮格式
 */
@property (nonatomic, copy) ButtonFormatBlock buttonFormatBlock;
/**
 *  设置ZCButton颜色
 */
@property (nonatomic, strong) UIColor *defaultBackgroundColor;

/**
 *  设置目标对象
 */
@property id target;
/**
 *  事件选择器
 */
@property SEL selector;

/**
 *  解析按钮配置
 *
 *  @param buttonConfig 按钮配置字典
 */
- (void)parseConfig:(NSDictionary *)buttonConfig;

/**
 *  定时器设置按钮
 */
@property (nonatomic) ZCTimerDisplay *timer;

- (instancetype)initWithWindowWidth:(CGFloat)windowWidth;

/**
 *  在按钮横向对齐时调整按钮宽度
 *
 *  @param windowWidht     弹框的宽度
 *  @param numberOfButtons 按钮的数量
 */
- (void)adjustWidthWithWindowWidth:(CGFloat)windowWidht numberOfButtons:(NSUInteger)numberOfButtons;

@end
