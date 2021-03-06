/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <StoreKitUI/SKUIItemListTableDelegate.h>

@protocol SKUIChartsViewControllerDelegate;
@class SKUIResourceLoader, NSArray, SKUIIPadChartsView, SKUIClientContext, NSOperationQueue;

@interface SKUIIPadChartsViewController : UIViewController <SKUIItemListTableDelegate> {

	SKUIResourceLoader* _artworkLoader;
	NSArray* _charts;
	SKUIIPadChartsView* _chartsView;
	NSArray* _chartViewControllers;
	SKUIClientContext* _clientContext;
	UIEdgeInsets _contentInset;
	<SKUIChartsViewControllerDelegate>* _delegate;
	BOOL _delegateWantsWillDisplay;
	NSOperationQueue* _operationQueue;
	int _selectedChartIndex;
	int _selectedItemIndex;

}

@property (nonatomic,retain) SKUIResourceLoader * artworkLoader;                                //@synthesize artworkLoader=_artworkLoader - In the implementation block
@property (nonatomic,copy) NSArray * charts;                                                    //@synthesize charts=_charts - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                 //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                         //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic,__weak) <SKUIChartsViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)_setSuspended:(BOOL)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)clientContext;
-(id)charts;
-(id)artworkLoader;
-(void)loadNextPageOfArtworkWithReason:(int)arg1 ;
-(void)setArtworkLoader:(id)arg1 ;
-(void)itemList:(id)arg1 willDisplayCellForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(id)itemList:(id)arg1 didConfirmItemOfferForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemList:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)enumerateVisibleItemsUsingBlock:(/*^block*/ id)arg1 ;
-(id)popImageViewForItemIndex:(int)arg1 chartIndex:(int)arg2 ;
-(void)unhideAllImages;
-(void)setCharts:(id)arg1 ;
-(CGRect)frameForItemIndex:(int)arg1 chartIndex:(int)arg2 ;
-(void)_reloadChartsView;
-(int)_visibleColumnCountForOrientation:(int)arg1 ;
-(id)_itemListWithChart:(id)arg1 ;
-(id)_artworkContextForChart:(id)arg1 ;
-(void).cxx_destruct;
-(void)setClientContext:(id)arg1 ;
@end

