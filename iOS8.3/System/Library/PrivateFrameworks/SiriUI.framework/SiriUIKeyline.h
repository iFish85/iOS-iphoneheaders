/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:32:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIColor;

@interface SiriUIKeyline : UIView {

	UIView* _keyLineView;
	char _veritical;
	int _keylineType;
	float _customLeftPadding;
	float _customRightPadding;
	UIColor* _customBackgroundColor;

}

@property (assign,nonatomic) int keylineType;                                                      //@synthesize keylineType=_keylineType - In the implementation block
@property (assign,nonatomic) float customLeftPadding;                                              //@synthesize customLeftPadding=_customLeftPadding - In the implementation block
@property (assign,nonatomic) float customRightPadding;                                             //@synthesize customRightPadding=_customRightPadding - In the implementation block
@property (nonatomic,retain) UIColor * customBackgroundColor;                                      //@synthesize customBackgroundColor=_customBackgroundColor - In the implementation block
@property (assign,setter=_setVertical:,getter=_isVeritical,nonatomic) char veritical;              //@synthesize veritical=_veritical - In the implementation block
+(id)keylineWithKeylineType:(int)arg1 ;
+(id)keyline;
+(id)verticalKeyline;
+(id)keylineWithDefaultInsets;
+(id)keylineForSelectableRow;
+(id)starkKeyline;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCustomBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)customBackgroundColor;
-(void)setKeylineType:(int)arg1 ;
-(int)keylineType;
-(id)initWithKeylineType:(int)arg1 ;
-(id)_keylineColorForType:(int)arg1 ;
-(float)_keylineWidthForType:(int)arg1 ;
-(float)customLeftPadding;
-(float)customRightPadding;
-(void)setCustomLeftPadding:(float)arg1 ;
-(void)setCustomRightPadding:(float)arg1 ;
-(char)_isVeritical;
-(void)_setVertical:(char)arg1 ;
@end

