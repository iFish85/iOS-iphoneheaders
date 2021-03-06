/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartLayerBasedSceneRenderSetup.h>

@interface TSCH3DChartSceneRender3DBuildSetup : TSCH3DChartLayerBasedSceneRenderSetup {

	CGRect mAnimationBounds;
	tvec2<float> mBuildOffsetFromLayerRelativeToBodyCanvas;

}

@property (assign,nonatomic) CGRect animationBounds; 
-(void)updateFramebufferBounds:(FramebufferBounds*)arg1 ;
-(box<glm::detail::tvec2<float> >)layerFrameInLayerRelativeSpaceFromFramebufferBounds:(const FramebufferBounds*)arg1 ;
-(box<glm::detail::tvec2<float> >)globalPixelAlignedBodyCanvasBoundsForRenderingCamera;
-(void)setOffsetFromLayerRelativeToBodyCanvas:(tvec2<float>)arg1 ;
-(CGRect)animationBounds;
-(void)setAnimationBounds:(CGRect)arg1 ;
@end

