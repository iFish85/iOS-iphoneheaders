/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDLayoutManipulatingTracker.h>
#import <iWorkImport/TSDDecorator.h>
#import <iWorkImport/TSDRepTracker.h>

@protocol TSDRepDragTrackerDelegate;
@class TSDRep, TSDHUDViewController, NSTimer, TSDAutoscroll, TSUPointerKeyDictionary, CAShapeLayer, NSMutableSet;

@interface TSDRepDragTracker : NSObject <TSDLayoutManipulatingTracker, TSDDecorator, TSDRepTracker> {

	TSDRep* mRep;
	BOOL mDidBeginDrag;
	BOOL mHaveShownHUD;
	BOOL mHaveShownSecondHUD;
	BOOL mHaveShownRuler;
	BOOL mIsInspectorDrivenTracking;
	CGPoint mInitialDragPoint;
	CGPoint mActualDragPoint;
	CGPoint mPreviousActualDragPoint;
	CGPoint mLogicalDragPoint;
	TSDHUDViewController* mSecondHUDController;
	CGPoint mUnscaledDragDelta;
	NSTimer* mRulerTimer;
	TSDAutoscroll* mAutoscroll;
	CGPoint mAutoscrollPoint;
	<TSDRepDragTrackerDelegate>* mDelegate;
	BOOL mInWillBeginDynamicOperation;
	BOOL mInDidEndDynamicOperation;
	TSUPointerKeyDictionary* mMapRepsToSnapOffsets;
	BOOL mShouldConstrain;
	float mSnapLevel;
	float mConstraintAngle;
	CGPoint mConstrainingPoint;
	BOOL mConstraintGuidesShowing;
	CAShapeLayer* mGuideLayer;
	BOOL mShouldShowGuides;
	BOOL mShouldSnapToGuides;
	BOOL mAlreadyInCommandGroup;
	NSMutableSet* mConnectedLineLayouts;
	BOOL mShowDragHUD;
	BOOL mShouldShowRuler;
	BOOL mTrackerDidBeginDragging;

}

@property (nonatomic,retain) TSDRep * rep; 
@property (nonatomic,readonly) BOOL didBeginDrag; 
@property (assign,nonatomic) BOOL shouldSnapToGuides; 
@property (assign,nonatomic) BOOL shouldShowGuides; 
@property (assign,nonatomic) BOOL alreadyInCommandGroup; 
@property (assign,nonatomic) BOOL showDragHUD; 
@property (assign,nonatomic) BOOL shouldShowRuler; 
@property (assign,nonatomic) BOOL isInspectorDrivenTracking; 
-(id)initWithRep:(id)arg1 ;
-(id)rep;
-(void)changeDynamicLayoutsForReps:(id)arg1 ;
-(BOOL)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1 ;
-(void)p_hideHUD;
-(BOOL)isInspectorDrivenTracking;
-(void)setIsInspectorDrivenTracking:(BOOL)arg1 ;
-(void)commitChangesForReps:(id)arg1 ;
-(BOOL)supportsAlignmentGuides;
-(BOOL)operationShouldBeDynamic;
-(void)willBeginDynamicOperationForReps:(id)arg1 ;
-(void)didChangeCurrentlyTransformingReps;
-(id)selectionBehaviorForReps:(id)arg1 ;
-(id)decoratorOverlayLayers;
-(void)setRep:(id)arg1 ;
-(void)p_hideGuideLayer;
-(BOOL)p_delegateIsHandlingDrag;
-(void)p_displayRulerAndRect;
-(void)p_updateGuides;
-(void)p_updateHUDFromTimer;
-(void)p_showGuideLayer;
-(BOOL)shouldSnapToGuides;
-(void)p_didBeginDrag;
-(void)p_makeSiblingRepsOfRep:(id)arg1 performBlock:(/*^block*/ id)arg2 ;
-(BOOL)shouldShowGuides;
-(BOOL)alreadyInCommandGroup;
-(void)p_updateHUDAtPoint:(CGPoint)arg1 ;
-(CGRect)p_selectedInfosRect;
-(void)beginShowingDragUIForInitialDragPoint:(CGPoint)arg1 ;
-(void)willEndPossibleRepDragGesture;
-(void)endPossibleRepDragGesture;
-(void)addUnscaledDragDelta:(CGPoint)arg1 ;
-(void)setActualDragPoint:(CGPoint)arg1 ;
-(void)setLogicalDragPoint:(CGPoint)arg1 ;
-(void)setShouldConstrain:(BOOL)arg1 ;
-(void)setSnapLevel:(float)arg1 ;
-(void)setConstrainingPoint:(CGPoint)arg1 ;
-(void)setShouldShowGuides:(BOOL)arg1 ;
-(BOOL)handlesCopyingObjects;
-(BOOL)didBeginDrag;
-(BOOL)showDragHUD;
-(void)setShowDragHUD:(BOOL)arg1 ;
-(BOOL)shouldShowRuler;
-(void)setShouldShowRuler:(BOOL)arg1 ;
-(void)setShouldSnapToGuides:(BOOL)arg1 ;
-(void)setAlreadyInCommandGroup:(BOOL)arg1 ;
-(void)didEndDynamicOperationForReps:(id)arg1 ;
-(void)dealloc;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
@end
