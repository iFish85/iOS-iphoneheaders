/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:04:37 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Microblog/Microblog-Structs.h>
#import <Microblog/ACTwitterSnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class NSMutableArray, SAMicroblogSearchResultsSnippet, NSString;

@interface ACTwitterSearchResultViewController : ACTwitterSnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	NSMutableArray* _tweetViews;

}

@property (nonatomic,retain) SAMicroblogSearchResultsSnippet * snippet; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)_seeMoreContentIsAvailable;
-(id)_seeMorePunchOut;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(char)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id)initWithAceObject:(id)arg1 ;
-(void)configureReusableHeaderView:(id)arg1 ;
-(Class)headerViewClass;
@end

