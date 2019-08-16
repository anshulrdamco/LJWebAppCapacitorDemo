//
//  IndoorAtlasMapOverlayView.h
//  LjIndoor
//
//  Created by MacBook on 2/29/16.
//  Copyright © 2016 Logicjunction. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MapImageView;

@protocol IndoorAtlasMapOverlayProtocol <NSObject>
@optional -(void) userReachedNextFloor:(NSString *)nextFloorName nextFloorPlanID:(NSString*)nextFloorPlanID;
@optional - (void)tabBar:(UITabBar *)tabBar didSelectItem:(UITabBarItem *)item;
@optional -(void)recenterButtonTapped:(UIButton*)button;
@optional -(void)endNavigationButtonTapped:(UIButton*)button;
@optional -(void)orientationButtonTapped:(UIButton*)button isEnabled:(BOOL) value;
@optional -(void)showWalkingDirectionDetails:(UIButton *)button;
@optional -(void)recalculateButtonTapped:(UIButton *)button;
@optional -(void)getDirectionsButtonTapped:(UIButton *)button;
@optional -(void)switchFloorsButtonTapped:(UIButton *)button;
@optional -(void)mapDidZoom:(UIScrollView*)scrollView;
@optional -(void)mapDidEndZooming:(UIScrollView*)scrollView;
@optional -(void)mapDidEndDecelerating:(UIScrollView*)scrollView;
@optional -(void)floorNameLabelTappedTwice;
@end

@import AVFoundation;
@class IAResourceManager, IALocationManager, IAFloorPlan, DestinationModel, AccuracyBarView, HUD;
@interface IndoorAtlasMapOverlayView : UIView <UIGestureRecognizerDelegate,UIAlertViewDelegate,AVCaptureMetadataOutputObjectsDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>
@property (weak, nonatomic) IBOutlet UIScrollView *MapView;
@property (weak, nonatomic) IBOutlet UITabBar *bottomTabBar;
@property (weak, nonatomic) IBOutlet UIView *FloorChangeLoadingScreen;
@property (weak, nonatomic) IBOutlet UIImageView *North;
@property (weak, nonatomic) IBOutlet UINavigationBar *NavigationBar;
@property (strong, nonatomic) DestinationModel*  selectedDestination;
@property (strong, nonatomic) NSString* SelectedFloorplanId;
@property (weak, nonatomic) IBOutlet UIImageView *showWalktoGetLocation;
@property (assign, nonatomic) NSString* verid;
@property (strong, nonatomic) NSString* ljfloorPlanId;
@property (nonatomic, strong) AVCaptureSession *captureSession;
@property (nonatomic) bool LoadedTheView;
@property (weak, nonatomic) IBOutlet UILabel *directionsText;
@property (weak, nonatomic) IBOutlet UITableView *directionsTableView;
@property (nonatomic, strong) UIView *circle;
@property (nonatomic, strong) UIImageView *blueDotImage;
@property (nonatomic, strong) UIImageView *blueDotPointerImgView;
@property (weak, nonatomic) IBOutlet UIButton *backButton;
@property (weak, nonatomic) IBOutlet UIButton *notificationButton;
@property (weak, nonatomic) IBOutlet UIButton *mapViewButton;
@property (weak, nonatomic) IBOutlet UIButton *directionsListButton;
@property (weak, nonatomic) IBOutlet UILabel *floorNameLabel;
@property (weak, nonatomic) IBOutlet UIButton *assertNextFloorButton;
@property (weak, nonatomic) IBOutlet UISearchBar *searchBarView;
@property (weak, nonatomic) IBOutlet UIImageView *notificationImageView;
@property (weak, nonatomic) IBOutlet UIImageView *beaconImageView;
@property (weak, nonatomic) IBOutlet UIImageView *internetConnectionView;
@property (nonatomic, assign) bool areArrowsAnimatingOnPath;
- (IBAction)hideTransitionScreen:(id)sender;

@property (strong, nonatomic) IBOutlet UILabel *startLabel;
@property (strong, nonatomic) IBOutlet UILabel *endLabel;
@property (nonatomic, strong) UIImageView *startPointImageView;
@property (nonatomic, strong) UIImageView *endPointImageView;
@property (strong, nonatomic) NSString *nextFloorName;
@property (weak, nonatomic) IBOutlet UIView *footerBarView;
@property (weak, nonatomic) IBOutlet UIView *mapBodyView;

