/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollView.h>

@protocol UICollectionViewDataSource_Private;
@class UICollectionViewLayout, UIView, NSMutableSet, NSMutableDictionary, UICollectionReusableView, NSString, NSIndexPath, UICollectionViewData, UICollectionViewUpdate, NSMutableArray, NSArray, UITouch, UICollectionViewLayoutAttributes, _UIDynamicAnimationGroup, NSTimer;

@interface UICollectionView : UIScrollView {

	UICollectionViewLayout* _layout;
	id<UICollectionViewDataSource_Private> _dataSource;
	UIView* _backgroundView;
	NSMutableSet* _indexPathsForSelectedItems;
	NSMutableDictionary* _cellReuseQueues;
	NSMutableDictionary* _supplementaryViewReuseQueues;
	NSMutableSet* _indexPathsForHighlightedItems;
	long long _reloadingSuspendedCount;
	long long _updateAnimationCount;
	UICollectionReusableView* _firstResponderView;
	UIView* _newContentView;
	long long _firstResponderViewType;
	NSString* _firstResponderViewKind;
	NSIndexPath* _firstResponderIndexPath;
	NSMutableDictionary* _visibleCellsDict;
	NSMutableDictionary* _visibleSupplementaryViewsDict;
	NSMutableDictionary* _visibleDecorationViewsDict;
	NSMutableDictionary* _clonedCellsDict;
	NSMutableDictionary* _clonedSupplementaryViewsDict;
	NSMutableDictionary* _clonedDecorationViewsDict;
	NSIndexPath* _pendingSelectionIndexPath;
	NSMutableSet* _pendingDeselectionIndexPaths;
	UICollectionViewData* _collectionViewData;
	UICollectionViewUpdate* _currentUpdate;
	CGRect _visibleBounds;
	CGRect _preRotationBounds;
	CGPoint _rotationBoundsOffset;
	long long _rotationAnimationCount;
	long long _updateCount;
	NSMutableArray* _insertItems;
	NSMutableArray* _deleteItems;
	NSMutableArray* _reloadItems;
	NSMutableArray* _moveItems;
	NSArray* _originalInsertItems;
	NSArray* _originalDeleteItems;
	UITouch* _currentTouch;
	id _updateCompletionHandler;
	NSMutableDictionary* _cellClassDict;
	NSMutableDictionary* _cellNibDict;
	NSMutableDictionary* _supplementaryViewClassDict;
	NSMutableDictionary* _supplementaryViewNibDict;
	NSMutableDictionary* _cellNibExternalObjectsTables;
	NSMutableDictionary* _supplementaryViewNibExternalObjectsTables;
	UICollectionViewLayoutAttributes* _transitionLayoutAttributes;
	BOOL _isInInteractiveTransition;
	BOOL _shouldAccumulateTrackedLayoutValues;
	NSMutableDictionary* _interactiveTransitionInfos;
	/*^block*/id _interactiveCompletionHandler;
	double _currentInteractiveTransitionTimeStamp;
	double _previousInteractiveTransitionTimeStamp;
	double _startTimeStamp;
	CGPoint _currentCenterOffset;
	CGPoint _previousCenterOffset;
	double _currentInteractiveTransitionProgress;
	double _previousInteractiveTransitionProgress;
	_UIDynamicAnimationGroup* _endInteractiveTransitionAnimationGroup;
	UICollectionViewLayout* _nextLayoutForInteractiveTranstion;
	NSMutableDictionary* _interactiveTransitionValueTrackingDict;
	NSMutableArray* _trackedValuesKeys;
	NSMutableSet* _invalidatedItemIndexPaths;
	NSMutableDictionary* _invalidatedSupplementaryIndexPaths;
	NSMutableDictionary* _invalidatedDecorationIndexPaths;
	/*^block*/id _invalidationBlock;
	NSMutableArray* _reorderedItems;
	CGPoint _reorderingTargetPosition;
	NSTimer* _autoscrollTimer;
	long long _focusedViewType;
	struct {
		unsigned delegateShouldHighlightItemAtIndexPath : 1;
		unsigned delegateDidHighlightItemAtIndexPath : 1;
		unsigned delegateDidUnhighlightItemAtIndexPath : 1;
		unsigned delegateShouldSelectItemAtIndexPath : 1;
		unsigned delegateShouldDeselectItemAtIndexPath : 1;
		unsigned delegateDidSelectItemAtIndexPath : 1;
		unsigned delegateDidDeselectItemAtIndexPath : 1;
		unsigned delegateSupportsMenus : 1;
		unsigned delegateWillDisplayCell : 1;
		unsigned delegateWillDisplaySupplementaryView : 1;
		unsigned delegateDidEndDisplayingCell : 1;
		unsigned delegateDidEndDisplayingSupplementaryView : 1;
		unsigned delegateIndexForReferenceItemDuringLayoutTransition : 1;
		unsigned delegateOverrideForTransitionOffsetSize : 1;
		unsigned delegateTargetContentOffsetForProposedContentOffset : 1;
		unsigned delegateTargetIndexPathForMove : 1;
		unsigned delegateCanFocusItemAtIndexPath_deprecated : 1;
		unsigned delegateDidFocusItemAtIndexPath_deprecated : 1;
		unsigned delegateCanFocusItemAtIndexPath : 1;
		unsigned delegateDidFocusItemAtIndexPath : 1;
		unsigned delegateDidUnfocusItemAtIndexPath : 1;
		unsigned delegateShouldChangeFocusedItem : 1;
		unsigned delegateIndexPathForPreferredFocusedItem : 1;
		unsigned dataSourceNumberOfSections : 1;
		unsigned dataSourceViewForSupplementaryElement : 1;
		unsigned dataSourceCanMoveItemAtIndexPath : 1;
		unsigned dataSourceMoveItemAtIndexPath : 1;
		unsigned reloadSkippedDuringSuspension : 1;
		unsigned scheduledUpdateVisibleCells : 1;
		unsigned scheduledUpdateVisibleCellLayoutAttributes : 1;
		unsigned allowsSelection : 1;
		unsigned allowsMultipleSelection : 1;
		unsigned fadeCellsForBoundsChange : 1;
		unsigned updatingLayout : 1;
		unsigned needsReload : 1;
		unsigned reloading : 1;
		unsigned skipLayoutDuringSnapshotting : 1;
		unsigned layoutInvalidatedSinceLastCellUpdate : 1;
		unsigned doneFirstLayout : 1;
		unsigned loadingOffscreenViews : 1;
		unsigned updating : 1;
		unsigned updatingVisibleCells : 1;
		unsigned preRotationBoundsSet : 1;
		unsigned updateFocusAfterItemAnimations : 1;
		unsigned remembersPreviouslyFocusedItem : 1;
		unsigned performingLayout : 1;
	}  _collectionViewFlags;
	CGPoint _lastLayoutOffset;
	/*^block*/id _navigationCompletion;
	NSIndexPath* _focusedCellIndexPath;

}

