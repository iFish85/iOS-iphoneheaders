/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:38:22 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/AccessibilityBundles/MobileSafari.axbundle/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <MobileSafari/__NavigationBarAccessibility_super.h>

@interface NavigationBarAccessibility : __NavigationBarAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)_readerButtonTapped:(id)arg1 ;
-(void)_updateReaderButtonVisibilityAnimated:(char)arg1 showAvailabilityText:(char)arg2 adjustURLLabels:(char)arg3 ;
-(void)setExpanded:(char)arg1 textFieldSelectionRange:(NSRange)arg2 ;
-(void)_axUpdateURLValue;
-(void)_updateShowsLockIcon;
-(void)_compressedBarTapped;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(char)_accessibilityOnlyComparesByXAxis;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)shouldGroupAccessibilityChildren;
-(void)_updateText;
-(int)_accessibilitySortPriority;
@end
