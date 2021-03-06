/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AirTrafficSettings.bundle/AirTrafficSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSBundleController.h>
#import <AirTrafficSettings/ATConnectionDelegate.h>

@class PSSpecifier, NSString;

@interface AirTrafficSettingsBundleController : PSBundleController <ATConnectionDelegate> {

	PSSpecifier* _specifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiersWithSpecifier:(id)arg1 ;
@end

