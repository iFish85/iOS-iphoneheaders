/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class AlphanumericPINTextField;

@interface AlphanumericPINTableViewCell : UITableViewCell {

	AlphanumericPINTextField* _pinTextField;

}

@property (nonatomic,retain) AlphanumericPINTextField * pinTextField;              //@synthesize pinTextField=_pinTextField - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(AlphanumericPINTextField *)pinTextField;
-(void)setPinTextField:(AlphanumericPINTextField *)arg1 ;
@end
