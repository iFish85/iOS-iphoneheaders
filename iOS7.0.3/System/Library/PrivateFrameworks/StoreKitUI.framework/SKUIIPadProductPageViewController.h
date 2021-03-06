/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <StoreKitUI/SKUIMetricsViewController.h>
#import <StoreKitUI/SKUINetworkErrorDelegate.h>
#import <StoreKitUI/SKUIProductPageHeaderViewDelegate.h>
#import <StoreKitUI/SKUIProductPageChildViewControllerDelegate.h>

@protocol SKUIIPadProductPageDelegate;
@class ACAccountStore, SKUIClientContext, SKUIProductPageDetailsViewController, SKUIFacebookLikeStatus, SKUIProductPageHeaderViewController, SKUIItem, SKUIIncompatibleAppViewController, SSMetricsPageEvent, SKUILoadProductPageOperation, SKUIMetricsController, SKUINetworkErrorViewController, NSOperationQueue, UIView, SKUIProductPagePlaceholderViewController, SKUIProductPage, SKUISwooshArrayViewController, SKUIProductPageReviewsViewController, NSURLRequest, NSURL;

@interface SKUIIPadProductPageViewController : UIViewController <SKUIMetricsViewController, SKUINetworkErrorDelegate, SKUIProductPageHeaderViewDelegate, SKUIProductPageChildViewControllerDelegate> {

	ACAccountStore* _accountStore;
	SKUIClientContext* _clientContext;
	<SKUIIPadProductPageDelegate>* _delegate;
	SKUIProductPageDetailsViewController* _detailsViewController;
	BOOL _didSendCannotOpen;
	SKUIFacebookLikeStatus* _facebookLikeStatus;
	SKUIProductPageHeaderViewController* _headerViewController;
	SKUIItem* _item;
	SKUIIncompatibleAppViewController* _incompatibleViewController;
	SSMetricsPageEvent* _lastPageEvent;
	SKUILoadProductPageOperation* _loadOperation;
	long long _lookupItemIdentifier;
	SKUIMetricsController* _metricsController;
	SKUINetworkErrorViewController* _networkErrorViewController;
	NSOperationQueue* _operationQueue;
	UIView* _overlayView;
	SKUIProductPagePlaceholderViewController* _placeholderViewController;
	SKUIProductPage* _productPage;
	SKUISwooshArrayViewController* _relatedViewController;
	SKUIProductPageReviewsViewController* _reviewsViewController;
	int _selectedSectionIndex;
	NSURLRequest* _urlRequest;

}

@property (nonatomic,readonly) SKUIItem * item;                                            //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) SKUIProductPage * productPage;                              //@synthesize productPage=_productPage - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,retain) SKUIClientContext * clientContext;                            //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) <SKUIIPadProductPageDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithURLRequest:(id)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)reloadData;
-(id)delegate;
-(void)viewDidLayoutSubviews;
-(id)item;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)URL;
-(id)initWithURL:(id)arg1 ;
-(void)configureMetricsWithPageEvent:(id)arg1 ;
-(id)_placeholderViewController;
-(id)clientContext;
-(id)productPage;
-(void)_metricsEnterEventNotification:(id)arg1 ;
-(void)_setMetricsController:(id)arg1 ;
-(id)activeMetricsController;
-(void)productPageChildViewControllerDidLoadScrollView:(id)arg1 ;
-(void)productPageChildOpenItem:(id)arg1 ;
-(void)productPageChildOpenURL:(id)arg1 viewControllerBlock:(/*^block*/ id)arg2 ;
-(void)productPageChildViewControllerDidScroll:(id)arg1 ;
-(void)productPageChildViewControllerDidLoad:(id)arg1 ;
-(void)productPageHeaderView:(id)arg1 didSelectURL:(id)arg2 ;
-(id)metricsControllerForProductPageHeader:(id)arg1 ;
-(void)productPageHeaderView:(id)arg1 didSelectSectionIndex:(int)arg2 ;
-(CGPoint)topContentOffset;
-(id)_initSKUIIPadProductPageViewController;
-(void)_setProductPage:(id)arg1 error:(id)arg2 ;
-(void)_selectSectionIndex:(int)arg1 ;
-(id)_reviewsViewController;
-(void)_reloadFacebookLikeStatus;
-(void)_sendCannotOpen;
-(void)_reloadHeaderViewController;
-(void)_setFacebookLikeStatus:(id)arg1 ;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(id)_viewControllerForSectionIndex:(int)arg1 ;
-(void)_showViewController:(id)arg1 ;
-(void)_showError:(id)arg1 ;
-(BOOL)_isIncompatibleItem;
-(void)_showIncompatibleView;
-(id)_detailsViewController;
-(id)_relatedViewController;
-(void)networkErrorViewControllerInvalidated:(id)arg1 ;
-(void).cxx_destruct;
-(id)initWithItemIdentifier:(long long)arg1 ;
-(void)setClientContext:(id)arg1 ;
-(id)initWithProductPage:(id)arg1 ;
@end

