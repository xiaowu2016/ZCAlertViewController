//
//  ZCViewController.h
//  ZCSelfUSE
//
//  Created by zhangchao on 16/5/5.
//  Copyright © 2016年 zhangchao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZCAlertView.h"



NS_ASSUME_NONNULL_BEGIN

typedef void(^BLOCK)(void);
typedef void(^StringBLOCK)(NSString *aString);


#pragma mark普通弹框

@interface ZCViewController : UIViewController
/**
 *  创建只有一个按钮的弹框，并在点击时做某些事情
 *
 *  @param title    弹框的title
 *  @param message  弹框信息
 *  @param style    弹框的类型
 *  @param oneTitle 按钮的title
 *  @param block    BLOCK
 */
- (void)showAlertOneButtonWithTitle:(nullable NSString *)title
                         AndMessage:(nullable NSString *)message
                      AndAlertStyle:(UIAlertControllerStyle)style
                 AndOneButtonTittle:(NSString *)oneTitle
                           AndBlock:(__nullable BLOCK)block;

/**
 *  创建有两个按钮的弹框，两个按钮都自定义,并在点击这两个按钮时做某些事情
 *
 *  @param title    弹框的title
 *  @param message  弹框的信息
 *  @param style    弹框的类型
 *  @param oneTitle 第一个按钮的title
 *  @param twoTitle 第二个按钮的title
 *  @param oneBlock oneBLOCK
 *  @param twoBlock twoBLOCK
 */
- (void)showAlertTwoButtonWithTitle:(nullable NSString *)title
                         AndMessage:(nullable NSString *)message
                     AndAlertStyle :(UIAlertControllerStyle)style
                  AndOneButtonTitle:(NSString *)oneTitle
                  AndTwoButtonTitle:(NSString *)twoTitle
                        AndOneBlock:(__nullable BLOCK)oneBlock
                        AndTwoBlock:(__nullable BLOCK)twoBlock;

/**
 *  创建有三个按钮的弹框，三个按钮都自定义,并在点击这些按钮时做某些事情
 *
 *  @param title      弹框的title
 *  @param message    弹框的信息
 *  @param style      弹框的类型
 *  @param oneTitle   第一个按钮的title
 *  @param twoTitle   第二个按钮的title
 *  @param threeTitle 第三个按钮的title
 *  @param oneBlock   oneBLOCK
 *  @param twoBlock   twoBLOCK
 *  @param threeBlock threeBLOCK
 */
- (void)showAlertThreeButtonWithTitle:(nullable NSString *)title
                           AndMessage:(nullable NSString *)message
                       AndAlertStyle :(UIAlertControllerStyle)style
                    AndOneButtonTitle:(NSString *)oneTitle
                    AndTwoButtonTitle:(NSString *)twoTitle
                  AndThreeButtonTitle:(NSString *)threeTitle
                          AndOneBlock:(__nullable BLOCK)oneBlock
                          AndTwoBlock:(__nullable BLOCK)twoBlock
                        AndThreeBlock:(__nullable BLOCK)threeBlock;

/**
 *  创建一个弹框，可以自行定义有多少个按钮，但是需要传入按钮的title，并且每个按钮都可以定义一个BLOCK放到BLOCK数组中，在BLOCK中做自己想做的事
 *
 *  @param title      弹框的title
 *  @param message    弹框的信息
 *  @param style      弹框的类型
 *  @param array      按钮的title数组
 *  @param blockArray 按钮的BLOCK数组
 */
- (void)showAlertWithWithTitle:(nullable NSString *)title
                    AndMessage:(nullable NSString *)message
                AndAlertStyle :(UIAlertControllerStyle)style
               AndButtonString:(NSArray *)array
                 AndBlockArray:(NSArray<BLOCK> *)blockArray;

/**
 *  创建一个密码输入弹框
 *
 *  @param oneBlock 点击确定时要做的事情
 *  @param twoBlock 点击取消时要做的事情
 */
- (void)showTextFileEntryAlertWithOneBlock:(BLOCK)oneBlock
                               AndTwoBlock:(BLOCK)twoBlock;

/**
 *  在视图上显示一个自定义的Label,并使它停留一断时间
 *
 *  @param string Label的title
 *  @param block  BLOCK
 */
- (void)showLabelWithString:(NSString *)string
                   AndBlock:(__nullable BLOCK)block;


#pragma mark 自定义弹框
/**
 *  自定义一个Success类型的弹框
 *
 *  @param title               弹框标题
 *  @param text                弹框正文
 *  @param isHorizontalButtons 按钮对齐方式
 *  @param showAnimationType   弹框的显示方式 如果想要显示默认的可以传－1
 *  @param array               按钮的title
 *  @param dicArray            按钮的样式设置，传入字典放到数组中例如：
    buttonConfig[@"backgroundColor"] = [UIColor whiteColor];
    buttonConfig[@"textColor"] = [UIColor blackColor];
    buttonConfig[@"borderWidth"] = @2.0f;
    buttonConfig[@"borderColor"] = [UIColor greenColor];
 *  @param blockArray          按钮的点击事件
 */
