/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DFramebufferCopyPipeline.h>

@interface TSCH3DFramebufferOnepassBlurPipeline : TSCH3DFramebufferCopyPipeline {

	tvec2<float> mPixelSize;

}

@property (nonatomic,readonly) tvec2<float> pixelSize; 
+(id)pipelineWithProcessor:(id)arg1 session:(id)arg2 pixelSize:(const tvec2<float>*)arg3 ;
-(void)updateShaderEffectsStates;
-(id)initWithProcessor:(id)arg1 session:(id)arg2 pixelSize:(const tvec2<float>*)arg3 ;
-(void)dealloc;
-(tvec2<float>)pixelSize;
@end

