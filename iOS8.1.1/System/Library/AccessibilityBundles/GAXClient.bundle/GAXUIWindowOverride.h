/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:25:48 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/GAXClient.bundle/GAXClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GAXClient/GAXClient-Structs.h>
#import <GAXClient/__GAXUIWindowOverride_super.h>

@class UIColor;

@interface GAXUIWindowOverride : __GAXUIWindowOverride_super

@property (assign,setter=_gaxSetOverridingBackgroundColorToClearRequestsCount:,nonatomic) unsigned long long _gaxOverridingBackgroundColorToClearRequestsCount; 
@property (setter=_gaxSetOriginalBackgroundColor:,nonatomic,retain) UIColor * _gaxOriginalBackgroundColor; 
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
-(void)_gaxSetOriginalBackgroundColor:(id)arg1 ;
-(UIColor *)_gaxOriginalBackgroundColor;
-(void)_gaxBeginOverridingBackgroundColorToClear;
-(void)_gaxEndOverridingBackgroundColorToClear;
-(unsigned long long)_gaxOverridingBackgroundColorToClearRequestsCount;
-(void)_gaxSetOverridingBackgroundColorToClearRequestsCount:(unsigned long long)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)_targetForStolenStatusBarTouchesAtPoint:(CGPoint)arg1 withEvent:(id)arg2 excludingWindow:(id)arg3 ;
@end

