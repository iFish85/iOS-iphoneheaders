/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:39:10 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <UIKit/UIButton.h>

@interface CAUITransportButton : UIButton {

	int drawingStyle;
	CGColorRef fillColor;
	CGRect imageRect;

}

@property (assign) int drawingStyle; 
@property (assign) CGColorRef fillColor; 
+(Class)layerClass;
-(void)setDrawingStyle:(int)arg1 ;
-(int)drawingStyle;
-(CGPathRef)newPathRefForStyle:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(CGColorRef)fillColor;
-(void)flash;
@end
