/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/SearchSettings.bundle/SearchSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSMutableArray, NSMutableSet;

@interface SearchSettingsController : PSListController {

	NSMutableArray* _ordering;
	NSMutableSet* _disabledDomains;
	BOOL _isDirty;

}
-(void)_updateCell:(id)arg1 forDomain:(unsigned)arg2 ;
-(id)specifierForDomain:(unsigned)arg1 ;
-(unsigned)domainForIndexRow:(unsigned long long)arg1 ;
-(void)_saveIfNecessary;
-(id)stringForSearchDomain:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)explanationSheetDoneButtonPressed:(id)arg1 ;
-(void)showSearchExplanationSheet:(id)arg1 ;
-(id)specifiers;
@end

