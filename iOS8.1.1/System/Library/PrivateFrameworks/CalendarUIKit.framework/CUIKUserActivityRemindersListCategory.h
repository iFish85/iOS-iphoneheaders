/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKUserActivityWithSource.h>

@class NSString;

@interface CUIKUserActivityRemindersListCategory : CUIKUserActivityWithSource {

	NSString* _title;
	NSString* _externalID;

}
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(id)initWithRemindersList:(id)arg1 forceLocal:(BOOL)arg2 ;
-(BOOL)_isMatchForRemindersList:(id)arg1 ;
-(id)initWithRemindersList:(id)arg1 ;
-(id)remindersListFromStore:(id)arg1 ;
@end

