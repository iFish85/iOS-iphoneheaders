/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@class MCDButton;

@interface MCDPlayModeControlView : UIView {

	BOOL _creatingGenius;
	MCDButton* _repeatButton;
	MCDButton* _geniusButton;
	MCDButton* _shuffleButton;

}

@property (nonatomic,readonly) MCDButton * repeatButton;               //@synthesize repeatButton=_repeatButton - In the implementation block
@property (nonatomic,readonly) MCDButton * geniusButton;               //@synthesize geniusButton=_geniusButton - In the implementation block
@property (nonatomic,readonly) MCDButton * shuffleButton;              //@synthesize shuffleButton=_shuffleButton - In the implementation block
@property (assign,nonatomic) BOOL creatingGenius;                      //@synthesize creatingGenius=_creatingGenius - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MCDButton *)repeatButton;
-(MCDButton *)geniusButton;
-(MCDButton *)shuffleButton;
-(BOOL)creatingGenius;
-(void)setCreatingGenius:(BOOL)arg1 ;
@end

