//
//  LJHomeViewController.h
//  LjIndoor
//
//  Created by Akhil on 05/04/16.
//  Copyright © 2016 Logicjunction. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <IndoorAtlas/IALocationManager.h>

@interface HomeViewController : UIViewController

@property(nonatomic, weak) id delegateObject;
@property(nonatomic, assign) SEL selectorForDestinationId;
@property(nonatomic, assign) BOOL isFromFindMeButton;
@property(nonatomic, assign) BOOL isFloorAlreadyKnown;
@property(nonatomic, assign) int floorIdInFindMe;
@property(nonatomic, assign) CGPoint blueDotPosition_FindMe;
@property(nonatomic, strong) IALocation *explicitLocation_FindMe;
@property(nonatomic, strong) NSString* quicklink_GeofenceFindMe;
@property(atomic, retain) UINavigationController *parentNavigationController;

-(void)mapQuickLinkOnMap:(NSString*)quickLink;
-(void)map_GeofenceFindMeDirectlyToMapViewController:(int) floorId;
@end
