/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoContactsSettings.bundle/NanoContactsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSMutableArray, NPSManager, NPSDomainAccessor;

@interface NCABSettingsShortNameController : PSListController {

	PSSpecifier* _shortNameEnabledSpecifier;
	PSSpecifier* _shortNameFormatsGroup;
	NSMutableArray* _shortNameFormatsSpecifiers;
	NPSManager* _syncManager;
	NPSDomainAccessor* _domainAccessor;

}
-(id)_getValueForKey:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setShortNameEnabled:(id)arg1 ;
-(id)shortNameEnabled;
-(void)setPreferNicknames:(id)arg1 ;
-(id)preferNicknames;
-(void)setShortNameFormat:(id)arg1 ;
-(id)shortNameFormat;
-(void)_setValue:(id)arg1 forKey:(id)arg2 syncWithClient:(BOOL)arg3 ;
-(id)specifiers;
@end

