/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:42 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKRenderStyle.h>

@interface VKBuildingDrawStyle : VKRenderStyle
+(int)renderStyleID;
-(Matrix<float, 4, 1>)topColorAtZoom:(float)arg1 ;
-(Matrix<float, 4, 1>)flatColorAtZoom:(float)arg1 ;
-(Matrix<float, 4, 1>)footprintStrokeColorAtZoom:(float)arg1 ;
-(float)footprintStrokeWidthAtZoom:(float)arg1 ;
-(Matrix<float, 4, 1>)facadeColorAtZoom:(float)arg1 ;
-(Matrix<float, 4, 1>)strokeColor3DAtZoom:(float)arg1 ;
-(float)strokeWidth3DAtZoom:(float)arg1 ;
-(char)visibleAtZoom:(float)arg1 ;
-(Matrix<float, 4, 1>)landmarkColorAtZoom:(float)arg1 ;
-(Matrix<float, 4, 1>)outlineColorAtZoom:(float)arg1 ;
-(char)outlineAtZoom:(float)arg1 ;
-(int)roofStyle;
-(char)hasStrokeColor3D;
-(char)hasStrokeWidth3D;
@end

