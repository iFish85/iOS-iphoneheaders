/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/MobileCal.axbundle/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class UIView;

@interface WeekAllDayLabelAccessibilityElement : UIAccessibilityElement {

	unsigned long long _dayIndex;
	UIView* _allDayView;

}

@property (assign,nonatomic) unsigned long long dayIndex;              //@synthesize dayIndex=_dayIndex - In the implementation block
@property (assign,nonatomic) UIView * allDayView;                      //@synthesize allDayView=_allDayView - In the implementation block
-(void)setAllDayView:(id)arg1 ;
-(void)setDayIndex:(unsigned long long)arg1 ;
-(unsigned long long)dayIndex;
-(id)allDayView;
-(CGRect)accessibilityFrame;
@end

