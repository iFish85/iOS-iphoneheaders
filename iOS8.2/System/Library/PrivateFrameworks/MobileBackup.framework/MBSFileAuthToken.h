/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface MBSFileAuthToken : PBCodable {

	NSString* _authToken;
	NSData* _fileID;

}

@property (nonatomic,readonly) char hasFileID; 
@property (nonatomic,retain) NSData * fileID;                   //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,readonly) char hasAuthToken; 
@property (nonatomic,retain) NSString * authToken;              //@synthesize authToken=_authToken - In the implementation block
-(char)hasFileID;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSData *)fileID;
-(void)setFileID:(NSData *)arg1 ;
-(void)setAuthToken:(NSString *)arg1 ;
-(NSString *)authToken;
-(char)hasAuthToken;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
