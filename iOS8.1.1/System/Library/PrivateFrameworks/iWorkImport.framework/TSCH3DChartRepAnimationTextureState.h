/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSCH3DChartRep, TSCH3DScene, TSCH3DChartRepAnimationTextureSceneDelegate, TSCH3DChartRenderCycle;

@interface TSCH3DChartRepAnimationTextureState : NSObject {

	TSCH3DChartRep* mRep;
	TSCH3DScene* mScene;
	TSCH3DChartRepAnimationTextureSceneDelegate* mRenderIndexDelegate;
	TSCH3DChartRenderCycle* mRenderCycle;

}
-(id)initWithRep:(id)arg1 scene:(id)arg2 finalTexture:(BOOL)arg3 renderCycle:(id)arg4 ;
-(void)dealloc;
-(id)description;
@end
