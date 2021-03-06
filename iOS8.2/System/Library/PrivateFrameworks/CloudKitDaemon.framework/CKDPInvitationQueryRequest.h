/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CloudKitDaemon/NSCopying.h>

@interface CKDPInvitationQueryRequest : PBRequest <NSCopying> {

	int _queryType;
	char _queryAllContainers;
	SCD_Struct_CK5 _has;

}

@property (assign,nonatomic) char hasQueryType; 
@property (assign,nonatomic) int queryType;                           //@synthesize queryType=_queryType - In the implementation block
@property (assign,nonatomic) char hasQueryAllContainers; 
@property (assign,nonatomic) char queryAllContainers;                 //@synthesize queryAllContainers=_queryAllContainers - In the implementation block
+(id)options;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setQueryType:(int)arg1 ;
-(void)setHasQueryType:(char)arg1 ;
-(char)hasQueryType;
-(char)queryAllContainers;
-(void)setQueryAllContainers:(char)arg1 ;
-(void)setHasQueryAllContainers:(char)arg1 ;
-(char)hasQueryAllContainers;
-(int)queryType;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

