/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionViewCell.h>

@class UIImageView, UILabel, GKGame, GKGameRecord;

@interface GKBaseGameCell : GKCollectionViewCell {

	UIImageView* _iconView;
	UILabel* _nameLabel;

}

@property (nonatomic,retain) UIImageView * iconView;                 //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                    //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) GKGame * game; 
@property (nonatomic,retain) GKGameRecord * gameRecord; 
+(double)textOffsetForIdiom:(long long)arg1 ;
+(double)defaultRowHeight;
-(id)game;
-(void)setGame:(id)arg1 ;
-(void)setRepresentedItem:(id)arg1 ;
-(id)iconView;
-(void)didUpdateModel;
-(id)nameLabel;
-(void)setNameLabel:(id)arg1 ;
-(void)setIconView:(id)arg1 ;
-(id)gameRecord;
-(void)setGameRecord:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
@end

