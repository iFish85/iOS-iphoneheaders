/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:48 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCopying.h>

@class UITableView, NSIndexPath;

@interface UITableViewRowData : NSObject <NSCopying> {

	UITableView* _tableView;
	int _numSections;
	int _sectionRowDataCapacity;
	id* _sectionRowData;
	float _minimumRowHeight;
	float _tableViewWidth;
	char _tableHeaderHeightValid;
	float _tableHeaderHeight;
	char _tableFooterHeightValid;
	float _tableFooterHeight;
	float _heightForTableHeaderViewHiding;
	float _tableTopPadding;
	float _tableBottomPadding;
	char _tableSidePaddingValid;
	float _tableSidePadding;
	NSIndexPath* _reorderedIndexPath;
	NSIndexPath* _gapIndexPath;
	float _reorderedRowHeight;
	char _estimatesRowHeights;

}

@property (nonatomic,readonly) NSIndexPath * reorderGapIndexPath;                     //@synthesize gapIndexPath=_gapIndexPath - In the implementation block
@property (nonatomic,readonly) float reorderedRowHeight;                              //@synthesize reorderedRowHeight=_reorderedRowHeight - In the implementation block
@property (nonatomic,readonly) float heightForAutohidingTableHeaderView; 
@property (nonatomic,readonly) float heightForTableHeaderViewHiding; 
@property (assign,nonatomic) float minimumRowHeight;                                  //@synthesize minimumRowHeight=_minimumRowHeight - In the implementation block
@property (assign,nonatomic) float tableTopPadding;                                   //@synthesize tableTopPadding=_tableTopPadding - In the implementation block
@property (assign,nonatomic) float tableBottomPadding;                                //@synthesize tableBottomPadding=_tableBottomPadding - In the implementation block
@property (assign,nonatomic) float tableSidePadding; 
@property (assign,nonatomic) char estimatesRowHeights;                                //@synthesize estimatesRowHeights=_estimatesRowHeights - In the implementation block
-(void)dealloc;
-(int)numberOfRowsInSection:(int)arg1 ;
-(int)numberOfSections;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)numberOfRows;
-(id)initWithTableView:(id)arg1 ;
-(id)indexPathForRowAtGlobalRow:(int)arg1 ;
-(void)invalidateAllSections;
-(void)setEstimatesRowHeights:(char)arg1 ;
-(CGRect)rectForTableHeaderView;
-(CGRect)rectForTableFooterView;
-(void)setHeightForTableHeaderViewHiding:(float)arg1 ;
-(float)heightForAutohidingTableHeaderView;
-(float)heightForTableHeaderViewHiding;
-(void)tableHeaderHeightDidChangeToHeight:(float)arg1 ;
-(float)heightForTable;
-(void)ensureAllSectionsAreValid;
-(NSRange)sectionsInRect:(CGRect)arg1 ;
-(CGRect)rectForHeaderInSection:(int)arg1 heightCanBeGuessed:(char)arg2 ;
-(CGRect)rectForFooterInSection:(int)arg1 heightCanBeGuessed:(char)arg2 ;
-(CGRect)floatingRectForHeaderInSection:(int)arg1 visibleRect:(CGRect)arg2 ;
-(float)maxHeaderTitleWidthForSection:(int)arg1 ;
-(CGRect)floatingRectForFooterInSection:(int)arg1 visibleRect:(CGRect)arg2 ;
-(float)maxFooterTitleWidthForSection:(int)arg1 ;
-(CGRect)rectForGlobalRow:(int)arg1 heightCanBeGuessed:(char)arg2 ;
-(NSRange)globalRowsInRect:(CGRect)arg1 canGuess:(char)arg2 ;
-(int)globalRowForRowAtIndexPath:(id)arg1 ;
-(int)headerAlignmentForSection:(int)arg1 ;
-(int)footerAlignmentForSection:(int)arg1 ;
-(float)minimumRowHeight;
-(CGRect)rectForTable;
-(void)tableViewWidthDidChangeToWidth:(float)arg1 ;
-(void)setReorderedIndexPath:(id)arg1 ;
-(CGRect)rectForRow:(int)arg1 inSection:(int)arg2 heightCanBeGuessed:(char)arg3 ;
-(CGRect)rectForSection:(int)arg1 ;
-(id)indexPathsForRowsInRect:(CGRect)arg1 ;
-(float)heightForHeaderInSection:(int)arg1 canGuess:(char)arg2 ;
-(float)heightForFooterInSection:(int)arg1 canGuess:(char)arg2 ;
-(float)heightForTableHeaderView;
-(float)tableSidePadding;
-(void)invalidateAllSectionOffsetsAndUpdatePadding;
-(void)tableFooterHeightDidChangeToHeight:(float)arg1 ;
-(int)sectionLocationForRow:(int)arg1 inSection:(int)arg2 ;
-(void)setHeight:(float)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)addReorderGapFromIndexPath:(id)arg1 ;
-(void)removeReorderGapFromIndexPath:(id)arg1 ;
-(void)moveRowAtIndexPathFrom:(id)arg1 toIndexPath:(id)arg2 ;
-(id)targetIndexPathForPoint:(CGPoint)arg1 ;
-(char)shouldStripHeaderTopPaddingForSection:(int)arg1 ;
-(char)hasHeaderForSection:(int)arg1 ;
-(int)sectionLocationForReorderedRow:(int)arg1 inSection:(int)arg2 ;
-(float)heightForRow:(int)arg1 inSection:(int)arg2 canGuess:(char)arg3 ;
-(void)adjustSectionOffsetsBeginningAtIndex:(int)arg1 count:(int)arg2 delta:(float)arg3 rowDelta:(int)arg4 ;
-(void)setTableTopPadding:(float)arg1 ;
-(void)setTableBottomPadding:(float)arg1 ;
-(char)estimatesRowHeights;
-(void)setMinimumRowHeight:(float)arg1 ;
-(id)reorderedIndexPath;
-(NSIndexPath *)reorderGapIndexPath;
-(float)reorderedRowHeight;
-(int)sectionForSectionRowData:(id)arg1 ;
-(float)offsetForSection:(id)arg1 ;
-(void)_updateSectionRowDataArrayForNumSections:(int)arg1 ;
-(void)_ensureSectionOffsetIsValidForSection:(int)arg1 ;
-(void)_updateNumSections;
-(void)_updateTopAndBottomPadding;
-(float)heightForRow:(int)arg1 inSection:(int)arg2 canGuess:(char)arg3 adjustForReorderedRow:(char)arg4 ;
-(float)heightForTableFooterView;
-(char)hasFooterForSection:(int)arg1 ;
-(int)_sectionRowForGlobalRow:(int)arg1 inSection:(int*)arg2 ;
-(int)sectionForPoint:(CGPoint)arg1 ;
-(int)_sectionForPoint:(CGPoint)arg1 beginningWithSection:(int)arg2 numberOfSections:(int)arg3 ;
-(void)invalidateSection:(int)arg1 ;
-(int)numberOfRowsBeforeSection:(int)arg1 ;
-(float)heightForSection:(int)arg1 ;
-(void)setTableSidePadding:(float)arg1 ;
-(float)tableTopPadding;
-(float)tableBottomPadding;
@end

