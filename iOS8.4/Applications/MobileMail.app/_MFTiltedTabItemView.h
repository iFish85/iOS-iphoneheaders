/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class UIView, _TabGradientView, _MFTiltedTabCloseButton;

@interface _MFTiltedTabItemView : UIView {

	UIView* _shadowMaskView;
	char _topBackdropScaled;
	char _contentViewNeedsRemoval;
	char _autoresizesContentView;
	char _editing;
	char _reordering;
	char _closing;
	char _finishedClosing;
	UIView* _headerView;
	UIView* _contentClipperView;
	UIView* _borrowedContentView;
	_TabGradientView* _contentShadowView;
	float _topBackdropHeight;
	_MFTiltedTabCloseButton* _closeButton;
	float _borrowedContentScale;
	unsigned _contentViewType;
	int _capturedInterfaceOrientation;
	unsigned _indexForLayout;
	unsigned _countForLayout;
	float _verticalScrollAdjustment;
	CGRect _closeButtonHitRect;

}

@property (nonatomic,readonly) UIView * headerView;                                      //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) UIView * contentClipperView;                              //@synthesize contentClipperView=_contentClipperView - In the implementation block
@property (nonatomic,retain) UIView * borrowedContentView;                               //@synthesize borrowedContentView=_borrowedContentView - In the implementation block
@property (nonatomic,readonly) _TabGradientView * contentShadowView;                     //@synthesize contentShadowView=_contentShadowView - In the implementation block
@property (assign,nonatomic) char topBackdropScaled;                                     //@synthesize topBackdropScaled=_topBackdropScaled - In the implementation block
@property (assign,nonatomic) float topBackdropHeight;                                    //@synthesize topBackdropHeight=_topBackdropHeight - In the implementation block
@property (assign,nonatomic) CGRect closeButtonHitRect;                                  //@synthesize closeButtonHitRect=_closeButtonHitRect - In the implementation block
@property (nonatomic,readonly) _MFTiltedTabCloseButton * closeButton;                    //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic) float borrowedContentScale;                                 //@synthesize borrowedContentScale=_borrowedContentScale - In the implementation block
@property (assign,nonatomic) unsigned contentViewType;                                   //@synthesize contentViewType=_contentViewType - In the implementation block
@property (assign,nonatomic) int capturedInterfaceOrientation;                           //@synthesize capturedInterfaceOrientation=_capturedInterfaceOrientation - In the implementation block
@property (assign,nonatomic) CATransform3D contentTransform; 
@property (assign,nonatomic) char contentViewNeedsRemoval;                               //@synthesize contentViewNeedsRemoval=_contentViewNeedsRemoval - In the implementation block
@property (assign,nonatomic) char autoresizesContentView;                                //@synthesize autoresizesContentView=_autoresizesContentView - In the implementation block
@property (assign,getter=isEditing,nonatomic) char editing;                              //@synthesize editing=_editing - In the implementation block
@property (assign,getter=isReordering,nonatomic) char reordering;                        //@synthesize reordering=_reordering - In the implementation block
@property (assign,getter=isClosing,nonatomic) char closing;                              //@synthesize closing=_closing - In the implementation block
@property (assign,getter=isFinishedClosing,nonatomic) char finishedClosing;              //@synthesize finishedClosing=_finishedClosing - In the implementation block
@property (assign,nonatomic) unsigned indexForLayout;                                    //@synthesize indexForLayout=_indexForLayout - In the implementation block
@property (assign,nonatomic) unsigned countForLayout;                                    //@synthesize countForLayout=_countForLayout - In the implementation block
@property (assign,nonatomic) float verticalScrollAdjustment;                             //@synthesize verticalScrollAdjustment=_verticalScrollAdjustment - In the implementation block
+(id)_newContentShadowView;
-(CGRect)_contentShadowFrame;
-(void)layoutHeaderViewAnimated:(char)arg1 closeButton:(char)arg2 ;
-(CATransform3D)contentTransform;
-(void)setContentTransform:(CATransform3D)arg1 ;
-(void)setBorrowedContentScale:(float)arg1 ;
-(void)setBorrowedContentView:(UIView *)arg1 ;
-(UIView *)contentClipperView;
-(UIView *)borrowedContentView;
-(_TabGradientView *)contentShadowView;
-(char)topBackdropScaled;
-(void)setTopBackdropScaled:(char)arg1 ;
-(float)topBackdropHeight;
-(void)setTopBackdropHeight:(float)arg1 ;
-(CGRect)closeButtonHitRect;
-(void)setCloseButtonHitRect:(CGRect)arg1 ;
-(float)borrowedContentScale;
-(unsigned)contentViewType;
-(void)setContentViewType:(unsigned)arg1 ;
-(int)capturedInterfaceOrientation;
-(void)setCapturedInterfaceOrientation:(int)arg1 ;
-(char)contentViewNeedsRemoval;
-(void)setContentViewNeedsRemoval:(char)arg1 ;
-(char)autoresizesContentView;
-(void)setAutoresizesContentView:(char)arg1 ;
-(void)setReordering:(char)arg1 ;
-(char)isClosing;
-(void)setClosing:(char)arg1 ;
-(char)isFinishedClosing;
-(void)setFinishedClosing:(char)arg1 ;
-(unsigned)indexForLayout;
-(void)setIndexForLayout:(unsigned)arg1 ;
-(unsigned)countForLayout;
-(void)setCountForLayout:(unsigned)arg1 ;
-(float)verticalScrollAdjustment;
-(void)setVerticalScrollAdjustment:(float)arg1 ;
-(char)isReordering;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(char)isEditing;
-(void)setEditing:(char)arg1 ;
-(UIView *)headerView;
-(_MFTiltedTabCloseButton *)closeButton;
@end

