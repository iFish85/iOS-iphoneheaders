/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DLinkablePipeline.h>

@protocol TSCH3DPipelineLinkable;
@class TSCH3DGLFramebuffer;

@interface TSCH3DFramebufferTransformPipeline : TSCH3DLinkablePipeline {

	id<TSCH3DPipelineLinkable> mSource;
	TSCH3DGLFramebuffer* mTarget;
	TSCH3DGLFramebuffer* mInput;

}

@property (nonatomic,retain) id<TSCH3DPipelineLinkable> source; 
@property (nonatomic,retain) TSCH3DGLFramebuffer * target; 
-(void)loadSource;
-(char)prepareFramebuffer;
-(void)dealloc;
-(void)setTarget:(TSCH3DGLFramebuffer *)arg1 ;
-(TSCH3DGLFramebuffer *)target;
-(char)run;
-(id<TSCH3DPipelineLinkable>)source;
-(void)setSource:(id<TSCH3DPipelineLinkable>)arg1 ;
@end

