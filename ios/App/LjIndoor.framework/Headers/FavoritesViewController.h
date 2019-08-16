//
//  FavoritesViewController.h
//  LjIndoor
//
//  Created by User on 22/11/16.
//  Copyright © 2016 Logicjunction. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LJTitleLabel, LJTextField;

@interface FavoritesViewController : UIViewController
{
    __weak IBOutlet UILabel *noSearchResultsLabel;
    __weak IBOutlet UILabel *noSavedFavoritesLabel;
    __weak IBOutlet LJTitleLabel *titleLabel;
    __weak IBOutlet UITableView *favoritesTable;
    __weak IBOutlet UIImageView *horizontalRuling;
    __weak IBOutlet LJTextField *searchTextField;
    __weak IBOutlet UIImageView *backgroundImageView;
}
@end
