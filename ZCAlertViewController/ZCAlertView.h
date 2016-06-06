//
//  ZCAlertView.h
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
#import "ZCButton.h"
#import "ZCTextView.h"
#import "ZCSwitchView.h"


typedef NSAttributedString* (^ZCAttributedFormatBlock)(NSString *value);
typedef void (^ZCDismissBlock)(void);
typedef void (^ZCForceHideBlock)(void);

@interface ZCAlertView : UIViewController
/**
*  Alert 样式
*/
typedef NS_ENUM(NSInteger, ZCAlertViewStyle)
{
    Success,
    Error,
    Notice,
    Warning,
    Info,
    Edit,
    Waiting,
    Question,
    Custom
};


/**
 *  Alert关闭时的动画效果
 */
typedef NS_ENUM(NSInteger, ZCAlertViewHideAnimation)
{
    FadeOut,
    SlideOutToBottom,
    SlideOutToTop,
    SlideOutToLeft,
    SlideOutToRight,
    SlideOutToCenter,
    SlideOutFromCenter,
    SimplyDisappear
};

/**
 *  Alert显示时的动画效果
 */
typedef NS_ENUM(NSInteger, ZCAlertViewShowAnimation)
{
    FadeIn,
    SlideInFromBottom,
    SlideInFromTop,
    SlideInFromLeft,
    SlideInFromRight,
    SlideInFromCenter,
    SlideInToCenter,
    SimplyAppear
};

/**
 *  Alert背景样式
 */
typedef NS_ENUM(NSInteger, ZCAlertViewBackground)
{
    Shadow,
    Blur,
    Transparent
};
/**
 *  view的圆角半径
 */
@property CGFloat cornerRadius;
/**
 *  是否设置AlertView顶部圆形的色彩，默认为YES
 */
@property BOOL tintTopCircle;
/**
 *  是否让AlertView顶部圆形使用大图标，默认为NO
 */
@property BOOL useLargerIcon;
/**
 *  显示标题的Label
 */
@property UILabel *labelTitle;
/**
 *  AlertView的正文视图
 */
@property UITextView *viewText;
/**
 *  活动指示器
 */
@property UIActivityIndicatorView *activityIndicatorView;

@property (nonatomic, assign) BOOL shouldDismissOnTapOutside;
/**
 *  声音的URL
 */
@property (nonatomic, strong) NSURL *soundURL;
/**
 *  设置文本属性格式的block
 */
@property (nonatomic, copy) ZCAttributedFormatBlock attributedFormatBlock;
/**
 *  设置完成按钮格式的block
 */
@property (nonatomic, copy) CompleteButtonFormatBlock completeButtonFormatBlock;
/**
 *  设置按钮格式的block
 */
@property (nonatomic, copy) ButtonFormatBlock buttonFormatBlock;
/**
 *  用来隐藏视图的block
 */
@property (nonatomic, copy) ZCForceHideBlock forceHideBlock;
/**
 *  隐藏时的动画效果，默认为FadeOut
 */
@property (nonatomic) ZCAlertViewHideAnimation hideAnimationType;
/**
 *  显示时的动画效果，默认为SlideInFromTop
 */
@property (nonatomic) ZCAlertViewShowAnimation showAnimationType;
/**
 *  背景样式，默认为Shadow
 */
@property (nonatomic) ZCAlertViewBackground backgroundType;
/**
 *  自定义AlertView上控件的颜色
 */
@property (nonatomic, strong) UIColor *customViewColor;
/**
 *  自定义AlertView的背景色
 */
@property (nonatomic, strong) UIColor *backgroundViewColor;
/**
 *  自定义图标颜色
 */
@property (nonatomic, strong) UIColor *iconTintColor;
/**
 *  自定义圆角图标高度
 */
@property (nonatomic) CGFloat circleIconHeight;
/**
 *  设置AlertView扩展边界。
 */
@property (nonatomic) CGRect extensionBounds;
/**
 *  设置状态栏隐藏
 */
@property (nonatomic) BOOL statusBarHidden;
/**
 *  设置状态栏风格。
 */
@property (nonatomic) UIStatusBarStyle statusBarStyle;
/**
 *  设置AlertView上的按钮水平对齐
 */
