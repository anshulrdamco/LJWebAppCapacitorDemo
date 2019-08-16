//
//  HelpTourViewController.h
//  Logic Junction
//
//  Created by User on 22/12/16.
//  Copyright © 2016 Logicjunction. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol HelpTourProtocol<NSObject>

@optional -(void)noThanksButtonTapped:(UIButton*)button;
@optional -(void)yesPleaseButtonTapped:(UIButton*)button;
@optional -(void)helpTourCompleted;
@end


@interface HelpTourViewController : UIViewController
{
    __weak IBOutlet UIImageView *backgroundImageView;
    IBOutlet UIView *welcomeView;
    IBOutlet UIView *eventsView;
    IBOutlet UIView *favoritesView;
    IBOutlet UIView *notificationsView;
    IBOutlet UIView *getDirectionsView;
    IBOutlet UIView *findMeView;
    
    __weak IBOutlet UILabel *notificationsHeaderLabel;
    __weak IBOutlet UILabel *getDirectionsHeaderLabel;
    __weak IBOutlet UIScrollView *horizontalScrollView;
    __weak IBOutlet UIPageControl *pageControl;
    __weak IBOutlet UIButton *yesPleaseButton;
    __weak IBOutlet UIButton *noThanksButton;
    __weak IBOutlet UIButton *eventsGotItButton;
    __weak IBOutlet UIButton *favoritesGotItButton;
    __weak IBOutlet UIButton *notificationsGotItButton;
    __weak IBOutlet UIButton *getDirectionsGotItButton;
    __weak IBOutlet UIButton *findMeGotItButton;
    
    __weak IBOutlet NSLayoutConstraint *scrollViewTopContraint;
    __weak IBOutlet NSLayoutConstraint *pageControlBottomConstraint;
    __weak IBOutlet NSLayoutConstraint *eventsTitleTopConstraint;
    __weak IBOutlet NSLayoutConstraint *favoritesTitleTopConstraint;
    __weak IBOutlet NSLayoutConstraint *notificationsTitleTopConstraint;
    __weak IBOutlet NSLayoutConstraint *findMeTitleTopConstraint;
    __weak IBOutlet NSLayoutConstraint *getDirectionsTitleTopConstraint;
    
    __weak IBOutlet NSLayoutConstraint *eventsGotItButtonBottomConstraint;
    __weak IBOutlet NSLayoutConstraint *favoritesGotItButtonBottomConstraint;
    __weak IBOutlet NSLayoutConstraint *notificationGotItButtonBottomConstraint;
    __weak IBOutlet NSLayoutConstraint *getDirectionsGotItButtonBottomConstraint;
    __weak IBOutlet NSLayoutConstraint *findMeGotItBtnBottomConstraint;
 
}
@property(nonatomic, strong) UIImage* backGroundImage;
@property(nonatomic, weak) id <HelpTourProtocol> delegate;
@end
