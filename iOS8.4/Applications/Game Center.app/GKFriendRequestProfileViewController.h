/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/GKPlayerProfileCollectionViewController.h>

@class GKPlayer;

@interface GKFriendRequestProfileViewController : GKPlayerProfileCollectionViewController {

	char _processed;
	char _didFloatInBubbles;

}

@property (nonatomic,retain) GKPlayer * player; 
@property (assign,nonatomic) char processed;                      //@synthesize processed=_processed - In the implementation block
@property (assign,nonatomic) char didFloatInBubbles;              //@synthesize didFloatInBubbles=_didFloatInBubbles - In the implementation block
+(Class)headerViewClass;
-(void)setProcessed:(char)arg1 ;
-(void)acceptedFriendRequest:(char)arg1 withError:(id)arg2 ;
-(void)acceptFriendRequest;
-(void)ignoreFriendRequest;
-(char)processed;
-(id)init;
-(void)loadView;
-(void)viewDidAppear:(char)arg1 ;
-(void)configureDataSource;
-(void)willAnimateAppearingWithBubbleFlow;
-(void)floatInBubbles;
-(void)setDidFloatInBubbles:(char)arg1 ;
-(void)animateOutBubbleWithFocus:(int)arg1 completion:(/*^block*/id)arg2 ;
-(char)didFloatInBubbles;
@end
