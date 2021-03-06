/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBInteractionPassThroughView.h>

@class _SBAnimatableCorneredView, SBIconImageView, UIView;

@interface SBIconImageCrossfadeView : SBInteractionPassThroughView {

	_SBAnimatableCorneredView* _containerView;
	SBIconImageView* _imageView;
	UIView* _crossfadeView;
	float _crossfadeFraction;
	float _containerScaleX;
	float _containerScaleY;
	BOOL _masksCorners;
	BOOL _performsTrueCrossfade;
	CGPoint _stretchAnchorPoint;

}

@property (assign,nonatomic) BOOL masksCorners;                       //@synthesize masksCorners=_masksCorners - In the implementation block
@property (assign,nonatomic) BOOL performsTrueCrossfade;              //@synthesize performsTrueCrossfade=_performsTrueCrossfade - In the implementation block
@property (assign,nonatomic) CGPoint stretchAnchorPoint;              //@synthesize stretchAnchorPoint=_stretchAnchorPoint - In the implementation block
-(void)_updateCornerMask;
-(id)initWithImageView:(id)arg1 crossfadeView:(id)arg2 ;
-(void)prepareGeometry;
-(void)setMasksCorners:(BOOL)arg1 ;
-(void)setStretchAnchorPoint:(CGPoint)arg1 ;
-(void)setFadeFraction:(float)arg1 ;
-(void)setMorphFraction:(float)arg1 ;
-(BOOL)masksCorners;
-(BOOL)performsTrueCrossfade;
-(void)setPerformsTrueCrossfade:(BOOL)arg1 ;
-(CGPoint)stretchAnchorPoint;
-(void)dealloc;
-(void)layoutSubviews;
-(void)cleanup;
@end

