//
//  CollectionViewDateLayout.h
//  date-create
//
//  Created by Nathan Levine on 10/19/13.
//  Copyright (c) 2013 Daher Alfawares. All rights reserved.
//

#import <UIKit/UIKit.h>

UIKIT_EXTERN NSString * const DateCreateTitleKind;


@interface CollectionViewDateLayout : UICollectionViewFlowLayout

@property (nonatomic) UIEdgeInsets itemInsets;
@property (nonatomic) CGSize itemSize;
@property (nonatomic) CGFloat interItemSpacingY;
@property (nonatomic) NSInteger numberOfColumns;
@property (nonatomic) CGFloat titleHeight;


@end