@property (nonatomic) BOOL horizontalButtons;
/**
 *  初始化的新窗口
 *
 *  @return AlertView对象
 */
- (instancetype)initWithNewWindow;
/**
 *  初始化的新窗口并自定义宽度
 *
 *  @param windowWidth 窗口宽度
 *
 *  @return AlertView对象
 */
- (instancetype)initWithNewWindowWidth:(CGFloat)windowWidth;
/**
 *  关闭提示框
 *
 *  @param dismissBlock ZCDismissBlock
 */
- (void)alertIsDismissed:(ZCDismissBlock)dismissBlock;
/**
 *  隐藏AlertView
 */
- (void)hideView;
/**
 *  设置是否可见
 *
 *  @return YES/NO
 */
- (BOOL)isVisible;
/**
 *  去除齿顶圆
 */
- (void)removeTopCircle;
/**
 *  添加一个自定义视图
 *
 *  @param customView 自定义视图
 *
 *  @return
 */
- (UIView *)addCustomView:(UIView *)customView;
/**
 *  添加TextField
 *
 *  @param title TextField的title
 *
 *  @return ZCTextView
 */
- (ZCTextView *)addTextField:(NSString *)title;
/**
 *  程序员提供的文本字段自定义文本域
 *
 *  @param textField textField
 */
- (void)addCustomTextField:(UITextField *)textField;
/**
 *  添加一个开关视图
 *
 *  @param label 开关的title
 *
 *  @return ZCSwitchView
 */
- (ZCSwitchView *)addSwitchViewWithLabel:(NSString *)label;
/**
 *  添加计时器显示
 *
 *  @param buttonIndex 在第几个button上显示计时时间
 *  @param reverse     是否倒计时
 */
- (void)addTimerToButtonIndex:(NSInteger)buttonIndex reverse:(BOOL)reverse;
/**
 *  设置标题字体和大小
 *
 *  @param titleFontFamily 标题字体类型
 *  @param size            字体大小
 */
- (void)setTitleFontFamily:(NSString *)titleFontFamily withSize:(CGFloat)size;
/**
 *  设置文本框的字体和大小
 *
 *  @param bodyTextFontFamily 文本框字体的类型
 *  @param size               字体大小
 */
- (void)setBodyTextFontFamily:(NSString *)bodyTextFontFamily withSize:(CGFloat)size;
/**
 *  设置button的字体和大小
 *
 *  @param buttonsFontFamily 按钮字体类型
 *  @param size              字体大小
 */
- (void)setButtonsTextFontFamily:(NSString *)buttonsFontFamily withSize:(CGFloat)size;
/**
 *  添加一个按钮设置标题和按钮的点击事件
 *
 *  @param title  标题
 *  @param action ZCActionBlock
 *
 *  @return ZCButton
 */
- (ZCButton *)addButton:(NSString *)title actionBlock:(ZCActionBlock)action;
/**
 *  添加一个按钮,一个标题和来处理验证的点击事件。
 *
 *  @param title           标题
 *  @param validationBlock ZCValidationBlock
 *  @param action          ZCActionBlock
 *
 *  @return ZCButton
 */
- (ZCButton *)addButton:(NSString *)title validationBlock:(ZCValidationBlock)validationBlock actionBlock:(ZCActionBlock)action;
/**
 *  添加一个按钮和一个标题、一个目标和一个选择器来处理按钮的点击事件
 *
 *  @param title    标题
 *  @param target   实现方法的类
 *  @param selector 方法
 *
 *  @return ZCButton
 */
- (ZCButton *)addButton:(NSString *)title target:(id)target selector:(SEL)selector;
/**
 *  显示成功样式的AlertView
 *
 *  @param vc               控制器
 *  @param title            标题
 *  @param subTitle         正文
 *  @param closeButtonTitle 关闭弹框的按钮title
 *  @param duration         弹框显示的时间，如果输入0.0f表示不会自动关闭弹框
 */
- (void)showSuccess:(UIViewController *)vc title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showSuccess:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
/**
 *  显示Error样式的AlertView
 *
 *  @param vc               控制器
 *  @param title            标题
 *  @param subTitle         正文
 *  @param closeButtonTitle 关闭弹框的按钮title
 *  @param duration         弹框显示的时间，如果输入0.0f表示不会自动关闭弹框
 */
