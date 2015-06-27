/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate;

@interface MBServiceRestoreSession : NSObject {

	NSString* _backupUDID;
	unsigned _snapshotID;
	NSDate* _startDate;
	char _finishing;
	char _cancelled;

}

@property (nonatomic,retain) NSString * backupUDID;                           //@synthesize backupUDID=_backupUDID - In the implementation block
@property (assign,nonatomic) unsigned snapshotID;                             //@synthesize snapshotID=_snapshotID - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (assign,getter=isFinishing,nonatomic) char finishing;               //@synthesize finishing=_finishing - In the implementation block
@property (assign,getter=wasCancelled,nonatomic) char cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
+(id)currentRestoreSession;
+(void)clearCurrentRestoreSession;
+(id)restoreSessionWithPropertyList:(id)arg1 ;
-(void)setBackupUDID:(NSString *)arg1 ;
-(void)setSnapshotID:(unsigned)arg1 ;
-(void)setFinishing:(char)arg1 ;
-(void)saveAtPath:(id)arg1 ;
-(char)isFinishing;
-(id)propertyList;
-(id)initWithPropertyList:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setCancelled:(char)arg1 ;
-(char)wasCancelled;
-(NSString *)backupUDID;
-(unsigned)snapshotID;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
@end
