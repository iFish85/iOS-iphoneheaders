/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVOutputSettings.h>

@class NSDictionary;

@interface AVAudioOutputSettings : AVOutputSettings

@property (nonatomic,readonly) NSDictionary * audioSettingsDictionary; 
+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)registeredOutputSettingsClasses;
+(id)defaultAudioOutputSettings;
+(id)audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 ;
+(id)audioOutputSettingsWithTrustedAudioSettingsDictionary:(id)arg1 ;
+(id)audioConverterPropertiesForAudioSettingsDictionary:(id)arg1 ;
-(id)compatibleMediaTypes;
-(NSDictionary *)audioSettingsDictionary;
-(char)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2 ;
-(id)initWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
@end

