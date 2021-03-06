/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>

@class NSArray;

@interface EKEventAvailabilityEditItem : EKEventEditItem {

	int _availability;
	unsigned _supportedAvailabilities;
	NSArray* _choices;
	unsigned _availabilityIndexInChoices;

}
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned)arg2 ;
-(char)saveAndDismissWithForce:(char)arg1 ;
-(char)editItemViewControllerCommit:(id)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(char)canBeConfiguredForCalendarConstraints:(id)arg1 ;
@end

