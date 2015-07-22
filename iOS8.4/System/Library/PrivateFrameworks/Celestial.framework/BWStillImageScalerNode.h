/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class BWVideoFormat, BWPixelBufferPool;

@interface BWStillImageScalerNode : BWNode {

	BWVideoFormat* _outputFormat;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	int _poolCapacity;
	BWPixelBufferPool* _pool;
	OpaqueVTPixelTransferSessionRef _scalingSession;
	BOOL _defersCropToJPEGEncoderWhenPossible;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)initWithPoolCapacity:(int)arg1 ;
-(void)_purgeResources;
-(BOOL)_updatePoolWithSettings:(id)arg1 normalizedInputCropRect:(CGRect)arg2 scaledDenormalizedInputCropRectOut:(CGRect*)arg3 ;
-(int)_rebuildBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(int)_buildScalingSession;
-(void)setDefersCropToJPEGEncoderWhenPossible:(BOOL)arg1 ;
-(BOOL)defersCropToJPEGEncoderWhenPossible;
@end
