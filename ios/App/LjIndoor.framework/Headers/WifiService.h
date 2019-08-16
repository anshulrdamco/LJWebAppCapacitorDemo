//
//  WifiService.h
//  LjIndoor
//
//  Created by User on 16/01/17.
//  Copyright © 2017 Logicjunction. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WifiService : NSObject
+ (BOOL) isWiFiEnabled;
+ (BOOL) isWiFiConnected;
+ (NSString *) BSSID;
+ (NSString *) SSID;
@end
