/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:47:11 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>

@class MPUSlantedTextPlaceholderArtworkView, UILabel, UIView, MPUItemOfferButton, UIButton, UIImage, NSString;

@interface MusicAlbumsDetailTableHeaderView : UITableViewHeaderFooterView {

	MPUSlantedTextPlaceholderArtworkView* _artworkView;
	UILabel* _copyrightLabel;
	UILabel* _detailTextLabel;
	UIView* _hairlineView;
	MPUItemOfferButton* _itemOfferButton;
	UIButton* _shuffleButton;
	UILabel* _titleLabel;
	UIView* _topCellSeparatorView;
	UILabel* _yearLabel;
	float _cloudRightInset;
	/*^block*/id _downloadActionBlock;
	/*^block*/id _shuffleActionBlock;
	int _songCount;
	double _totalDuration;

}

@property (nonatomic,retain) UIImage * artworkImage; 
@property (assign,nonatomic) float cloudRightInset;                                //@synthesize cloudRightInset=_cloudRightInset - In the implementation block
@property (nonatomic,copy) NSString * copyrightText; 
@property (assign,getter=isDownloadable,nonatomic) char downloadable; 
@property (nonatomic,copy) id downloadActionBlock;                                 //@synthesize downloadActionBlock=_downloadActionBlock - In the implementation block
@property (nonatomic,copy) NSString * placeholderSubtitleText; 
@property (nonatomic,copy) NSString * placeholderTitleText; 
@property (assign,getter=isShufflable,nonatomic) char shufflable; 
@property (nonatomic,copy) id shuffleActionBlock;                                  //@synthesize shuffleActionBlock=_shuffleActionBlock - In the implementation block
@property (nonatomic,readonly) int songCount;                                      //@synthesize songCount=_songCount - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) double totalDuration;                               //@synthesize totalDuration=_totalDuration - In the implementation block
@property (nonatomic,copy) NSString * yearText; 
+(float)defaultHeight;
+(id)newAlbumsDetailTableHeaderViewForSizing;
+(CGSize)artworkSize;
-(NSString *)copyrightText;
-(char)isDownloadable;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setTableViewStyle:(int)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(double)totalDuration;
-(void)setCloudRightInset:(float)arg1 ;
-(void)setShufflable:(char)arg1 ;
-(void)setSongCount:(int)arg1 totalDuration:(double)arg2 ;
-(void)setCopyrightText:(NSString *)arg1 ;
-(void)setYearText:(NSString *)arg1 ;
-(void)setShuffleActionBlock:(id)arg1 ;
-(void)setDownloadActionBlock:(id)arg1 ;
-(void)setDownloadable:(char)arg1 ;
-(void)_shuffleButtonAction:(id)arg1 ;
-(char)isShufflable;
-(NSString *)yearText;
-(float)backgroundTransitionProgress;
-(NSString *)placeholderSubtitleText;
-(NSString *)placeholderTitleText;
-(void)setBackgroundTransitionProgress:(float)arg1 ;
-(void)setPlaceholderSubtitleText:(NSString *)arg1 ;
-(void)setPlaceholderTitleText:(NSString *)arg1 ;
-(float)cloudRightInset;
-(id)downloadActionBlock;
-(id)shuffleActionBlock;
-(int)songCount;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(UIImage *)artworkImage;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_itemOfferButtonAction:(id)arg1 ;
@end

