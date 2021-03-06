/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:39 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIModalItemContentView.h>

@class _UIModalItemTextFiledBGView, UITableView, UIView, UIScrollView;

@interface _UIModalItemAlertContentView : _UIModalItemContentView {

	_UIModalItemTextFiledBGView* _textFieldBGView;
	char _alertViewIsSetup;
	UITableView* _otherTableView;
	UIView* _2ButtonsSeparators;
	UIView* _tableViewTopSeparator;
	UIScrollView* _labelsScrollView;
	char _itemWantsVerticalButtons;
	char _itemNeedsTwoTableViews;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)layout;
-(void)_reloadButtons;
-(void)setEnableFirstOtherButton:(char)arg1 ;
-(void)_prepareViewIfNeeded;
@end

