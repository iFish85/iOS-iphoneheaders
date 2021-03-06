/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Restaurants/Restaurants-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class UILabel, SiriUIStarsView, UIImageView;

@interface SiriRestaurantsListItemCell : SiriUIContentCollectionViewCell {

	BOOL _showTableTimes;
	UILabel* _nameLabel;
	UILabel* _addressLabel;
	UILabel* _distanceLabel;
	UILabel* _categoriesAndPriceLabel;
	UILabel* _tableTimesLabel;
	SiriUIStarsView* _starsView;
	UILabel* _reviewsLabel;
	UIImageView* _chevronView;

}
+(double)heightForTableTimesCell;
+(double)heightForDefaultCell;
-(void)configureWithRestaurant:(id)arg1 showTableTimes:(BOOL)arg2 ;
-(void)_setTableTimes:(id)arg1 ;
-(void)_layoutView:(id)arg1 withX:(double)arg2 Y:(double)arg3 maxWidth:(double)arg4 ;
-(void)_setCategoriesAndPriceWithRestaurant:(id)arg1 ;
-(void)_setAddress:(id)arg1 ;
-(void)_setReviewInfo:(id)arg1 ;
-(void)_setName:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_setDistance:(id)arg1 ;
@end

