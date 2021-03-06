/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Restaurants/Restaurants-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class SARestaurantRestaurant, SALocalSearchPhotoList, SiriRestaurantsLogoButton, UICollectionView;

@interface SiriRestaurantsPhotosViewController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	SARestaurantRestaurant* _restaurant;
	SALocalSearchPhotoList* _photoList;
	bool _providerIdIsYelp;
	SiriRestaurantsLogoButton* _moreOnLogo;

}

@property (nonatomic,retain) UICollectionView * view; 
-(double)_photoCellWidth;
-(id)initWithRestaurant:(id)arg1 ;
-(void)_updateWithRestaurant:(id)arg1 ;
-(void)_updateMoreOnLogo:(id)arg1 ;
-(void)_logoButtonPressed:(id)arg1 ;
-(double)_photoCellSpacing;
-(UIEdgeInsets)_sectionInsetsForCellOfType:(long long)arg1 ;
-(double)_effectiveContentWidthForPhotoCellsForWidth:(double)arg1 ;
-(void)_configurePhotoCell:(id)arg1 item:(unsigned long long)arg2 ;
-(void)_configureMoreOnCell:(id)arg1 ;
-(void)_selectPhotoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_numberOfCellsForType:(long long)arg1 ;
-(long long)_numberOfColumnsForCellOfType:(long long)arg1 forWidth:(double)arg2 ;
-(CGSize)_sizeForCellOfType:(long long)arg1 forWidth:(double)arg2 ;
-(double)_verticalSpacingForCellOfType:(long long)arg1 ;
-(void)_enumerateSectionsWithBlock:(/*^block*/ id)arg1 ;
-(bool)_sectionIsValid:(long long)arg1 ;
-(id)_reuseIdentifierForCellOfType:(long long)arg1 ;
-(void)_configureCell:(id)arg1 forType:(long long)arg2 item:(long long)arg3 ;
-(bool)_shouldSelectCellForType:(long long)arg1 ;
-(void)_selectCellOfType:(long long)arg1 item:(long long)arg2 ;
-(void)_addPhotosButtonTapped:(id)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void).cxx_destruct;
-(Class)transparentFooterViewClass;
-(void)configureReusableTransparentFooterView:(id)arg1 ;
-(double)desiredHeightForTransparentFooterView;
@end

