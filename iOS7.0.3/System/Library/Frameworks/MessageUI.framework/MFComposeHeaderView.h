/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, MFHeaderLabelView, UIView, NSLayoutConstraint;

@interface MFComposeHeaderView : UIView {

	NSString* _label;
	NSString* _navTitle;
	MFHeaderLabelView* _labelView;
	id _delegate;
	UIView* _separator;
	NSLayoutConstraint* _labelAlignToTopConstraint;
	BOOL _drawsLetterpress;

}

@property (assign,nonatomic) BOOL drawsLetterpress;              //@synthesize drawsLetterpress=_drawsLetterpress - In the implementation block
+(float)_labelTopPaddingSpecification;
+(id)defaultFont;
+(float)preferredHeight;
+(float)separatorHeight;
-(float)labelTopPadding;
-(void)handleTouchesEnded;
-(void)setNavTitle:(id)arg1 ;
-(void)setLabelHighlighted:(BOOL)arg1 ;
-(float)maxLabelX;
-(void)addCenteredLayoutConstraintForView:(id)arg1 ;
-(void)refreshPreferredContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_automationID;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_canBecomeFirstResponder;
-(void)updateConstraints;
-(void)setLabel:(id)arg1 ;
-(void)setDrawsLetterpress:(BOOL)arg1 ;
-(BOOL)drawsLetterpress;
-(id)navTitle;
-(CGColorRef)labelColor;
@end

