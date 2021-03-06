//
//  HSCButton.h
//  VOA
//  custom button that can drag move
//  Created by zhangmh on 12-7-20.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//
/*
 custom button that can drag move
 */
#import <UIKit/UIKit.h>

@class HSCButton;

@protocol HSCButtonDelegate <NSObject>
@optional
- (void)dragMove:(HSCButton *)myButton;
- (void)dragEnd:(HSCButton *)myButton;
@end

/**
 *
 */
@interface HSCButton : UIButton
{
    CGPoint beginPoint;
}

@property (nonatomic, assign) id <HSCButtonDelegate> delegate;

@property (nonatomic) BOOL dragEnable;
@property (nonatomic) float leftMargin;
@property (nonatomic) float rightMargin;

@end
