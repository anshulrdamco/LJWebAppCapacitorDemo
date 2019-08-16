//
//  CustomCellViewProtocol.h
//  LjIndoor
//
//  Created by User on 15/02/17.
//  Copyright © 2017 Logicjunction. All rights reserved.
//


@protocol  CustomCellProtocol<NSObject>
@optional
 -(void)mapITTapped:(UIButton*)button;
 -(void)selectTapped:(UIButton*)button;
 -(void)upArrowTapped:(UIButton*)button;
-(void)detailsButtonTapped:(UIButton*)button tagValue:(NSInteger)tagValue showDetails:(bool)value;
@end



