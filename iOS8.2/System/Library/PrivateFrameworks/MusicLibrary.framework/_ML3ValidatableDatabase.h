/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface _ML3ValidatableDatabase : NSObject {

	unsigned long _queueID;
	NSString* _databasePath;
	unsigned _validationState;
	NSObject*<OS_dispatch_queue> _validationSerialQueue;

}

@property (nonatomic,copy) NSString * databasePath;                                           //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,nonatomic) unsigned validationState;                                        //@synthesize validationState=_validationState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> validationSerialQueue;              //@synthesize validationSerialQueue=_validationSerialQueue - In the implementation block
-(id)init;
-(id)initWithDatabasePath:(id)arg1 ;
-(char)currentQueueIsValidationQueue;
-(NSObject*<OS_dispatch_queue>)validationSerialQueue;
-(unsigned)validationState;
-(void)setValidationState:(unsigned)arg1 ;
-(void)setDatabasePath:(NSString *)arg1 ;
-(void)setValidationSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)databasePath;
@end
