/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/XPCServices/com.apple.voicetrigger.voicetriggerservice.xpc/com.apple.voicetrigger.voicetriggerservice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol VTXService <NSObject>
@required
-(oneway void)feedbackWithReason:(unsigned char)arg1 atTime:(double)arg2;
-(oneway void)getTestResponse:(/*^block*/id)arg1;
-(oneway void)getSiriLanguageCode:(/*^block*/id)arg1;
-(oneway void)suggestVoiceTriggerThreshold:(long long)arg1 withReason:(id)arg2 timestamp:(double)arg3;
-(oneway void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;
-(oneway void)reportEventWithAudioFile:(id)arg1 metaDataFile:(id)arg2;
-(oneway void)resetAssertions;

@end

