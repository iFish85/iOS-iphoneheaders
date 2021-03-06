/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UILabel.h>

@interface StrokableLabel : UILabel {

	BOOL _stroke;
	BOOL _nonAlphaShadow;

}

@property (assign,nonatomic) BOOL stroke;                      //@synthesize stroke=_stroke - In the implementation block
@property (assign,nonatomic) BOOL nonAlphaShadow;              //@synthesize nonAlphaShadow=_nonAlphaShadow - In the implementation block
-(BOOL)nonAlphaShadow;
-(void)setNonAlphaShadow:(BOOL)arg1 ;
-(BOOL)stroke;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)setStroke:(BOOL)arg1 ;
@end

