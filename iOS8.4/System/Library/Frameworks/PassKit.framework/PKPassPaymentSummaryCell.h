/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol PKPassPaymentSummaryCellDelegate;
@class UILabel, UIButton, NSString, UIImage;

@interface PKPassPaymentSummaryCell : UITableViewCell {

	UILabel* _amountLabel;
	UIButton* _detailsButton;
	id<PKPassPaymentSummaryCellDelegate> _delegate;

}

@property (nonatomic,retain) NSString * primaryText; 
@property (assign,nonatomic) long long primaryTextNumberOfLines; 
@property (nonatomic,retain) NSString * detailText; 
@property (nonatomic,retain) NSString * amountText; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) BOOL showDetailsButton; 
@property (assign,nonatomic) id<PKPassPaymentSummaryCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_primaryTextFont;
+(id)_amountTextFont;
+(id)_detailTextFont;
+(CGSize)_sizeForLabelWithText:(id)arg1 font:(id)arg2 maximumNumberOfLines:(long long)arg3 width:(double)arg4 ;
+(double)heightWithPrimaryText:(id)arg1 primaryTextNumberOfLines:(long long)arg2 detailText:(id)arg3 amountText:(id)arg4 image:(id)arg5 showDetailsButton:(BOOL)arg6 width:(double)arg7 ;
-(NSString *)detailText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)setPrimaryTextNumberOfLines:(long long)arg1 ;
-(void)setAmountText:(NSString *)arg1 ;
-(void)setShowDetailsButton:(BOOL)arg1 ;
-(long long)primaryTextNumberOfLines;
-(NSString *)primaryText;
-(NSString *)amountText;
-(BOOL)showDetailsButton;
-(void)dealloc;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<PKPassPaymentSummaryCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<PKPassPaymentSummaryCellDelegate>)delegate;
-(UIImage *)image;
-(void)prepareForReuse;
-(CGRect)_separatorFrame;
-(void)_detailsButtonPressed:(id)arg1 ;
-(void)setDetailText:(NSString *)arg1 ;
@end

