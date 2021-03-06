/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:59:57 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorMapModel.h>
#import <VectorKit/VKStyleManagerObserver.h>

@class NSString, VKStyleManager;

@interface VKPolygonMapModel : VKVectorMapModel <VKStyleManagerObserver> {

	char _drawShapes;
	unique_ptr<ggl::FragmentedPool<ggl::PolygonStroke::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonStroke::Shader::Setup> > >* _strokeShaderSetupPool;
	unique_ptr<ggl::FragmentedPool<ggl::PolygonAnimatableStroke::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonAnimatableStroke::Shader::Setup> > >* _animatableStrokeShaderSetupPool;
	unique_ptr<ggl::FragmentedPool<ggl::PolygonFill::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonFill::Shader::Setup> > >* _fillShaderSetupPool;
	unique_ptr<ggl::FragmentedPool<ggl::PolygonAnimatableFill::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonAnimatableFill::Shader::Setup> > >* _animatableFillShaderSetupPool;
	unique_ptr<ggl::FragmentedPool<ggl::PolygonShadowedStroke::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonShadowedStroke::Shader::Setup> > >* _coastlineShaderSetupPool;
	unique_ptr<ggl::FragmentedPool<ggl::Glow::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Glow::Shader::Setup> > >* _glowShaderSetupPool;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _strokeRenderStateNoStencil;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _strokeRenderStateGreater;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _strokeRenderStateBlendGreater;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _strokeRenderStateNotEqual;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _fillRenderStateNoStencil;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _fillRenderState;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _fillRenderStateBlendNoStencil;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _fillRenderStateBlend;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _coastlineRenderStateNoStencil;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _coastlineRenderState;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _coastlineGlowRenderState;
	unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > >* _coastlineRenderItemPool;
	shared_ptr<ggl::AnimatableTexture::VariantUniformData>* _variantData;
	shared_ptr<ggl::Tile::ViewUniformData>* _groundCoverViewUniformData;
	shared_ptr<ggl::PolygonFill::FillUniformData>* _groundCoverPolygonUniformData;
	shared_ptr<ggl::PolygonBase::MeshMesh>* _groundCoverMesh;
	unique_ptr<ggl::PolygonFill::Shader::Setup, std::__1::default_delete<ggl::PolygonFill::Shader::Setup> >* _groundCoverShaderSetup;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _groundCoverRenderState;
	unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> >* _groundCoverRenderItem;
	shared_ptr<md::StyleQuery>* _groundCoverStyle;
	RenderItemBatcher* _batcher;

}

@property (assign,nonatomic) char drawShapes;                              //@synthesize drawShapes=_drawShapes - In the implementation block
@property (nonatomic,readonly) char shouldEverShowVegetation; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) VKStyleManager * styleManager; 
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)didReceiveMemoryWarning:(char)arg1 ;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)setDrawShapes:(char)arg1 ;
-(void)stylesheetWillChange;
-(void)stylesheetDidChange;
-(void)stylesheetDoneChanging;
-(unsigned long long)mapLayerPosition;
-(char)wantsCategorizedSourceTiles;
-(void)willStartDrawingTiles:(id)arg1 ;
-(void)flushPools;
-(void)resetPools;
-(void)updateGroundCoverStyle;
-(void)generateRenderItemsForScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)generateGroundCoverRenderItemsForScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)generateRenderItemsForOpaquePolygonsInScene:(id)arg1 context:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)generateCoastlineRenderItemsWithContext:(id)arg1 commandBuffer:(CommandBuffer*)arg2 ;
-(void)generateRenderItemsForTransparentPolygonsInScene:(id)arg1 context:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(unsigned)textureSize;
-(Matrix<float, 4, 4>)worldTransformForPolygonGroup:(id)arg1 atZoom:(float)arg2 ;
-(CommandBuffer*)commandBufferInRenderQueue:(RenderQueue*)arg1 forFeatureWithAttributes:(id)arg2 ;
-(void)updateStylesInTiles:(id)arg1 updateTextures:(char)arg2 ;
-(char)shouldEverShowVegetation;
-(char)drawShapes;
@end

