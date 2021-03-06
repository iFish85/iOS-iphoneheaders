/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterPrivateUI/GKSplittingDataSource.h>

@class GKGame;

@interface GKTurnBasedMatchesDataSource : GKSplittingDataSource {

	GKGame* _game;
	SEL _detailPressedAction;

}

@property (nonatomic,retain) GKGame * game;                        //@synthesize game=_game - In the implementation block
@property (assign,nonatomic) SEL detailPressedAction;              //@synthesize detailPressedAction=_detailPressedAction - In the implementation block
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(unsigned)numberOfMatches;
-(void)configureDataSource;
-(void)collectionViewWillBecomeActive:(id)arg1 ;
-(void)configureCollectionView:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setGame:(GKGame *)arg1 ;
-(GKGame *)game;
-(void)setDetailPressedAction:(SEL)arg1 ;
-(SEL)detailPressedAction;
@end

