/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class SKUIBorderView, UIColor;

@interface SKUITableViewCell : UITableViewCell {

	SKUIBorderView* _bottomBorderView;
	SKUIBorderView* _topBorderView;
	float _titlePaddingLeft;
	UIEdgeInsets _textLabelInsets;
	float _borderPaddingLeft;

}

@property (nonatomic,copy) UIColor * bottomBorderColor; 
@property (nonatomic,copy) UIColor * topBorderColor; 
@property (assign,nonatomic) float borderPaddingLeft;                   //@synthesize borderPaddingLeft=_borderPaddingLeft - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textLabelInsets;              //@synthesize textLabelInsets=_textLabelInsets - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(void)setTopBorderColor:(UIColor *)arg1 ;
-(void)setBorderPaddingLeft:(float)arg1 ;
-(void)setTextLabelInsets:(UIEdgeInsets)arg1 ;
-(void)setBottomBorderColor:(UIColor *)arg1 ;
-(void)_reloadBorderVisibility;
-(UIColor *)bottomBorderColor;
-(UIColor *)topBorderColor;
-(float)borderPaddingLeft;
-(UIEdgeInsets)textLabelInsets;
@end
