//
//  TimerView.h
//  LjIndoor
//
//  Created by User on 17/11/16.
//  Copyright © 2016 Logicjunction. All rights reserved.
//

#import <UIKit/UIKit.h>
@class TimerView;
@protocol TimerViewProtocol<NSObject>
-(void)timeOver:(TimerView *)timerView;
@end

@interface TimerView : UIView
@property (nonatomic, weak) id <TimerViewProtocol> delegate;
@property (nonatomic, assign) BOOL shouldShowTimer;
@property (nonatomic, assign) int timeOut;
-(void)startTimer;
-(void)stopTimer;
-(void)hideTimer;
-(void)unhideTimer;
-(void)restartTimer;
@end
