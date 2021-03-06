/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIColor, SUTableCellContentView, SUItemOfferButton, UIBezierPath, SUCellConfiguration;

@interface SUTableCell : UITableViewCell {

	UIColor* _bottomBorderColor;
	SUTableCellContentView* _configurationView;
	unsigned _hideHighlight : 1;
	SUItemOfferButton* _itemOfferButton;
	SCD_Struct_SU3 _position;
	UIColor* _topBorderColor;
	int _editState;

}

@property (nonatomic,retain) UIColor * bottomBorderColor;                               //@synthesize bottomBorderColor=_bottomBorderColor - In the implementation block
@property (assign,nonatomic) int clipCorners; 
@property (nonatomic,readonly) UIBezierPath * clippingPath; 
@property (nonatomic,retain) SUCellConfiguration * configuration; 
@property (assign,nonatomic) char drawAsDisabled; 
@property (assign,nonatomic) char highlightsOnlyContentView; 
@property (nonatomic,retain,readonly) SUItemOfferButton * itemOfferButton; 
@property (assign,nonatomic) SCD_Struct_SU3 position;                                   //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) char showHighlight; 
@property (nonatomic,retain) UIColor * topBorderColor;                                  //@synthesize topBorderColor=_topBorderColor - In the implementation block
@property (assign,nonatomic) char usesSubviews; 
@property (assign,nonatomic) int editState;                                             //@synthesize editState=_editState - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setPosition:(SCD_Struct_SU3)arg1 ;
-(char)_canDrawContent;
-(SCD_Struct_SU3)position;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setShowingDeleteConfirmation:(char)arg1 ;
-(void)setConfiguration:(SUCellConfiguration *)arg1 ;
-(int)clipCorners;
-(void)setClipCorners:(int)arg1 ;
-(SUCellConfiguration *)configuration;
-(void)setTopBorderColor:(UIColor *)arg1 ;
-(void)setBottomBorderColor:(UIColor *)arg1 ;
-(SUItemOfferButton *)itemOfferButton;
-(UIColor *)bottomBorderColor;
-(UIColor *)topBorderColor;
-(char)highlightsOnlyContentView;
-(char)drawAsDisabled;
-(void)setDrawAsDisabled:(char)arg1 ;
-(void)setHighlightsOnlyContentView:(char)arg1 ;
-(char)usesSubviews;
-(id)copyPurchaseAnimationView;
-(void)setEditState:(int)arg1 ;
-(UIBezierPath *)clippingPath;
-(void)setShowHighlight:(char)arg1 ;
-(void)setUsesSubviews:(char)arg1 ;
-(char)showHighlight;
-(int)editState;
@end

