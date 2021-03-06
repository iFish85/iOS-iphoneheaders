/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:33 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBAppSwitcherPageContentView.h>

@protocol SBAppSwitcherCacheVended;
@class UIView, SBWallpaperEffectView, SBAppSwitcherStatusBarViewCache, NSString, SBZoomView;

@interface SBAppSwitcherContinuityAppView : UIView <SBAppSwitcherPageContentView> {

	UIView* _containerView;
	SBWallpaperEffectView* _wallpaperView;
	UIView*<SBAppSwitcherCacheVended> _fakeStatusBarView;
	SBAppSwitcherStatusBarViewCache* _statusBarCache;
	NSString* _bundleIdentifier;
	SBZoomView* _zoomView;
	int _orientation;

}

@property (assign,nonatomic) int orientation;                       //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_viewDismissing:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 bundleIdentifier:(id)arg2 ;
-(CGAffineTransform)_rotationTransformForOrientation:(int)arg1 ;
-(void)_willAnimateDismiss:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
@end