- (void)showZCAlertViewTheSuccessWithTitle:(nullable NSString *)title
                                   AndText:(nullable NSString *)text
                    AndIsHorizontalButtons:(BOOL)isHorizontalButtons
                      AndShowAnimationType:(ZCAlertViewShowAnimation)showAnimationType
                           AndButtonString:(NSArray *)array
                            AndButtonStyle:(nullable NSArray *)dicArray
                             AndBlockArray:(nullable NSArray<BLOCK> *)blockArray;

/**
 *  自定义一个Error类型的弹框
 *
 *  @param title             弹框的标题
 *  @param showAnimationType 弹框的显示方式,如果想要显示默认的可以传－1
 *  @param text              弹框正文
 */
- (void)showZCAlertViewTheErrorWithTitle:(nullable NSString *)title
                    AndShowAnimationType:(ZCAlertViewShowAnimation)showAnimationType
                                 AndText:(nullable NSString *)text;

/**
 *  自定义一个Notice类型的弹框
 *
 *  @param title             弹框的标题
 *  @param backgroundType    弹框的背景样式，如果想要显示默认的可以传－1
 *  @param showAnimationType 弹框的显示方式,如果想要显示默认的可以传－1
 *  @param text              弹框正文
 */
- (void)showZCAlertViewTheNoticeWithTitle:(nullable NSString *)title
                        AndBackgroundType:(ZCAlertViewBackground)backgroundType
                     AndShowAnimationType:(ZCAlertViewShowAnimation)showAnimationType
                                  AndText:(nullable NSString *)text;

/**
 *  自定义一个Warning类型的弹框
 *
 *  @param title             弹框的标题
 *  @param showAnimationType 弹框的显示方式,如果想要显示默认的可以传－1
 *  @param hideAnimationType 弹框的关闭方式,如果想要显示默认的可以传－1
 *  @param text              弹框正文
 */
- (void)showZCAlertViewTheWarningWithTitle:(nullable NSString *)title
                      AndShowAnimationType:(ZCAlertViewShowAnimation)showAnimationType
                      AndHideAnimationType:(ZCAlertViewHideAnimation)hideAnimationType
                                   AndText:(nullable NSString *)text;

/**
 *  自定义一个Info类型的弹框
 *
 *  @param title             弹框的标题
 *  @param text              弹框正文
 *  @param showAnimationType 弹框的显示方式,如果想要显示默认的可以传－1
 *  @param hideAnimationType 弹框的关闭方式,如果想要显示默认的可以传－1
 *  @param array             按钮的title
 *  @param dicArray          按钮的样式设置，传入字典放到数组中例如：
 buttonConfig[@"backgroundColor"] = [UIColor whiteColor];
 buttonConfig[@"textColor"] = [UIColor blackColor];
 buttonConfig[@"borderWidth"] = @2.0f;
 buttonConfig[@"borderColor"] = [UIColor greenColor];
 *  @param blockArray        按钮的点击事件
 */
- (void)showZCAlertViewTheInfoWithTitle:(nullable NSString *)title
                                AndText:(nullable NSString *)text
                   AndShowAnimationType:(ZCAlertViewShowAnimation)showAnimationType
                   AndHideAnimationType:(ZCAlertViewHideAnimation)hideAnimationType
                        AndButtonString:(nullable NSArray *)array
                         AndButtonStyle:(nullable NSArray *)dicArray
                          AndBlockArray:(nullable NSArray<BLOCK> *)blockArray;

/**
 *  自定义一个Edit类型的弹框
 *
 *  @param title               弹框的标题
 *  @param text                弹框正文
 *  @param placeholder         textField的placeholder
 *  @param isHorizontalButtons 按钮对齐方式
 *  @param showAnimationType   弹框的显示方式,如果想要显示默认的可以传－1
 *  @param array               按钮的title
 *  @param dicArray            按钮的样式设置，传入字典放到数组中例如：
 buttonConfig[@"backgroundColor"] = [UIColor whiteColor];
 buttonConfig[@"textColor"] = [UIColor blackColor];
 buttonConfig[@"borderWidth"] = @2.0f;
 buttonConfig[@"borderColor"] = [UIColor greenColor];
 *  @param blockArray          按钮的点击事件
 */
