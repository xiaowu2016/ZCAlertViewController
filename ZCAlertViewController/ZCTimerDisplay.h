//
//  ZCTimerDisplay.h
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

@interface ZCTimerDisplay : UIView{
    CGFloat currentAngle;
    CGFloat currentTime;
    CGFloat timerLimit;
    CGFloat radius;
    CGFloat lineWidth;
    NSTimer *timer;
    ZCActionBlock completedBlock;
}

@property CGFloat currentAngle;
@property NSInteger buttonIndex;
@property (nonatomic) UIColor *color;
@property (nonatomic) BOOL reverse;

- (instancetype)initWithOrigin:(CGPoint)origin radius:(CGFloat)r;
- (instancetype)initWithOrigin:(CGPoint)origin radius:(CGFloat)r lineWidth:(CGFloat)width;
- (void)updateFrame:(CGSize)size;
- (void)cancelTimer;
- (void)stopTimer;
- (void)startTimerWithTimeLimit:(int)tl completed:(ZCActionBlock)completed;

@end
