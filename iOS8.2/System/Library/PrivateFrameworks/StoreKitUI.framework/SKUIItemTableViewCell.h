/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUITableViewCell.h>
#import <StoreKitUI/SKUICellLayoutParentView.h>

@class SKUIItemCellLayout, NSString;

@interface SKUIItemTableViewCell : SKUITableViewCell <SKUICellLayoutParentView> {

	char _layoutNeedsLayout;

}

@property (nonatomic,readonly) SKUIItemCellLayout * layout; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(SKUIItemCellLayout *)layout;
-(void)setCellLayoutNeedsLayout;
-(void)configureForItem:(id)arg1 clientContext:(id)arg2 rowIndex:(int)arg3 ;
-(void)configureForItem:(id)arg1 rowIndex:(int)arg2 ;
@end

