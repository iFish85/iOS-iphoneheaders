/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContactCell.h>

@class UILabel;

@interface MUPlaceCardCell : ABContactCell {

	UILabel* _headerLabel;
	UILabel* _valueLabel;

}

@property (nonatomic,readonly) UILabel * headerLabel;              //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;               //@synthesize valueLabel=_valueLabel - In the implementation block
+(id)reuseIdentifier;
-(id)valueLabel;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)tintColorDidChange;
-(void)updateConstraints;
-(id)headerLabel;
@end

