/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:49 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASettingSetBool.h>
#import <SAObjects/SASettingSettingsAction.h>

@class NSString;

@interface SASettingSetVoiceOver : SASettingSetBool <SASettingSettingsAction>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setVoiceOver;
+(id)setVoiceOverWithDictionary:(id)arg1 context:(id)arg2 ;
-(int)_ad_settingType;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
@end

