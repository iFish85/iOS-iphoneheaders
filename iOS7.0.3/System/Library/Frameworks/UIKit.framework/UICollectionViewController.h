/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class UICollectionViewLayout, UICollectionView;

@interface UICollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	UICollectionViewLayout* _layout;
	UICollectionView* _collectionView;
	struct {
		unsigned clearsSelectionOnViewWillAppear : 1;
		unsigned useLayoutToLayoutNavigationTransitions : 1;
	}  _collectionViewControllerFlags;

}

@property (nonatomic,retain) UICollectionView * collectionView; 
@property (assign,nonatomic) BOOL clearsSelectionOnViewWillAppear; 
@property (assign,nonatomic) BOOL useLayoutToLayoutNavigationTransitions; 
@property (nonatomic,readonly) UICollectionViewLayout * collectionViewLayout; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dataSource;
-(id)delegate;
-(void)setView:(id)arg1 ;
-(id)contentScrollView;
-(void)loadView;
-(void)viewWillUnload;
-(void)__viewWillAppear:(BOOL)arg1 ;
-(id)_animatorForOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(BOOL)useLayoutToLayoutNavigationTransitions;
-(id)_uiCollectionView;
-(void)_clearSharedView;
-(void)_setSharedCollectionView:(id)arg1 ;
-(void)_setUseLayoutToLayoutNavigationTransitions:(BOOL)arg1 withCheck:(BOOL)arg2 ;
-(id)collectionViewLayout;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView;
-(BOOL)clearsSelectionOnViewWillAppear;
-(void)setClearsSelectionOnViewWillAppear:(BOOL)arg1 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(id)_wrappingView;
-(id)_newCollectionViewWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setCollectionView:(id)arg1 ;
-(BOOL)shouldCrossFadeNavigationBar;
-(BOOL)shouldCrossFadeBottomBars;
-(void)setUseLayoutToLayoutNavigationTransitions:(BOOL)arg1 ;
@end