- (void)showZCAlertViewTheEditWithTitle:(nullable NSString *)title
                                AndText:(nullable NSString *)text
                         AndPlaceholder:(NSString *)placeholder
                 AndIsHorizontalButtons:(BOOL)isHorizontalButtons
                   AndShowAnimationType:(ZCAlertViewShowAnimation)showAnimationType
                        AndButtonString:(NSArray *)array
                         AndButtonStyle:(nullable NSArray *)dicArray
                          AndBlockArray:(nullable NSArray<StringBLOCK> *)blockArray;

/**
 *  自定义一个带输入框的弹框
 *
 *  @param style               弹框类型
 *  @param title               弹框的标题
 *  @param text                弹框正文
 *  @param placeholder         textField的placeholder
 *  @param isHorizontalButtons 按钮对齐方式
 *  @param showAnimationType   弹框的显示方式,如果想要显示默认的可以传－1
 *  @param hideAnimation       弹框的关闭方式,如果想要显示默认的可以传－1
 *  @param backgroundType      弹框的背景样式，如果想要显示默认的可以传－1
 *  @param array               按钮的title
 *  @param dicArray            按钮的样式设置，传入字典放到数组中例如：
 buttonConfig[@"backgroundColor"] = [UIColor whiteColor];
 buttonConfig[@"textColor"] = [UIColor blackColor];
 buttonConfig[@"borderWidth"] = @2.0f;
 buttonConfig[@"borderColor"] = [UIColor greenColor];
 *  @param blockArray          按钮的点击事件
 */
- (void)showZCAlertViewTheAdvancedWithStyle:(ZCAlertViewStyle)style
                                   AndTitle:(nullable NSString *)title
                                    AndText:(nullable NSString *)text
                             AndPlaceholder:(NSString *)placeholder
                     AndIsHorizontalButtons:(BOOL)isHorizontalButtons
                       AndShowAnimationType:(ZCAlertViewShowAnimation)showAnimationType
                           AndHideAnimation:(ZCAlertViewHideAnimation)hideAnimation
                          AndBackgroundType:(ZCAlertViewBackground)backgroundType
                            AndButtonString:(NSArray *)array
                             AndButtonStyle:(nullable NSArray *)dicArray
                              AndBlockArray:(nullable NSArray<StringBLOCK> *)blockArray;

/**
 *  自定义一个一定时间关闭的弹框
 *
 *  @param title             弹框的标题
 *  @param duration          关闭时间
 *  @param showAnimationType 弹框的显示方式,如果想要显示默认的可以传－1
 *  @param hideAnimationType 弹框的关闭方式,如果想要显示默认的可以传－1
 *  @param text              弹框正文
 */
- (void)showZCAlertViewTheDurationWithTitle:(nullable NSString *)title
                                AndDuration:(NSTimeInterval)duration
                       AndShowAnimationType:(ZCAlertViewShowAnimation)showAnimationType
                       AndHideAnimationType:(ZCAlertViewHideAnimation)hideAnimationType
                                    AndText:(nullable NSString *)text;

/**
 *  自定义一个弹框(可设置弹框颜色和头像)
 *
 *  @param title             弹框的标题
 *  @param backgroundColor   弹框颜色
 *  @param image             弹框头像
 *  @param showAnimationType 弹框的显示方式,如果想要显示默认的可以传－1
 *  @param hideAnimationType 弹框的关闭方式,如果想要显示默认的可以传－1
 *  @param text              弹框正文
 */
- (void)showZCAlertViewTheCustomWithTitle:(nullable NSString *)title
                       AndBackgroundColor:(nullable UIColor *)backgroundColor
                                 AndImage:(nullable UIImage *)image
                     AndShowAnimationType:(ZCAlertViewShowAnimation)showAnimationType
                     AndHideAnimationType:(ZCAlertViewHideAnimation)hideAnimationType
                                  AndText:(nullable NSString *)text;

/**
 *  自定义一个Waiting类型的弹框
 *
 *  @param title             弹框的标题
 *  @param backgroundType    弹框的背景样式，如果想要显示默认的可以传－1
 *  @param showAnimationType 弹框的显示方式,如果想要显示默认的可以传－1
 *  @param hideAnimationType 弹框的关闭方式,如果想要显示默认的可以传－1
 *  @param text              弹框正文
 */
- (void)showZCAlertViewTheWaitingWithTitle:(nullable NSString *)title
                         AndBackgroundType:(ZCAlertViewBackground)backgroundType
                      AndShowAnimationType:(ZCAlertViewShowAnimation)showAnimationType
                      AndHideAnimationType:(ZCAlertViewHideAnimation)hideAnimationType
                                   AndText:(nullable NSString *)text;