@property (weak, nonatomic) IBOutlet UIScrollView *directionsView;
@property (nonatomic, strong) UIView *containerView;
@property (nonatomic, strong)  UIImageView *imageView;
@property (nonatomic, strong) UIImageView *circleImageView;
@property (strong, nonatomic) DestinationModel*  startDestination;
@property (strong, nonatomic) NSString* destinationFloorplanId;
@property(nonatomic, assign) BOOL isNavigationEnabled;
@property(nonatomic, assign) BOOL isPanGestureEnabled;
@property(nonatomic, assign) BOOL isFromLocationScreen;
@property(nonatomic, assign) BOOL isFromQRScreen;
@property(nonatomic, assign) BOOL forceHideTransition;
@property (nonatomic, strong) IAResourceManager *resourceManager;
@property(nonatomic, strong) NSDictionary *sp;
@property(nonatomic, strong) NSDictionary *WalkingDirections;
@property (strong, nonatomic) NSString* walkingNote;
@property (nonatomic, assign) CGPoint lastPoint;
@property(nonatomic,strong) NSMutableArray<NSValue *> *PathPoints;
@property (nonatomic, assign) BOOL IsLastFloorInSPC;
@property (nonatomic, strong) NSString *ShortestPathString;
@property  (nonatomic) bool CalledShortestPath;
@property (nonatomic, strong) IAFloorPlan *floorPlan;
@property (nonatomic, strong) NSString *nextFloorPlanID;
@property (nonatomic, strong) NSMutableArray *timerArray;
@property (nonatomic, strong) NSTimer * arrowTimer;
@property (nonatomic, strong) AccuracyBarView *accuracyBarView;
@property (nonatomic, assign) BOOL isForPositioningDemo;
@property (nonatomic, assign) float OriginalFloorPlanWidth;
@property (nonatomic, assign) float OriginalFloorPlanHeight;
@property (nonatomic, assign) float MINIMUM_SCALE;
@property(nonatomic, assign) float MeterToPixelConversion;
@property (nonatomic, assign) CGFloat currentRotationAngleOfLocationPins;
@property (nonatomic, assign) CGFloat accuracyBarAccuracy;
@property (nonatomic, strong) CAKeyframeAnimation *ArrowAnimation;
@property (nonatomic, strong) UIImageView *AnimationArrowView;
@property (weak, nonatomic) IBOutlet UIButton *recalculateButton;
@property (weak, nonatomic) IBOutlet UIButton *getDirectionsButton;
@property (weak, nonatomic) IBOutlet UIButton *switchFloorsButton;
@property (weak, nonatomic) IBOutlet UIButton *walkingDirectionDetailsButton;

@property (weak, nonatomic) IBOutlet UIView *distanceLeftView;
@property (weak, nonatomic) IBOutlet UILabel *timeLeftLabel;
@property (weak, nonatomic) IBOutlet UILabel *distanceLeftLabel;
@property (weak, nonatomic) IBOutlet UIButton *endNavigationButton;


@property (weak, nonatomic) IBOutlet NSLayoutConstraint *endNavigationBtnWidthConstant;
-(void)hideBottomBar;
-(void) LoadFloorBasedShortestPath;
-(void) removeArrowAnimation;
-(void) loadShortestPathDirections;
-(void) loadlLocationViewWithImage:(UIImage *)mapImage;
-(void) initializeCurrentLocationPointer;
-(void)rotateAnyView:(UIView *)view degrees:(CGFloat)degrees;
-(void) animateArrowsAlongHighlightedPathPoints:(NSArray *) pointsList andPath:(UIBezierPath *)path;
-(void) addAccuracyBar;
-(void)addAccuracyBars;
-(UIView *)getBottomBar;
- (IBAction)navigationToggleTapped:(id)sender;
-(void)rotateMarkersWithBearing:(CGFloat)degrees;
@property (weak, nonatomic) IBOutlet UIButton *recenterButton;
@property (nonatomic, strong) UIBezierPath *path;
@property (nonatomic, weak) id<IndoorAtlasMapOverlayProtocol> delegate;
- (IBAction)recenterButtonTapped:(id)sender;
@end
