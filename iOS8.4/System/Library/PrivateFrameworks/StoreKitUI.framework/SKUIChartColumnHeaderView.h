/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIControl.h>

@class NSArray;

@interface SKUIChartColumnHeaderView : UIControl {

	NSArray* _buttons;
	long long _selectedTitleIndex;

}

@property (assign,nonatomic) long long selectedTitleIndex;              //@synthesize selectedTitleIndex=_selectedTitleIndex - In the implementation block
@property (nonatomic,copy) NSArray * titles; 
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)setTitles:(NSArray *)arg1 ;
-(NSArray *)titles;
-(void)_buttonAction:(id)arg1 ;
-(void)_reloadSelectedButton;
-(void)setSelectedTitleIndex:(long long)arg1 ;
-(long long)selectedTitleIndex;
@end

