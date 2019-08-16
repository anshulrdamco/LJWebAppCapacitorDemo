	//
	//  MapViewController.h
	//  LjIndoor
	//
	//  Created by Akhil on 28/04/16.
	//  Copyright © 2016 Logicjunction. All rights reserved.
	//

#import <UIKit/UIKit.h>
#import "IndoorAtlasMapOverlayView.h"
#import <CoreLocation/CoreLocation.h>
#import <IndoorAtlas/IALocationManager.h>

@class DestinationModel , CLLocationManager, LJFusionService, CustomAlertView, FloorReferenceFeed, ShortestPathDownload,FavoriteLocation, Event, MapFloorGeofence;

@interface MapViewController : UIViewController <IndoorAtlasMapOverlayProtocol>
{
    
}

#pragma mark -
#pragma mark - Properties

@property(nonatomic, strong) DestinationModel *destinationObject;
@property(nonatomic, strong) DestinationModel *sourceObject;
@property(nonatomic, assign) BOOL isStartLocationChosen;
@property (nonatomic, strong) FloorReferenceFeed *floorReferenceList;
@property(nonatomic, strong) NSArray *mapOverlayModelsArray;
@property (nonatomic, strong) ShortestPathDownload *spd;
@property(nonatomic,strong) CustomAlertView *destinationAlert;
@property(nonatomic,strong) CustomAlertView *reroutingAlert;
@property(nonatomic, strong) UIView *uncertainityView;
@property(nonatomic, strong) NSTimer *locationUpdateTimer;
@property(nonatomic, strong) NSArray *pathPointsList;
@property(nonatomic, strong) UIView *tempViewForBlueDot;
@property(nonatomic, assign) BOOL isMappingQuicklinkDirectlyOnMapView;
@property(nonatomic, strong) NSString *directQuicklink;
@property(nonatomic, assign) BOOL mapFavoriteLocation;
@property(nonatomic, assign) BOOL mapEventOnMap;
@property(nonatomic, assign) BOOL mapNotificationOnMap;
@property(nonatomic, strong) FavoriteLocation *favLocation;
@property(nonatomic, strong) Event *event;
@property(nonatomic, strong) MapFloorGeofence *geofenceNotification;
@property(nonatomic, strong) IALocation *explicitLocation_FindMe;
@property(nonatomic, assign) CGPoint explicitPosition_FindMe;
@property(nonatomic, assign) BOOL is_I_Dont_Know_Mode;

#pragma mark -
#pragma mark - Map & Blue dot positioning methods
-(void) configureMapView;
-(void) showFloorTransition: (BOOL) show;
-(void) loadMapData :(int) floorPlanId;
-(void) mapFavorite:(FavoriteLocation *)favLocation;
-(void) getIALocationUpdateFromFusionService:(CGPoint) iABlueDotPosition ;

#pragma mark -
#pragma mark - Geofence methods
-(void) showGeofenceMessageView:(MapFloorGeofence *)geoFenceObject;
-(void)removeGeofenceMessageView:(MapFloorGeofence *)geoFenceObject;
#pragma mark -
#pragma mark - Orientation methods
-(void)updateBlueDotPointer:(CGFloat) radians;
-(void)changeMapOrientationUsingCourseDirection:(CLLocationDirection)course;

#pragma mark -
#pragma mark - PDR methods
-(void)showPDRView;
-(void)removePDRView;
-(void)makeBlueDotBlue;
-(void)makeBlueDotRed;

@end
