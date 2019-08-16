//
//  CustomNotificationsView.h
//  LjIndoor
//
//  Created by User on 30/12/16.
//  Copyright © 2016 Logicjunction. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM (NSInteger , SwitchState){
    kSwitchStateEnabled = 0,
    kSwitchStateDisabled
};

@protocol CustomNotificationsViewProtocol <NSObject>
@optional -(void)turnOnBluetoothTapped:(UIButton*)button;
@optional -(void)turnOnWiFiTapped:(UIButton*)button;
@optional -(void)turnOnLocationServicesTapped:(UIButton*)button;
@end

@interface CustomNotificationsView : UIView
{
    __weak IBOutlet UIView *componentView;
    __weak IBOutlet UILabel *notesLabel;
    __weak IBOutlet UIButton *turnOnBluetoothButton;
    __weak IBOutlet UIButton *turnOnWifiButton;
    __weak IBOutlet UIButton *turnOnLocationButton;
    
    __weak IBOutlet NSLayoutConstraint *notesLabelTopConstraint;
    __weak IBOutlet NSLayoutConstraint *bluetoothTopConstraint;
    __weak IBOutlet UIImageView *bluetoothEnabledImageView;
    __weak IBOutlet UIImageView *wifiEnabledImageView;
    __weak IBOutlet UIImageView *locationServicesEnabledImageView;
}
@property (nonatomic, assign) BOOL isBluetoothEnabled;
@property (nonatomic, assign) BOOL isWifiEnabled;
@property (nonatomic, assign) BOOL isLocationServiceEnabled;
@property (nonatomic, weak) id <CustomNotificationsViewProtocol> delegate;

-(CustomNotificationsView *)initCustomNotificationViewWithFrame:(CGRect) frame delegate:(id) delegate disclaimer:(NSMutableAttributedString *)disclaimerString bluetoothState:(SwitchState)bluetoothState wifiState:(SwitchState)wifiState locationServicesState:(SwitchState)locationState;

-(void)changeBluetoothState:(SwitchState)state;
-(void)changeWifiState:(SwitchState)state;
-(void)changeLocationServicesState:(SwitchState)state;
-(void)show;
@end