- (void)showError:(UIViewController *)vc title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showError:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
/**
 *  显示Notice(请注意)样式的AlertView
 *
 *  @param vc               控制器
 *  @param title            标题
 *  @param subTitle         正文
 *  @param closeButtonTitle 关闭弹框的按钮title
 *  @param duration         弹框显示的时间，如果输入0.0f表示不会自动关闭弹框
 */
- (void)showNotice:(UIViewController *)vc title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showNotice:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
/**
 *  显示Warning(警告)样式的AlertView
 *
 *  @param vc               控制器
 *  @param title            标题
 *  @param subTitle         正文
 *  @param closeButtonTitle 关闭弹框的按钮title
 *  @param duration         弹框显示的时间，如果输入0.0f表示不会自动关闭弹框
 */
- (void)showWarning:(UIViewController *)vc title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showWarning:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
/**
 *  显示info(信息)样式的AlertView
 *
 *  @param vc               控制器
 *  @param title            标题
 *  @param subTitle         正文
 *  @param closeButtonTitle 关闭弹框的按钮title
 *  @param duration         弹框显示的时间，如果输入0.0f表示不会自动关闭弹框
 */
- (void)showInfo:(UIViewController *)vc title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showInfo:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
/**
 *  显示Edit(可编辑)样式的AlertView
 *
 *  @param vc               控制器
 *  @param title            标题
 *  @param subTitle         正文
 *  @param closeButtonTitle 关闭弹框的按钮title
 *  @param duration         弹框显示的时间，如果输入0.0f表示不会自动关闭弹框
 */
- (void)showEdit:(UIViewController *)vc title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showEdit:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
/**
 *  显示一个预定义类型的AlertView来显示标题
 *
 *  @param vc               控制器
 *  @param title            标题
 *  @param subTitle         正文
 *  @param style            Alert 样式
 *  @param closeButtonTitle 关闭弹框的按钮title
 *  @param duration         弹框显示的时间，如果输入0.0f表示不会自动关闭弹框
 */
- (void)showTitle:(UIViewController *)vc title:(NSString *)title subTitle:(NSString *)subTitle style:(ZCAlertViewStyle)style closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showTitle:(NSString *)title subTitle:(NSString *)subTitle style:(ZCAlertViewStyle)style closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;

/**
 *  显示自定义的AlertView，可以自定义颜色和图像
 *
 *  @param vc               控制器
 *  @param image            顶部圆形的图片
 *  @param color            color
 *  @param title            标题
 *  @param subTitle         正文
 *  @param closeButtonTitle 关闭弹框的按钮title
 *  @param duration         弹框显示的时间，如果输入0.0f表示不会自动关闭弹框
 */
- (void)showCustom:(UIViewController *)vc image:(UIImage *)image color:(UIColor *)color title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showCustom:(UIImage *)image color:(UIColor *)color title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
/**
 *  显示一个Waiting类型的AlertView
 *
 *  @param vc               控制器
 *  @param title            标题
 *  @param subTitle         正文
 *  @param closeButtonTitle 关闭弹框的按钮title
 *  @param duration         弹框显示的时间，如果输入0.0f表示不会自动关闭弹框
 */
- (void)showWaiting:(UIViewController *)vc title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showWaiting:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;

/**
 *  显示一个Question类型的AlertView
 *
 *  @param vc               控制器
 *  @param title            标题
 *  @param subTitle         正文
 *  @param closeButtonTitle 关闭弹框的按钮title
 *  @param duration         弹框显示的时间，如果输入0.0f表示不会自动关闭弹框
 */
- (void)showQuestion:(UIViewController *)vc title:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
- (void)showQuestion:(NSString *)title subTitle:(NSString *)subTitle closeButtonTitle:(NSString *)closeButtonTitle duration:(NSTimeInterval)duration;
@end


