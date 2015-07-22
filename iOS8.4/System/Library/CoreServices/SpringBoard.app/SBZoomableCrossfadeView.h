/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SBFAnimationFactory, UIView;

@interface SBZoomableCrossfadeView : UIView {

	SBFAnimationFactory* _animationFactory;
	UIView* _startView;
	UIView* _endView;
	BOOL _translucent;
	BOOL _crossfaded;

}

@property (nonatomic,retain) SBFAnimationFactory * animationFactory;              //@synthesize animationFactory=_animationFactory - In the implementation block
+(id)crossfadeViewWithStartView:(id)arg1 endView:(id)arg2 translucent:(BOOL)arg3 ;
-(void)crossfadeWithCompletion:(/*^block*/id)arg1 ;
-(id)_initWithStartView:(id)arg1 endView:(id)arg2 translucent:(BOOL)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(SBFAnimationFactory *)animationFactory;
-(void)setAnimationFactory:(SBFAnimationFactory *)arg1 ;
@end
