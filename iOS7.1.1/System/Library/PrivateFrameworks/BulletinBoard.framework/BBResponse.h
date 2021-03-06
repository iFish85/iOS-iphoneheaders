/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class BBAssertion, NSString, NSArray;

@interface BBResponse : NSObject <NSCoding> {

	BBAssertion* _lifeAssertion;
	/*^block*/ id _sendBlock;
	NSString* _bulletinID;
	bool _sent;
	NSString* _replyText;
	NSArray* _lifeAssertions;
	long long _actionType;
	NSString* _buttonID;

}

@property (nonatomic,copy) NSString * replyText;                  //@synthesize replyText=_replyText - In the implementation block
@property (nonatomic,copy) NSArray * lifeAssertions;              //@synthesize lifeAssertions=_lifeAssertions - In the implementation block
@property (nonatomic,copy) id sendBlock;                          //@synthesize sendBlock=_sendBlock - In the implementation block
@property (nonatomic,retain) NSString * bulletinID;               //@synthesize bulletinID=_bulletinID - In the implementation block
@property (assign,nonatomic) long long actionType;                //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * buttonID;                   //@synthesize buttonID=_buttonID - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)send;
-(/*^block*/ id)sendBlock;
-(void)setBulletinID:(id)arg1 ;
-(void)setReplyText:(id)arg1 ;
-(void)setButtonID:(id)arg1 ;
-(id)bulletinID;
-(id)replyText;
-(id)buttonID;
-(id)lifeAssertions;
-(void)setLifeAssertions:(id)arg1 ;
-(void)setSendBlock:(/*^block*/ id)arg1 ;
-(void)setActionType:(long long)arg1 ;
-(long long)actionType;
@end