@property (nonatomic,retain) UICollectionViewLayout * collectionViewLayout;                                                               //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) id<UICollectionViewDelegate> delegate; 
@property (assign,nonatomic) id<UICollectionViewDataSource> dataSource;                                                                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                                                                     //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) BOOL allowsSelection; 
@property (assign,nonatomic) BOOL allowsMultipleSelection; 
@property (getter=_currentUpdate,nonatomic,readonly) UICollectionViewUpdate * currentUpdate; 
@property (getter=_collectionViewData,nonatomic,readonly) UICollectionViewData * collectionViewData; 
@property (getter=_visibleViews,nonatomic,readonly) NSArray * visibleViews; 
@property (setter=_setNavigationCompletion:,getter=_navigationCompletion,nonatomic,copy) id navigationCompletion;                         //@synthesize navigationCompletion=_navigationCompletion - In the implementation block
@property (getter=_reorderedItems,nonatomic,readonly) NSArray * reorderedItems; 
@property (getter=_reorderingTargetPosition,nonatomic,readonly) CGPoint reorderingTargetPosition; 
@property (setter=_setCurrentTouch:,getter=_currentTouch,nonatomic,retain) UITouch * currentTouch;                                        //@synthesize currentTouch=_currentTouch - In the implementation block
@property (setter=_setFocusedCellIndexPath:,getter=_focusedCellIndexPath,nonatomic,copy) NSIndexPath * focusedCellIndexPath;              //@synthesize focusedCellIndexPath=_focusedCellIndexPath - In the implementation block
+(id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 ;
-(long long)MPU_globalRowForRowAtIndexPath:(id)arg1 ;
-(id)ckIndexPathsForElementsInRect:(CGRect)arg1 ;
-(void)__ck_reloadDataKeepingSelection;
-(CGSize)__ck_contentSize;
-(id)__ck_indexPathForLastItem;
-(CGPoint)__ck_scrollToBottomContentOffsetHidingIndexPath:(id)arg1 ;
-(BOOL)__ck_isScrolledToBottomHidingIndexPath:(id)arg1 ;
-(void)__ck_scrollToTopOfCellAtIndexPath:(id)arg1 hidingCellAtIndexPath:(id)arg2 animated:(BOOL)arg3 ;
-(CGSize)_selectionTrackerContentSize;
-(void)_getResponderRectsForXAxisMinRect:(CGRect*)arg1 yMinRect:(CGRect*)arg2 xMaxRect:(CGRect*)arg3 yMaxRect:(CGRect*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDataSource:(id<UICollectionViewDataSource>)arg1 ;
-(void)setDelegate:(id<UICollectionViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)reloadData;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)description;
-(BOOL)allowsMultipleSelection;
-(id<UICollectionViewDataSource>)dataSource;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3 ;
-(void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(id)indexPathForCell:(id)arg1 ;
-(id)cellForItemAtIndexPath:(id)arg1 ;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)indexPathsForVisibleItems;
-(UICollectionViewLayout *)collectionViewLayout;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(id)indexPathForItemAtPoint:(CGPoint)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)preferredFocusedItem;
-(void)_ensureViewsAreLoadedInRect:(CGRect)arg1 ;
-(void)_scrollViewWillEndDraggingWithVelocity:(CGPoint)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1 ;
-(id)_viewControllerToNotifyOnLayoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canBecomeFocused;
-(void)_focusedViewWillChange:(id)arg1 ;
-(void)_setIsAncestorOfFirstResponder:(BOOL)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)_suspendReloads;
-(id)_arrayForUpdateAction:(int)arg1 ;
-(void)_resumeReloads;
-(void)_updateFocusedCellIndexPathIfNecessaryWithLastFocusedRect:(CGRect)arg1 ;
-(void)_setFocusedCellIndexPath:(id)arg1 ;
-(CGRect)_visibleBounds;
-(void)_updateAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_updateBackgroundView;
-(id)visibleCells;
-(void)setAllowsSelection:(BOOL)arg1 ;
-(void)_stopAutoscrollTimer;
-(BOOL)_focusedCellContainedInRowsAtIndexPaths:(id)arg1 ;
-(void)_setupCellAnimations;
-(BOOL)allowsSelection;
-(void)_reloadDataIfNeeded;
-(void)setBackgroundView:(UIView *)arg1 ;
-(id)_focusedCellIndexPath;
-(void)_autoscrollForReordering:(id)arg1 ;
-(UIView *)backgroundView;
-(BOOL)_indexPathIsValid:(id)arg1 ;
-(void)moveSection:(long long)arg1 toSection:(long long)arg2 ;
-(void)_setExternalObjectTable:(id)arg1 forNibLoadingOfCellWithReuseIdentifier:(id)arg2 ;
-(void)_setRemembersPreviouslyFocusedItem:(BOOL)arg1 ;
-(BOOL)_remembersPreviouslyFocusedItem;
-(BOOL)_cell:(id)arg1 shouldChangeFocusedItem:(id)arg2 ;
-(void)_cellDidBecomeFocused:(id)arg1 ;
-(void)_cellDidBecomeUnfocused:(id)arg1 ;
-(BOOL)_focusedCellContainedInSections:(id)arg1 ;
-(BOOL)_shouldShowMenuForCell:(id)arg1 ;
-(BOOL)_canPerformAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3 ;
-(void)_performAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3 ;
-(id)_currentTouch;
-(id)_currentUpdate;
-(id)indexPathsForSelectedItems;
-(void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
-(void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(id)_visibleSupplementaryViewsOfKind:(id)arg1 ;
-(BOOL)_visible;
-(void)deleteItemsAtIndexPaths:(id)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reloadItemsAtIndexPaths:(id)arg1 ;
-(void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)_setObject:(id)arg1 inDictionary:(id)arg2 forKind:(id)arg3 indexPath:(id)arg4 ;
-(void)_addEntriesFromDictionary:(id)arg1 inDictionary:(id)arg2 andSet:(id)arg3 ;
-(id)_visibleDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_invalidateLayoutIfNecessary;
-(void)_deselectAllAnimated:(BOOL)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 notifyDelegate:(BOOL)arg4 ;
-(void)_unhighlightAllItemsAndHighlightGlobalItem:(long long)arg1 ;
-(void)_deselectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3 ;
-(void)deselectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)_unhighlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3 ;
-(BOOL)_highlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 notifyDelegate:(BOOL)arg4 ;
-(void)_reuseCell:(id)arg1 ;
-(void)_reuseSupplementaryView:(id)arg1 ;
-(void)_setNeedsVisibleCellsUpdate:(BOOL)arg1 withLayoutAttributes:(BOOL)arg2 ;
-(void)_invalidateWithBlock:(/*^block*/id)arg1 ;
-(id)indexPathForSupplementaryView:(id)arg1 ;
-(id)_visibleViews;
-(CGPoint)_contentOffsetForNewFrame:(CGRect)arg1 oldFrame:(CGRect)arg2 newContentSize:(CGSize)arg3 andOldContentSize:(CGSize)arg4 ;
-(void)_checkForPreferredAttributesInView:(id)arg1 originalAttributes:(id)arg2 ;
-(void)_applyLayoutAttributes:(id)arg1 toView:(id)arg2 ;
-(void)_addControlledSubview:(id)arg1 atZIndex:(long long)arg2 ;
-(id)_dequeueReusableViewOfKind:(id)arg1 withIdentifier:(id)arg2 forIndexPath:(id)arg3 viewCategory:(unsigned long long)arg4 ;
-(id)_reorderedItemForView:(id)arg1 ;
-(BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
-(id)_visibleViewForLayoutAttributes:(id)arg1 ;
-(id)_visibleViewDictForElementCategory:(unsigned long long)arg1 elementKind:(id)arg2 ;
-(id)_createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2 applyAttributes:(BOOL)arg3 ;
-(id)_createPreparedSupplementaryViewForElementOfKind:(id)arg1 atIndexPath:(id)arg2 withLayoutAttributes:(id)arg3 applyAttributes:(BOOL)arg4 ;
-(id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_viewIsReorderedCell:(id)arg1 ;
-(id)_doubleSidedAnimationsForView:(id)arg1 withStartingLayoutAttributes:(id)arg2 startingLayout:(id)arg3 endingLayoutAttributes:(id)arg4 endingLayout:(id)arg5 withAnimationSetup:(/*^block*/id)arg6 animationCompletion:(/*^block*/id)arg7 enableCustomAnimations:(BOOL)arg8 customAnimationsType:(unsigned long long)arg9 ;
-(id)_visibleCellForIndexPath:(id)arg1 ;
-(void)_updateVisibleCellsNow:(BOOL)arg1 ;
-(void)_highlightFirstVisibleItemIfAppropriate;
-(void)_setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 isInteractive:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setNavigationCompletion:(/*^block*/id)arg1 ;
-(void)setCollectionViewLayout:(UICollectionViewLayout *)arg1 ;
-(void)_cleanUpAfterInteractiveTransitionDidFinish:(BOOL)arg1 ;
-(void)_updateTransitionWithProgress:(double)arg1 ;
-(void)_updateTrackedLayoutValuesWith:(id)arg1 ;
-(id)_dynamicAnimationsForTrackValues;
-(void)_finishInteractiveTransitionShouldFinish:(BOOL)arg1 finalAnimation:(BOOL)arg2 ;
-(id)_indexPathForView:(id)arg1 ofType:(unsigned long long)arg2 ;
-(id)_visibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(BOOL)arg2 ;
-(id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1 isDecorationView:(BOOL)arg2 ;
-(void)_endItemAnimationsWithInvalidationContext:(id)arg1 ;
-(void)_updateSections:(id)arg1 updateAction:(int)arg2 ;
-(void)_updateRowsAtIndexPaths:(id)arg1 updateAction:(int)arg2 ;
-(void)_endItemAnimationsWithInvalidationContext:(id)arg1 tentativelyForReordering:(BOOL)arg2 ;
-(void)_updateWithItems:(id)arg1 tentativelyForReordering:(BOOL)arg2 ;
-(void)_getOriginalReorderingIndexPaths:(id*)arg1 targetIndexPaths:(id*)arg2 ;
-(id)_visibleSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 isDecorationView:(BOOL)arg3 ;
-(void)_prepareLayoutForUpdates;
-(id)_viewAnimationsForCurrentUpdate;
-(void)_setVisibleView:(id)arg1 forLayoutAttributes:(id)arg2 ;
-(void)_updateReorderingTargetPosition:(CGPoint)arg1 forced:(BOOL)arg2 ;
-(void)_performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 invalidationContext:(id)arg3 ;
-(void)_performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 invalidationContext:(id)arg3 tentativelyForReordering:(BOOL)arg4 ;
-(void)_beginUpdates;
-(void)_endUpdatesWithInvalidationContext:(id)arg1 tentativelyForReordering:(BOOL)arg2 ;
-(void)_setCurrentTouch:(id)arg1 ;
-(id)_selectableIndexPathForItemContainingHitView:(id)arg1 ;
-(void)_unhighlightAllItems;
-(void)_userSelectItemAtIndexPath:(id)arg1 ;
-(void)_selectAllSelectedItems;
-(void)_cancelTouches;
-(long long)highlightedGlobalItem;
-(void)_updateReorderingTargetPosition:(CGPoint)arg1 ;
-(id)_objectInDictionary:(id)arg1 forKind:(id)arg2 indexPath:(id)arg3 ;
-(void)_addEntriesFromDictionary:(id)arg1 inDictionary:(id)arg2 ;
-(id)_keysForObject:(id)arg1 inDictionary:(id)arg2 ;
-(BOOL)_dataSourceImplementsNumberOfSections;
-(id)_collectionViewData;
-(void)_unhighlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_highlightItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
-(BOOL)_itemIndexPathIsReordered:(id)arg1 ;
-(id)_reorderedItems;
-(CGPoint)_reorderingTargetPosition;
-(void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)startInteractiveTransitionToCollectionViewLayout:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_finishInteractiveTransitionWithFinalAnimation:(BOOL)arg1 ;
-(void)_cancelInteractiveTransitionWithFinalAnimation:(BOOL)arg1 ;
-(id)_pivotForTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(id)_visibleDecorationViewsOfKind:(id)arg1 ;
-(id)_indexPathsForVisibleSupplementaryViewsOfKind:(id)arg1 ;
-(id)_indexPathsForVisibleDecorationViewsOfKind:(id)arg1 ;
-(void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2 ;
-(void)registerNib:(id)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3 ;
-(void)_setExternalObjectTable:(id)arg1 forNibLoadingOfSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3 ;
-(void)insertSections:(id)arg1 ;
-(void)deleteSections:(id)arg1 ;
-(void)reloadSections:(id)arg1 ;
-(void)_invalidateLayoutWithContext:(id)arg1 ;
-(void)_cellMenuDismissed;
-(long long)maximumGlobalItemIndex;
-(void)_trackLayoutValue:(double)arg1 forKey:(id)arg2 ;
-(double)_trackedLayoutValueForKey:(id)arg1 ;
-(BOOL)_cellCanBecomeFocused:(id)arg1 ;
-(void)_cellBecameFocused:(id)arg1 ;
-(BOOL)_beginReorderingItemAtIndexPath:(id)arg1 ;
-(void)_endReordering;
-(void)_cancelReordering;
-(/*^block*/id)_navigationCompletion;
@end

