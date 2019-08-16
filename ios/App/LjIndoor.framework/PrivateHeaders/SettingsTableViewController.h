//
//  SettingsTableViewController.h
//  LjIndoor
//
//  Created by Akhil on 26/08/16.
//  Copyright © 2016 Logicjunction. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SettingsTableViewController : UITableViewController
{
	
	IBOutlet UITableView *settingsTableView;
}
@property(nonatomic, retain) NSMutableArray *settingsMenuArray;
@property(nonatomic, retain) NSMutableArray *turnSettingsArray;
@end
