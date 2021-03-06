/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNAnimationPluginArchiving.h>

@class TSDGLShader, TSDGLDataBuffer;

@interface KNIrisBase : KNAnimationEffect <KNAnimationPluginArchiving> {

	TSDGLShader* mQuadShader;
	TSDGLDataBuffer* mQuadDataBuffer;
	TSDGLShader* mOpaqueShader;
	TSDGLDataBuffer* mOpaqueDataBuffer;
	TSDGLShader* mFadeShader;
	TSDGLDataBuffer* mFadeDataBuffer;
	unsigned long long mNumDivisionsPerQuadrant;
	bool _isBuildOut;
	CGRect _frameRect;
	CGRect _drawableFrame;

}
+(id)animationFilter;
+(int)animationCategory;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned long long)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(bool)arg5 version:(unsigned long long)arg6 ;
+(void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(bool)arg5 version:(unsigned long long)arg6 ;
+(bool)isTransition;
+(id)animationName;
-(void)p_setupShaders;
-(void)p_teardown;
-(id)initWithAnimationContext:(id)arg1 ;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(double)p_angleFromQuadrant:(unsigned long long)arg1 inRect:(CGRect)arg2 ;
-(double)p_largestDividedAngleInRect:(CGRect)arg1 ;
-(void)p_setupDataBuffersWithFrameRect:(CGRect)arg1 openFromCenter:(bool)arg2 ;
-(void)dealloc;
@end

