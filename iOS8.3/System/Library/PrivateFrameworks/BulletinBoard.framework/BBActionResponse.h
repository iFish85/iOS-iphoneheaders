/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:49:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface BBActionResponse : NSObject <NSSecureCoding> {

	int _actionType;
	NSString* _actionID;
	NSString* _bulletinRecordID;
	NSString* _bulletinPublisherID;
	NSDictionary* _bulletinContext;
	NSString* _bulletinButtonID;
	NSDictionary* _context;

}

@property (assign,nonatomic) int actionType;                            //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * actionID;                         //@synthesize actionID=_actionID - In the implementation block
@property (nonatomic,copy) NSString * bulletinRecordID;                 //@synthesize bulletinRecordID=_bulletinRecordID - In the implementation block
@property (nonatomic,copy) NSString * bulletinPublisherID;              //@synthesize bulletinPublisherID=_bulletinPublisherID - In the implementation block
@property (nonatomic,copy) NSDictionary * bulletinContext;              //@synthesize bulletinContext=_bulletinContext - In the implementation block
@property (nonatomic,copy) NSString * bulletinButtonID;                 //@synthesize bulletinButtonID=_bulletinButtonID - In the implementation block
@property (nonatomic,copy) NSDictionary * context;                      //@synthesize context=_context - In the implementation block
+(char)supportsSecureCoding;
+(id)actionResponseForResponse:(id)arg1 bulletinRequest:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)setActionID:(NSString *)arg1 ;
-(NSString *)actionID;
-(void)setBulletinButtonID:(NSString *)arg1 ;
-(void)setBulletinRecordID:(NSString *)arg1 ;
-(void)setBulletinPublisherID:(NSString *)arg1 ;
-(NSString *)bulletinButtonID;
-(NSString *)bulletinRecordID;
-(NSString *)bulletinPublisherID;
-(NSDictionary *)bulletinContext;
-(void)setBulletinContext:(NSDictionary *)arg1 ;
-(void)setActionType:(int)arg1 ;
-(int)actionType;
@end

