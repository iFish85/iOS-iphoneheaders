/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH2DChartLayout.h>

@class TSCH3DScene, TSCH3DChartSceneAreaLayoutItem;

@interface TSCH3DChartLayout : TSCH2DChartLayout

@property (nonatomic,readonly) TSCH3DScene * scene; 
@property (nonatomic,readonly) const ChartProjectedBoundsSpaces* projectedBounds; 
@property (nonatomic,readonly) BOOL hasProjectedBounds; 
@property (nonatomic,readonly) TSCH3DChartSceneAreaLayoutItem * areaItem; 
+(id)propertiesThatInvalidateLayout;
+(id)p_propertiesThatResetSeriesStorage;
+(id)p_propertiesThatResetSceneProperties;
+(id)p_propertiesThatInvalidateShadows;
+(id)p_allScaleProperties;
+(void)upgradeSceneDepthSettingsForChartInfo:(id)arg1 hasConstantDepth:(BOOL)arg2 willModifyBlock:(/*^block*/id)arg3 ;
-(void)setLayoutSettings:(SCD_Struct_TS399)arg1 ;
-(const ChartProjectedBoundsSpaces*)projectedBounds;
-(id)containingViewportVector;
-(id)infoChartScale;
-(id)initWithChartInfo:(id)arg1 ;
-(BOOL)p_shouldClearSceneForLayoutSettings:(SCD_Struct_TS399)arg1 ;
-(TSCH3DChartSceneAreaLayoutItem *)areaItem;
-(void)p_ensureValidForInwardLayout;
-(void)processChanges:(id)arg1 ;
-(void)p_resetSeriesStorage;
-(void)p_resetSceneProperties;
-(void)setSeriesIndexedPieWedgeExplosions:(id)arg1 ;
-(CGRect)boundsForResize;
-(void)layoutForResizingSize:(CGSize)arg1 ;
-(BOOL)hasProjectedBounds;
-(void)modelInvalidated:(id)arg1 ;
-(TSCH3DScene *)scene;
-(void)dealloc;
@end
