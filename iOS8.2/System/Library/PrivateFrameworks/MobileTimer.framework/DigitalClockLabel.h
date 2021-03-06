/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <MobileTimer/MTDateLabel.h>

@class NSCalendar, NSDate;

@interface DigitalClockLabel : MTDateLabel {

	NSCalendar* _calendar;
	NSDate* _baseDate;
	int _hour;
	int _minute;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)resetFontSizes;
-(void)significantTimeChange:(id)arg1 ;
-(void)refreshUI;
-(void)forceSetHour:(int)arg1 minute:(int)arg2 ;
-(char)setHour:(int)arg1 minute:(int)arg2 ;
@end

