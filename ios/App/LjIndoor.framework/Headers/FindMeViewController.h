//
//  FindMeViewController.h
//  LjIndoor
//
//  Created by Akhil on 02/09/16.
//  Copyright © 2016 Logicjunction. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@class FloorReference, FloorReferenceFeed, MapFloorGeofence;

@interface FindMeViewController : UIViewController
{
	
}
@property(nonatomic, strong) NSArray *mapOverlayModelsArray;
@property (nonatomic, strong) FloorReferenceFeed *floorReferenceList;
@property (nonatomic, strong) FloorReference *floorReferenceObject;
@property(nonatomic, assign) BOOL is_I_Dont_Know_Mode;
@property (nonatomic, assign) int myCurrentFloorPlanID;
-(void) loadMapData :(int) floorPlanId;
-(void) showGeofenceMessageView:(MapFloorGeofence *)geoFenceObject;
-(void)removeGeofenceMessageView:(MapFloorGeofence *)geoFenceObject;
-(void) getIALocationUpdateFromFusionService:(CGPoint) iABlueDotPosition;
-(void)changeMapOrientationUsingCourseDirection:(CLLocationDirection)course;
#pragma mark -
#pragma mark - PDR methods
-(void)makeBlueDotBlue;
-(void)makeBlueDotRed;
-(void)showPDRView;
-(void)removePDRView;
-(void)updateBlueDotPointer:(CGFloat) radians;
@end
