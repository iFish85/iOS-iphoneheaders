/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMDiagramPointMapper.h>

@class NSDictionary;

@interface CMDiagramPointTransitionMapper : CMDiagramPointMapper {

	int mShapeType;
	NSDictionary* mAdjustValues;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 shapeType:(int)arg4 adjustValues:(id)arg5 parent:(id)arg6 ;
-(id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 shapeType:(int)arg4 parent:(id)arg5 ;
@end

