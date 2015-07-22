/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerElement.h>

@class GCControllerAxisInput, GCControllerButtonInput;

@interface GCControllerDirectionPad : GCControllerElement

@property (copy) id valueChangedHandler; 
@property (readonly) GCControllerAxisInput * xAxis; 
@property (readonly) GCControllerAxisInput * yAxis; 
@property (readonly) GCControllerButtonInput * up; 
@property (readonly) GCControllerButtonInput * down; 
@property (readonly) GCControllerButtonInput * left; 
@property (readonly) GCControllerButtonInput * right; 
-(GCControllerButtonInput *)down;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
-(id)valueChangedHandler;
-(void)setValueChangedHandler:(id)arg1 ;
-(id)initWithFlippedY:(BOOL)arg1 digital:(BOOL)arg2 ;
-(GCControllerAxisInput *)xAxis;
-(GCControllerAxisInput *)yAxis;
-(id)description;
-(GCControllerButtonInput *)up;
-(GCControllerButtonInput *)left;
-(GCControllerButtonInput *)right;
@end
