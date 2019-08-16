//
//  StyleGuide.h
//  LjIndoor
//
//  Created by Akhil on 04/04/16.
//  Copyright © 2016 Logicjunction. All rights reserved.
//

/***
 
 
 
 **/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface StyleGuide : NSObject
	// Singleton object of the class
+ (StyleGuide *) sharedInstance;
-(void)performOperationsOnAppTermination;
-(void)authorizeLocationServices;

/******************** LJ_BASEVIEW PROPERTIES ***************************/
@property (nonatomic, strong) UIColor *backgroundcolor;

/******************** LJ_LABEL PROPERTIES ***************************/
@property (nonatomic, strong) UIColor *ljLabelTitleColor;
@property (nonatomic, strong) UIFont *ljLabelBaseFont;

/******************** LJ_TEXTFIELD PROPERTIES ***************************/
@property (nonatomic, strong) UIColor *ljTextFieldTitleColor;
@property (nonatomic, strong) UIFont  *ljTextFieldBaseFont;

/******************** LJ_TITLE_LABEL PROPERTIES ***************************/
@property (nonatomic, strong) UIColor *ljTitleLabelTitleColor;
@property (nonatomic, strong) UIFont *ljTitleLabelBaseFont;

/******************** NAVIGATION BAR PROPERTIES ***************************/
@property (nonatomic, strong) UIColor *navigationBarTintColor;
@property (nonatomic, strong) UIColor *navigationTintColor;
@property (nonatomic, strong) UIColor *navigationBarTitleColor;
@property(nonatomic, strong) UIImage *navigationBarImage;

/******************** MAP DIRECTION VIEW PROPERTIES ***************************/
@property (nonatomic, strong) UIColor *directionsTableSectionHeaderColor;
@property (nonatomic, strong) UIColor *directionsTableSectionHeaderBackgroundColor;
@property (nonatomic, strong) UIColor *directionsCellTextColor;
@property (nonatomic, strong) UIColor *directionsAttributedStringColor;

//Other Properties
@property (nonatomic, strong) UIColor *horizontalRulingColor;
@property(nonatomic, strong) UIImage *detailDisclosureButtonImage;
@property(nonatomic, strong) UIImage *viewBackgroundImage;
@property(nonatomic, strong) UIImage *searchIconImage;
@property(nonatomic, strong) UIColor *directoryCellTextColor;
@property(nonatomic, strong) UIImage *directoryCellBackgroundImage;
@property(nonatomic, strong) UIColor *buttonsBackgroundColor;
@property(nonatomic, strong) UIImage *helpScreenBackgroundImage;
@property(nonatomic, assign) BOOL showAPIKeyInSettings;
@property(nonatomic, assign) CGFloat defaultMapScale;
@property(nonatomic, assign) CGFloat defaultMagneticDeclination;
@property(nonatomic, assign) BOOL showMagneticDeclinationItem;
@property(nonatomic, assign) BOOL showDefaultZoomTextField;
@property(nonatomic, assign) BOOL shouldShowHomeButton;
@property(nonatomic, strong) NSString *estimoteAppId;
@property(nonatomic, strong) NSString *estimoteAppToken;
@property(nonatomic, strong) NSString *clientAPIKey;
@property(nonatomic, strong) NSString *kIA_APIKey;
@property(nonatomic, strong) NSString *kIA_APISecret;
@property(nonatomic, strong) NSString *deepLinkUrl;
@property(nonatomic, assign) BOOL isLaunchingAppUsingDeepLink;
@property(nonatomic, assign) BOOL canReportOneTimeData;
@end
