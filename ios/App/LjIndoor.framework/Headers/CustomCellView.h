//
//  CustomCellView.h
//  LjIndoor
//
//  Created by MacBook on 2/24/16.
//  Copyright (c) 2016 Logicjunction. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomCellProtocol.h"

typedef NS_ENUM(NSInteger, CustomCellType){
  kCustomCellTypeNormal,
  kCustomCellTypeEvent
};

@interface CustomCellView : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;
@property (weak, nonatomic) IBOutlet UILabel *listItemText;
@property (weak, nonatomic) IBOutlet UIImageView *listItemImage;
@property (weak, nonatomic) IBOutlet UIButton *mapITButton;
@property (weak, nonatomic) IBOutlet UIButton *selectButton;
@property (weak, nonatomic) IBOutlet UIButton *detailsButton;
@property (weak, nonatomic) IBOutlet UIImageView *detailsButtonIndicator;
@property (nonatomic) CustomCellType cellType;
@property (nonatomic, assign) NSInteger CellIndex;
@property (weak, nonatomic) id <CustomCellProtocol> delegate;
@property (nonatomic, assign) BOOL isDetailShowing;


-(void)updateViewLayout;
-(void)hideDetailsView;
-(void)unhideDetailsView;
-(UIView*)getDetailView;
-(void)applyCornerRadiiToDetailsView;
-(void)updateEventDetails:(NSAttributedString*)eventDetails;
-(void)updateDetails:(NSAttributedString*)locationDetails availabilityDetails:(NSAttributedString*)hours venueDetails:(NSAttributedString*)details;
- (IBAction)detailsButtonAction:(id)sender;
@end