/**
 *  自定义一个Info类型的带时间提示的弹框
 *
 *  @param title             弹框的标题
 *  @param duration          关闭时间
 *  @param showAnimationType 弹框的显示方式,如果想要显示默认的可以传－1
 *  @param hideAnimationType 弹框的关闭方式,如果想要显示默认的可以传－1
 *  @param text              弹框正文
 */
- (void)showZCAlertViewTheTimerWithTitle:(nullable NSString *)title
                             AndDuration:(NSTimeInterval)duration
                    AndShowAnimationType:(ZCAlertViewShowAnimation)showAnimationType
                    AndHideAnimationType:(ZCAlertViewHideAnimation)hideAnimationType
                                 AndText:(nullable NSString *)text;

/**
 *  自定义一个Question类型的弹框
 *
 *  @param title             弹框的标题
 *  @param showAnimationType 弹框的显示方式,如果想要显示默认的可以传－1
 *  @param hideAnimationType 弹框的关闭方式,如果想要显示默认的可以传－1
 *  @param text              弹框正文
 */
- (void)showZCAlertViewTheQuestionWithTitle:(nullable NSString *)title
                       AndShowAnimationType:(ZCAlertViewShowAnimation)showAnimationType
                       AndHideAnimationType:(ZCAlertViewHideAnimation)hideAnimationType
                                    AndText:(nullable NSString *)text;

/**
 *  自定义一个Custom类型的带开关的弹框
 *
 *  @param title       弹框的标题
 *  @param text        弹框正文
 *  @param switchTitle 开关的标题
 *  @param array       按钮的title
 *  @param dicArray    按钮的样式设置，传入字典放到数组中例如：
 buttonConfig[@"backgroundColor"] = [UIColor whiteColor];
 buttonConfig[@"textColor"] = [UIColor blackColor];
 buttonConfig[@"borderWidth"] = @2.0f;
 buttonConfig[@"borderColor"] = [UIColor greenColor];
 *  @param blockArray  按钮的点击事件
 */
- (void)showZCAlertViewTheSwitchWithTitle:(nullable NSString *)title
                                  AndText:(nullable NSString *)text
                           AndSwitchTitle:(nullable NSString *)switchTitle
                          AndButtonString:(NSArray *)array
                           AndButtonStyle:(nullable NSArray *)dicArray
                            AndBlockArray:(nullable NSArray<BLOCK> *)blockArray;

/**
 *  自定义一个弹框
 *
 *  @param style               弹框类型
 *  @param title               弹框的标题
 *  @param text                弹框正文
 *  @param isHorizontalButtons 按钮对齐方式
 *  @param showAnimationType   弹框的显示方式,如果想要显示默认的可以传－1
 *  @param hideAnimation       弹框的关闭方式,如果想要显示默认的可以传－1
 *  @param backgroundType      弹框的背景样式，如果想要显示默认的可以传－1
 *  @param array               按钮的title
 *  @param dicArray            按钮的样式设置，传入字典放到数组中例如：
 buttonConfig[@"backgroundColor"] = [UIColor whiteColor];
 buttonConfig[@"textColor"] = [UIColor blackColor];
 buttonConfig[@"borderWidth"] = @2.0f;
 buttonConfig[@"borderColor"] = [UIColor greenColor];
 *  @param blockArray          按钮的点击事件
 */
- (void)showZCAlertViewWithStyle:(ZCAlertViewStyle)style
                        AndTitle:(nullable NSString *)title
                         AndText:(nullable NSString *)text
          AndIsHorizontalButtons:(BOOL)isHorizontalButtons
            AndShowAnimationType:(ZCAlertViewShowAnimation)showAnimationType
                AndHideAnimation:(ZCAlertViewHideAnimation)hideAnimation
               AndBackgroundType:(ZCAlertViewBackground)backgroundType
                 AndButtonString:(NSArray *)array
                  AndButtonStyle:(nullable NSArray *)dicArray
                   AndBlockArray:(nullable NSArray<BLOCK> *)blockArray;

/**
 *  自定义一个菊花弹框
 *
 *  @param title             弹框的标题
 *  @param backgroundType    弹框的背景样式，如果想要显示默认的可以传－1
 *  @param showAnimationType 弹框的显示方式,如果想要显示默认的可以传－1
 *  @param hideAnimationType 弹框的关闭方式,如果想要显示默认的可以传－1
 *  @param text              弹框正文
 */
- (void)showZCWaitingWithTitle:(nullable NSString *)title
             AndBackgroundType:(ZCAlertViewBackground)backgroundType
          AndShowAnimationType:(ZCAlertViewShowAnimation)showAnimationType
          AndHideAnimationType:(ZCAlertViewHideAnimation)hideAnimationType
                       AndText:(nullable NSString *)text;
/**
 *  关闭菊花
 */
- (void)closeZCWaiting;
@end

NS_ASSUME_NONNULL_END