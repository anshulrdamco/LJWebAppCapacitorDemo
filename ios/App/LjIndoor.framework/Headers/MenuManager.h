//
//  MenuManager.h
//  LjIndoor
//
//  Created by MacBook on 2/17/16.
//  Copyright (c) 2016 Logicjunction. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MenuManager : NSObject

+(instancetype) sharedManager;

-(void) startManager:(NSString *)verid;
-(void) stopManager;

@property (nonatomic, strong) NSString *verid;

-(BOOL) isManagerRunning;

@end
