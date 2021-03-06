/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:48 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBFolderView.h>
#import <SpringBoard/SBIconIndexNodeObserver.h>

@class UIButton, SBNewsstandBackgroundView;

@interface SBNewsstandFolderView : SBFolderView <SBIconIndexNodeObserver> {

	UIButton* _storeButton;
	UIButton* _emptyImageButton;
	SBNewsstandBackgroundView* _backgroundView;

}
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 ;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)_storeButtonTapped:(id)arg1 ;
-(void)_newsstandStoreAvailabilityDidChangeNotification:(id)arg1 ;
-(BOOL)_showsTitle;
-(float)_titleFontSize;
-(void)_updateEmptyState;
-(void)dealloc;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)setFolder:(id)arg1 ;
-(void)_layoutSubviews;
@end

