/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, MFModernAtomView;

@interface MFModernAtomBackgroundView : UIView {

	UIView* _selectedView;
	UIView* _separatorView;
	MFModernAtomView* _hostAtomView;
	int _separatorStyle;
	BOOL _selected;
	float _scalingFactor;

}

@property (nonatomic,readonly) UIView * separatorView;                     //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic) MFModernAtomView * hostAtomView;              //@synthesize hostAtomView=_hostAtomView - In the implementation block
@property (assign,nonatomic) int separatorStyle;                           //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (assign,nonatomic) BOOL selected;                                //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) float scalingFactor;                          //@synthesize scalingFactor=_scalingFactor - In the implementation block
-(void)setHostAtomView:(id)arg1 ;
-(float)scalingFactor;
-(float)separatorWidth;
-(void)setScalingFactor:(float)arg1 ;
-(id)hostAtomView;
-(id)_chevronImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)invalidateIntrinsicContentSize;
-(void)tintColorDidChange;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(int)separatorStyle;
-(id)separatorView;
-(BOOL)selected;
@end

