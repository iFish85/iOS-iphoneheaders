/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartStackedColumnSceneObject.h>

@interface TSCH3DChartStackedBarSceneObject : TSCH3DChartStackedColumnSceneObject
+(bool)isHorizontalChart;
+(bool)isStacked;
+(id)chartSeriesType;
+(TSCH3DScenePart)partWithEnumerator:(id)arg1 layoutSettings:(SCD_Struct_TS340)arg2 ;
-(void)updateLightingEffectsState:(id)arg1 scene:(id)arg2 ;
-(tvec2<float>)labelObjectSpacePosition:(unsigned)arg1 dataSpaceValue:(float)arg2 ;
@end

