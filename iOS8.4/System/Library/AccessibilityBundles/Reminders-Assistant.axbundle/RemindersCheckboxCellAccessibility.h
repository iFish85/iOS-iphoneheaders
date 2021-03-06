/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/Reminders-Assistant.axbundle/Reminders-Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders-Assistant/Reminders-Assistant-Structs.h>
#import <Reminders-Assistant/__RemindersCheckboxCellAccessibility_super.h>

@interface RemindersCheckboxCellAccessibility : __RemindersCheckboxCellAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(BOOL)accessibilityIsEditingReminder;
-(BOOL)_accessibilityIsCheckbox:(id)arg1 ;
-(void)accessibilityUpdateChildren;
-(BOOL)_accessibilityIsNewReminderCell;
-(BOOL)_axInNotificationCenter;
-(long long)_accessibilityIndexOfCheckbox;
-(id)_axTextView;
-(void)_axAnnotateTextView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 appearance:(int)arg3 contentMask:(unsigned long long)arg4 deadlinePosition:(unsigned long long)arg5 width:(double)arg6 ;
-(BOOL)_accessibilityIsSearchReminderCell;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)_accessibilityIsSpeakThisElement;
-(id)_accessibilityRetrieveTableViewIvarsText;
-(BOOL)_accessibilityTableViewCellSubclassShouldExist;
-(CGRect)tableTextAccessibleFrame:(id)arg1 ;
-(void)dealloc;
-(id)accessibilityLabel;
-(void)setAccessoryType:(long long)arg1 ;
-(id)accessibilityHint;
-(id)accessibilityCustomActions;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(BOOL)_accessibilityCanDeleteTableViewCell;
@end

