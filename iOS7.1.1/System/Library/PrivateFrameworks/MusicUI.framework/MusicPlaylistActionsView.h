/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, NSMutableArray, UIView, NSString;

@interface MusicPlaylistActionsView : UIView {

	_UIBackdropView* _backdropView;
	NSMutableArray* _buttons;
	UIView* _hairlineView;
	long long _actionsStyle;

}

@property (assign,nonatomic) long long actionsStyle;                      //@synthesize actionsStyle=_actionsStyle - In the implementation block
@property (nonatomic,copy) NSString * backdropViewGroupName; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)backdropViewGroupName;
-(void)setBackdropViewGroupName:(id)arg1 ;
-(void).cxx_destruct;
-(void)setActionsStyle:(long long)arg1 ;
-(void)setCanDeletePlaylist:(bool)arg1 ;
-(void)_updateButtonsForCurrentStyle;
-(void)_addButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(long long)actionsStyle;
@end

