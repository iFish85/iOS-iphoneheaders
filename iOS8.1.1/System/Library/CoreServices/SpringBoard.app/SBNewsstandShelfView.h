/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBGradientView.h>

@class UIView, SBHighlightView, UIColor;

@interface SBNewsstandShelfView : SBGradientView {

	UIView* _tintView;
	double _tintAlpha;
	SBHighlightView* _highlightView;
	unsigned long long _shelfIndex;

}

@property (nonatomic,retain) UIColor * tintColor; 
@property (assign,nonatomic) double tintAlpha; 
@property (assign,nonatomic) unsigned long long shelfIndex;              //@synthesize shelfIndex=_shelfIndex - In the implementation block
-(void)setTintAlpha:(double)arg1 ;
-(void)setShelfIndex:(unsigned long long)arg1 ;
-(unsigned long long)shelfIndex;
-(void)dealloc;
-(void)layoutSubviews;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(double)tintAlpha;
@end