@interface ZCAlertViewShowBuilder : NSObject
@property(weak, nonatomic, readonly) UIViewController *parameterViewController;
@property(copy, nonatomic, readonly) UIImage *parameterImage;
@property(copy, nonatomic, readonly) UIColor *parameterColor;
@property(copy, nonatomic, readonly) NSString *parameterTitle;
@property(copy, nonatomic, readonly) NSString *parameterSubTitle;
@property(copy, nonatomic, readonly) NSString *parameterCompleteText;
@property(copy, nonatomic, readonly) NSString *parameterCloseButtonTitle;
@property(assign, nonatomic, readonly) ZCAlertViewStyle parameterStyle;
@property(assign, nonatomic, readonly) NSTimeInterval parameterDuration;

#pragma mark - Setters
@property(copy, nonatomic, readonly) ZCAlertViewShowBuilder *(^viewController)(UIViewController *viewController);
@property(copy, nonatomic, readonly) ZCAlertViewShowBuilder *(^image)(UIImage *image);
@property(copy, nonatomic, readonly) ZCAlertViewShowBuilder *(^color)(UIColor *color);
@property(copy, nonatomic, readonly) ZCAlertViewShowBuilder *(^title)(NSString *title);
@property(copy, nonatomic, readonly) ZCAlertViewShowBuilder *(^subTitle)(NSString *subTitle);
@property(copy, nonatomic, readonly) ZCAlertViewShowBuilder *(^completeText)(NSString *completeText);
@property(copy, nonatomic, readonly) ZCAlertViewShowBuilder *(^style)(ZCAlertViewStyle style);
@property(copy, nonatomic, readonly) ZCAlertViewShowBuilder *(^closeButtonTitle)(NSString *closeButtonTitle);
@property(copy, nonatomic, readonly) ZCAlertViewShowBuilder *(^duration)(NSTimeInterval duration);

- (void)showAlertView:(ZCAlertView *)alertView;
- (void)showAlertView:(ZCAlertView *)alertView onViewController:(UIViewController *)controller;
@property(copy, nonatomic, readonly) void (^show)(ZCAlertView *view, UIViewController *controller);
@end

@interface ZCALertViewTextFieldBuilder : NSObject

#pragma mark - Available later after adding
@property(weak, nonatomic, readonly) ZCTextView *textField;

#pragma mark - Setters
@property(copy, nonatomic, readonly) ZCALertViewTextFieldBuilder *(^title) (NSString *title);

@end

@interface ZCALertViewButtonBuilder : NSObject

#pragma mark - Available later after adding
@property(weak, nonatomic, readonly) ZCButton *button;

#pragma mark - Setters
@property(copy, nonatomic, readonly) ZCALertViewButtonBuilder *(^title) (NSString *title);
@property(copy, nonatomic, readonly) ZCALertViewButtonBuilder *(^target) (id target);
@property(copy, nonatomic, readonly) ZCALertViewButtonBuilder *(^selector) (SEL selector);
@property(copy, nonatomic, readonly) ZCALertViewButtonBuilder *(^actionBlock) (void(^actionBlock)(void));
@property(copy, nonatomic, readonly) ZCALertViewButtonBuilder *(^validationBlock) (BOOL(^validationBlock)(void));

@end

@interface ZCAlertViewBuilder : NSObject

#pragma mark - Parameters
@property (strong, nonatomic, readonly) ZCAlertView *alertView;

#pragma mark - Init
- (instancetype)init;
- (instancetype)initWithNewWindow;
- (instancetype)initWithNewWindowWidth:(CGFloat)width;

