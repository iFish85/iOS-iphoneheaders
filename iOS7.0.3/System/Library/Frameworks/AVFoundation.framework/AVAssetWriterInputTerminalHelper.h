/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>
#import <AVFoundation/AVAssetWriterInputMediaDataRequesterDelegate.h>

@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate> {

	int _terminalStatus;
	BOOL _didRequestMediaDataOnce;

}
-(id)initWithConfigurationState:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 terminalStatus:(int)arg2 ;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(int)arg1 ;
-(BOOL)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(BOOL)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_CM4)arg2 ;
-(void)markAsFinished;
-(void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)arg1 ;
-(BOOL)mediaDataRequesterShouldRequestMediaData:(id)arg1 ;
-(int)status;
@end

