//
//  SideTableViewController.h
//  LjIndoor
//
//  Created by Akhil on 24/08/16.
//  Copyright © 2016 Logicjunction. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SideTableViewController : UIViewController
{
	
	IBOutlet UITableView *sideTableView;
}
@property(nonatomic, retain) NSMutableArray *menuArray;
-(void)goToSettingsScreen;
@end
