/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
#import <Preferences/PSListController.h>

@class NSString, PHSettingsNumberCell;

@interface PHSettingsNumberEditingController : PSListController {

	NSString* _previousStringSuggestionValue;
	PHSettingsNumberCell* cell;

}
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(SCD_Struct_Ph5)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(id)specifiers;
-(bool)shouldSelectResponderOnAppearance;
-(bool)shouldReloadSpecifiersOnResume;
@end

