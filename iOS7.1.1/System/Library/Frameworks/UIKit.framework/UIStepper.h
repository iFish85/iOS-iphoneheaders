/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UIButton, NSTimer, NSMutableDictionary, UIColor;

@interface UIStepper : UIControl {

	bool _isRtoL;
	UIImageView* _middleView;
	UIButton* _plusButton;
	UIButton* _minusButton;
	NSTimer* _repeatTimer;
	long long _repeatCount;
	NSMutableDictionary* _dividerImages;
	bool _continuous;
	bool _autorepeat;
	bool _wraps;
	double _value;
	double _minimumValue;
	double _maximumValue;
	double _stepValue;

}

@property (assign,getter=isContinuous,nonatomic) bool continuous;              //@synthesize continuous=_continuous - In the implementation block
@property (assign,nonatomic) bool autorepeat;                                  //@synthesize autorepeat=_autorepeat - In the implementation block
@property (assign,nonatomic) bool wraps;                                       //@synthesize wraps=_wraps - In the implementation block
@property (assign,nonatomic) double value;                                     //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double minimumValue;                              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) double maximumValue;                              //@synthesize maximumValue=_maximumValue - In the implementation block
@property (assign,nonatomic) double stepValue;                                 //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,@dynamic,retain) UIColor * tintColor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(bool)_contentHuggingDefault_isUsuallyFixedHeight;
-(bool)_contentHuggingDefault_isUsuallyFixedWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(bool)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setValue:(double)arg1 ;
-(double)value;
-(void)setTintColor:(id)arg1 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)backgroundImageForState:(unsigned long long)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(double)minimumValue;
-(double)maximumValue;
-(bool)isContinuous;
-(void)setContinuous:(bool)arg1 ;
-(void)setMinimumValue:(double)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(void)_updateImages;
-(bool)wraps;
-(void)setWraps:(bool)arg1 ;
-(void)_commonStepperInit;
-(void)_updateButtonEnabled;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 ;
-(void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_updateDividerImageForButtonState;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 ;
-(void)_startTimer;
-(void)_updateHighlightingAtPoint:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_updateCount:(id)arg1 ;
-(void)_stopTimer;
-(void)_setIncrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setDecrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 ;
-(void)setStepValue:(double)arg1 ;
-(id)incrementImageForState:(unsigned long long)arg1 ;
-(id)decrementImageForState:(unsigned long long)arg1 ;
-(double)stepValue;
-(bool)autorepeat;
-(void)setAutorepeat:(bool)arg1 ;
@end

