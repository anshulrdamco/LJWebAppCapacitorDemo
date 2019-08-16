	//
	//  CustomAlertView.h
	//  LjIndoor
	//
	//  Created by Akhil on 07/06/16.
	//  Copyright © 2016 Logicjunction. All rights reserved.
	//

#import <UIKit/UIKit.h>
#import "TimerView.h"
@class CustomAlertView;
@protocol CustomAlertViewProtocol <NSObject>
@optional -(void)leftButtonTapped:(CustomAlertView*)customAlertView withButtonTag:(NSInteger)lTag;
@optional -(void)rightButtonTapped:(CustomAlertView*)customAlertView withButtonTag:(NSInteger)rTag;
@optional -(void)timerTimedOutAt:(NSInteger)timedOutSeconds;
@optional -(void)clickMeButtonPressed:(UIButton*)sender customAlert:(CustomAlertView*)alertView;
@optional -(void)saveButtonPressed:(UIButton*)sender locationName:(NSString*) locationName locationPoint:(CGPoint) point;
@optional -(void)cancelButtonPressed:(UIButton*)sender;
@optional -(void)crossButtonPressed:(UIButton*)sender;
@optional -(void)floorTransitionCrossButtonPressed:(UIButton*)sender;
@optional -(void)recalculateButtonPressed:(UIButton *)sender;

//- (void)otherButtonTappedDelegate:(id) sender;
//- (void)yesButtonTappedDelegate:(id) sender;
@end

typedef NS_ENUM(NSInteger, AlertType) {
	ChooseLocationAlert,
	ReroutingAlert,
	RateDestinationAlert,
    WalkedAroundAlert,
    FoundYouAlert,
    FloorTansitionAlert,
    FavoriteLocationAlert,
    EnableLocationServicesAlert,
    EnableWiFiBlueToothAlert,
    ReachedDestinationAlert,
    RecalculateAlert,
    ForcefullyEndNavigation
};

@interface CustomAlertView : UIView <TimerViewProtocol, UITextFieldDelegate>
{
}

//Properties
@property (nonatomic, assign) AlertType type;
@property (weak, nonatomic) IBOutlet UIButton *crossButton;
@property (weak, nonatomic) IBOutlet TimerView *timerView;
@property (weak, nonatomic) IBOutlet UILabel *messageTextLabel;
@property (weak, nonatomic) IBOutlet UIButton *leftButton;
@property (weak, nonatomic) IBOutlet UIButton *rightButton;
@property (weak, nonatomic) IBOutlet UIButton *clickHereButton;
@property (weak, nonatomic) IBOutlet UITextField *enterFavLocationTextField;
@property (weak, nonatomic) id<CustomAlertViewProtocol> delegate;
@property (assign, nonatomic) bool isFloorTransitioningUp;

//Methods
-(CustomAlertView*)initCustomAlertWithFrame:(CGRect) frame floorTransitionMessage:(NSMutableAttributedString *)message transitioningUp:(BOOL) value delegate:(id)delegate;
-(CustomAlertView*)initCustomAlertViewWithFrame:(CGRect) frame message:(NSMutableAttributedString *) message alertType:(AlertType) alertType delegate:(id) delegate leftButtonTitle:(NSString*)leftButtonName rightButtonTitle:(NSString*)rightButtonName showTimer:(BOOL) show;
-(void) updateTagValues;
- (IBAction)leftButtonTapped:(id)sender;
- (IBAction)rightButtonTapped:(id)sender;
-(void)startTimer;
-(void)stopTimer;
-(void)restartTimer;
@end
