/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIScrollView.h>

@protocol DelayedScrollerDelegate;
@interface DelayedScroller : UIScrollView {

	<DelayedScrollerDelegate>* _delayedScrollerDelegate;
	CGRect _newFrame;
	CGRect _newBounds;
	CGRect _oldScrollerBounds;
	CGRect _rotationRect;
	unsigned _rotationEdgePin;
	float _oldWidth;
	unsigned _isRotating : 1;

}

@property (getter=isRotating,nonatomic,readonly) BOOL rotating; 
-(void)setDelayedScrollerDelegate:(id)arg1 ;
-(void)_redrawWebView:(id)arg1 withOldWidth:(float)arg2 andNewSize:(CGSize)arg3 ;
-(void)_setIsRotating:(BOOL)arg1 ;
-(void)_centerRotationRectWithWebViewToScale:(id)arg1 ;
-(void)didRotateToInterfaceOrientation:(int)arg1 ;
-(void)layoutSubviews;
-(BOOL)isRotating;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
@end

