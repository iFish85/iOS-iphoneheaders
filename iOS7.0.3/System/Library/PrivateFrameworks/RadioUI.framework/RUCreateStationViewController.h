/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <RadioUI/RUGenreListViewControllerDelegate.h>
#import <RadioUI/RUSearchViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol RUCreateStationViewControllerDelegate;
@class SKUICircleProgressIndicator, RUGenreListViewController, UILabel, RUMetricsController, NSMutableArray, UISearchDisplayController, RUSearchViewController;

@interface RUCreateStationViewController : UIViewController <RUGenreListViewControllerDelegate, RUSearchViewControllerDelegate, UIScrollViewDelegate> {

	SKUICircleProgressIndicator* _activityIndicator;
	BOOL _didLoadGenres;
	RUGenreListViewController* _genreListViewController;
	UILabel* _loadingLabel;
	RUMetricsController* _metricsController;
	NSMutableArray* _queuedMetricsOperations;
	UISearchDisplayController* _searchDisplayController;
	RUSearchViewController* _searchResultsViewController;
	BOOL _shouldScrollSearchBar;
	<RUCreateStationViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <RUCreateStationViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)contentScrollView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)removeAddingIndicator;
-(void)_statusBarHeightChangedNotification:(id)arg1 ;
-(id)_searchDisplayController;
-(void)_radioAuthenticatedAccountIdentifierDidChangeNotification:(id)arg1 ;
-(id)metricsPageDescriptionForSearchViewController:(id)arg1 ;
-(id)metricsPageTypeForSearchViewController:(id)arg1 ;
-(void)searchViewController:(id)arg1 didSelectStation:(id)arg2 ;
-(void)searchViewControllerDidBeginSearching:(id)arg1 ;
-(void)searchViewControllerWillBeginSearching:(id)arg1 ;
-(void)searchViewControllerDidEndSearching:(id)arg1 ;
-(void)searchViewControllerWillEndSearching:(id)arg1 ;
-(void)_addMetricsControllerOperationBlock:(/*^block*/ id)arg1 ;
-(void)genreListViewController:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(void)genreListViewController:(id)arg1 didSelectStation:(id)arg2 ;
-(void)genreListViewControllerGenresDidBecomeAvailable:(id)arg1 ;
-(void)_doneAction:(id)arg1 withEvent:(id)arg2 ;
-(void)_updateViewForDataSourceInvalidation;
-(void)_updateSearchBarFrameForced:(BOOL)arg1 ;
-(void)_addStationWithDictionary:(id)arg1 ;
-(CGRect)_searchBarSearchingFrame;
-(void).cxx_destruct;
@end

