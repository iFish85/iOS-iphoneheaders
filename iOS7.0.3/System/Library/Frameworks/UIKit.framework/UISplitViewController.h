/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <GameCenterUI/GKContentRefresh.h>
#import <GameCenterUI/GKURLHandling.h>

@class UIBarButtonItem, NSString, UIPopoverController, UIView, NSArray, UIGestureRecognizer;

@interface UISplitViewController : UIViewController <UIGestureRecognizerDelegate, GKContentRefresh, GKURLHandling> {

	id _delegate;
	UIBarButtonItem* _barButtonItem;
	NSString* _buttonTitle;
	UIPopoverController* _hiddenPopoverController;
	UIView* _rotationSnapshotView;
	float _masterColumnWidth;
	float _gutterWidth;
	float _cornerRadius;
	int _rotatingFromOrientation;
	int _lastPresentedOrientation;
	CGRect _rotatingFromMasterViewFrame;
	CGRect _rotatingToMasterViewFrame;
	NSArray* _cornerImageViews;
	UIView* _underBarSeparatorView;
	unsigned _slideTransitionCount;
	UIView* _masterBackgroundView;
	BOOL _presentsInFadingPopover;
	BOOL _presentsWithGesture;
	UIGestureRecognizer* _popoverPresentationGestureRecognizer;
	struct {
		unsigned validDelegateHiddenMasterOrientations : 5;
		unsigned delegateHiddenMasterOrientations : 5;
		unsigned delegateImplementsShouldHide : 1;
		unsigned hidden : 3;
		unsigned delegateHandlesTogglingMaster : 1;
		unsigned delegateProvidesBackgroundView : 1;
		unsigned delegateWantsUnSlideCallback : 1;
		unsigned masterOnSlide : 1;
		unsigned delegateWantsWillShowCallback : 1;
		unsigned delegateWantsWillHideCallback : 1;
		unsigned delegateWantsWillPresentCallback : 1;
		unsigned delegateWantsNavigationRequests : 1;
		unsigned resizesDetailOnSlide : 1;
		unsigned delegateSupportedInterfaceOrientations : 1;
		unsigned delegatePreferredInterfaceOrientationForPresentation : 1;
	}  _splitViewControllerFlags;

}

@property (nonatomic,copy) NSArray * viewControllers; 
@property (assign,nonatomic) <UISplitViewControllerDelegate> * delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL presentsWithGesture;                                                       //@synthesize presentsWithGesture=_presentsWithGesture - In the implementation block
@property (assign,setter=_setPresentsInFadingPopover:,nonatomic) BOOL _presentsInFadingPopover; 
+(BOOL)doesOverrideSupportedInterfaceOrientations;
+(BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+(BOOL)_optsOutOfPopoverControllerHierarchyCheck;
+(BOOL)_forcePresentsInSlidingPopover;
+(BOOL)_forcePresentsWithGesture;
-(void)_gkForceNextContentUpdate;
-(void)_gkResetContents;
-(void)_gkSetContentsNeedUpdateWithHandler:(/*^block*/ id)arg1 ;
-(void)_gkUpdateContentsWithCompletionHandlerAndError:(/*^block*/ id)arg1 ;
-(void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)_commonInit;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(int)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_shouldPersistViewWhenCoding;
-(void)loadView;
-(void)unloadViewForced:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)purgeMemoryForReason:(int)arg1 ;
-(BOOL)_shouldSynthesizeSupportedOrientations;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI26*)arg1 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)_allContainedViewControllers;
-(id)viewControllers;
-(void)setViewControllers:(id)arg1 ;
-(void)__viewWillLayoutSubviews;
-(id)detailViewController;
-(id)masterViewController;
-(void)_setPresentsInFadingPopover:(BOOL)arg1 ;
-(BOOL)_isMasterViewShownByDefault;
-(void)loadSubviews;
-(void)_loadNewSubviews:(id)arg1 ;
-(BOOL)hidesMasterViewInLandscape;
-(BOOL)hidesMasterViewInPortrait;
-(BOOL)_presentsInFadingPopover;
-(BOOL)_delegateUsesLegacySlideSPI;
-(BOOL)_isHidesMasterInPortraitValid;
-(BOOL)_isHidesMasterInLandscapeValid;
-(BOOL)_effectivePresentsWithGesture;
-(void)_calculateDelegateHiddenMasterOrientations;
-(void)_addOrRemovePopoverPresentationGestureRecognizer;
-(CGRect)_detailViewFrameWithPopoverControllerFrame:(CGRect)arg1 ;
-(CGRect)_masterViewFrame;
-(CGRect)_detailViewFrame;
-(void)toggleMasterVisible:(id)arg1 ;
-(void)popoverWillAppear:(id)arg1 ;
-(BOOL)_resizesDetailOnSlide;
-(BOOL)_canDisplayHostedMaster;
-(BOOL)_canSlideMaster;
-(void)_viewControllerHiding:(id)arg1 ;
-(BOOL)_isLandscape;
-(BOOL)presentsWithGesture;
-(BOOL)_isMasterViewShown;
-(void)_slideIn:(BOOL)arg1 viewController:(id)arg2 animated:(BOOL)arg3 totalDuration:(double)arg4 completion:(/*^block*/ id)arg5 ;
-(void)_dismissMasterViewController;
-(void)_presentMasterViewController:(BOOL)arg1 ;
-(float)leftColumnWidth;
-(void)_invalidateHidesMasterViewInOrientation:(int)arg1 ;
-(BOOL)revealsMasterViewDuringRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 ;
-(BOOL)hidesMasterViewDuringRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 ;
-(BOOL)_isRotating;
-(void)snapshotMasterView;
-(void)snapshotAllViews;
-(void)snapshotForRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 ;
-(void)_setupRoundedCorners;
-(void)_removeRoundedCorners;
-(void)_updateMasterViewControllerFrame;
-(void)_setupUnderBarSeparatorViewForOrientation:(int)arg1 ;
-(float)gutterWidth;
-(void)setLeftColumnWidth:(float)arg1 ;
-(void)setHidesMasterViewInPortrait:(BOOL)arg1 ;
-(float)masterColumnWidth;
-(void)setMasterColumnWidth:(float)arg1 ;
-(void)setGutterWidth:(float)arg1 ;
-(CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2 ;
-(void)_presentGestureAttemptedWithPresentedPopoverController:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations:(id)arg1 ;
-(void)_setResizesDetailOnSlide:(BOOL)arg1 ;
-(void)_popoverController:(id)arg1 willAnimateToFrame:(CGRect)arg2 ;
-(void)setPresentsWithGesture:(BOOL)arg1 ;
@end

