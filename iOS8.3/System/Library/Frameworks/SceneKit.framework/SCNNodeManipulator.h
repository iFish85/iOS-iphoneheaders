/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:08:43 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNManipulator.h>

@interface SCNNodeManipulator : SCNManipulator {

	C3DMatrix4x4 _xAxisToZAxisTransform;
	C3DMatrix4x4 _yAxisToZAxisTransform;
	C3DMatrix4x4 _xyPlaneToYZPlaneTransform;
	C3DMatrix4x4 _xyPlaneToXZPlaneTransform;
	SCD_Union_SC9 _actionData;
	char _isMouseDown;
	unsigned short _action;

}
-(char)mouseDragged:(SCD_Struct_SC10)arg1 ;
-(id)init;
-(id)copy;
-(char)mouseDown:(SCD_Struct_SC10)arg1 ;
-(char)mouseUp:(SCD_Struct_SC10)arg1 ;
-(void)draw;
-(char)mouseMoved:(SCD_Struct_SC10)arg1 ;
@end