#pragma mark - Properties
@property(copy, nonatomic) ZCAlertViewBuilder *(^cornerRadius) (CGFloat cornerRadius);
@property(copy, nonatomic) ZCAlertViewBuilder *(^tintTopCircle) (BOOL tintTopCircle);
@property(copy, nonatomic) ZCAlertViewBuilder *(^useLargerIcon) (BOOL useLargerIcon);
@property(copy, nonatomic) ZCAlertViewBuilder *(^labelTitle) (UILabel *labelTitle);
@property(copy, nonatomic) ZCAlertViewBuilder *(^viewText) (UITextView *viewText);
@property(copy, nonatomic) ZCAlertViewBuilder *(^activityIndicatorView) (UIActivityIndicatorView *activityIndicatorView);
@property(copy, nonatomic) ZCAlertViewBuilder *(^shouldDismissOnTapOutside) (BOOL shouldDismissOnTapOutside);
@property(copy, nonatomic) ZCAlertViewBuilder *(^soundURL) (NSURL *soundURL);
@property(copy, nonatomic) ZCAlertViewBuilder *(^attributedFormatBlock) (ZCAttributedFormatBlock attributedFormatBlock);
@property(copy, nonatomic) ZCAlertViewBuilder *(^completeButtonFormatBlock) (CompleteButtonFormatBlock completeButtonFormatBlock);
@property(copy, nonatomic) ZCAlertViewBuilder *(^buttonFormatBlock) (ButtonFormatBlock buttonFormatBlock);
@property(copy, nonatomic) ZCAlertViewBuilder *(^forceHideBlock) (ZCForceHideBlock forceHideBlock);
@property(copy, nonatomic) ZCAlertViewBuilder *(^hideAnimationType) (ZCAlertViewHideAnimation hideAnimationType);
@property(copy, nonatomic) ZCAlertViewBuilder *(^showAnimationType) (ZCAlertViewShowAnimation showAnimationType);
@property(copy, nonatomic) ZCAlertViewBuilder *(^backgroundType) (ZCAlertViewBackground backgroundType);
@property(copy, nonatomic) ZCAlertViewBuilder *(^customViewColor) (UIColor *customViewColor);
@property(copy, nonatomic) ZCAlertViewBuilder *(^backgroundViewColor) (UIColor *backgroundViewColor);
@property(copy, nonatomic) ZCAlertViewBuilder *(^iconTintColor) (UIColor *iconTintColor);
@property(copy, nonatomic) ZCAlertViewBuilder *(^circleIconHeight) (CGFloat circleIconHeight);
@property(copy, nonatomic) ZCAlertViewBuilder *(^extensionBounds) (CGRect extensionBounds);
@property(copy, nonatomic) ZCAlertViewBuilder *(^statusBarHidden) (BOOL statusBarHidden);
@property(copy, nonatomic) ZCAlertViewBuilder *(^statusBarStyle) (UIStatusBarStyle statusBarStyle);

#pragma mark - Custom Setters
@property(copy, nonatomic) ZCAlertViewBuilder *(^alertIsDismissed) (ZCDismissBlock dismissBlock);
@property(copy, nonatomic) ZCAlertViewBuilder *(^removeTopCircle)(void);
@property(copy, nonatomic) ZCAlertViewBuilder *(^addCustomView)(UIView *view);
@property(copy, nonatomic) ZCAlertViewBuilder *(^addTextField)(NSString *title);
@property(copy, nonatomic) ZCAlertViewBuilder *(^addCustomTextField)(UITextField *textField);
@property(copy, nonatomic) ZCAlertViewBuilder *(^addSwitchViewWithLabelTitle)(NSString *title);
@property(copy, nonatomic) ZCAlertViewBuilder *(^addTimerToButtonIndex)(NSInteger buttonIndex, BOOL reverse);
@property(copy, nonatomic) ZCAlertViewBuilder *(^setTitleFontFamily)(NSString *titleFontFamily, CGFloat size);
@property(copy, nonatomic) ZCAlertViewBuilder *(^setBodyTextFontFamily)(NSString *bodyTextFontFamily, CGFloat size);
@property(copy, nonatomic) ZCAlertViewBuilder *(^setButtonsTextFontFamily)(NSString *buttonsFontFamily, CGFloat size);
@property(copy, nonatomic) ZCAlertViewBuilder *(^addButtonWithActionBlock)(NSString *title, ZCActionBlock action);
@property(copy, nonatomic) ZCAlertViewBuilder *(^addButtonWithValidationBlock)(NSString *title, ZCValidationBlock validationBlock, ZCActionBlock action);
@property(copy, nonatomic) ZCAlertViewBuilder *(^addButtonWithTarget)(NSString *title, id target, SEL selector);

#pragma mark - Builders
@property(copy, nonatomic) ZCAlertViewBuilder *(^addButtonWithBuilder)(ZCALertViewButtonBuilder *builder);
@property(copy, nonatomic) ZCAlertViewBuilder *(^addTextFieldWithBuilder)(ZCALertViewTextFieldBuilder *builder);
@end
