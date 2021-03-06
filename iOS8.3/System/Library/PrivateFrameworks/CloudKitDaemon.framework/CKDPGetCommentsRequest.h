/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSData, CKDPCommentedOnId, CKDPQuerySort, NSString;

@interface CKDPGetCommentsRequest : PBRequest <NSCopying> {

	NSData* _continuationMarker;
	CKDPCommentedOnId* _identifier;
	unsigned _limit;
	CKDPQuerySort* _orderBy;
	NSString* _path;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) CKDPCommentedOnId * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char hasContinuationMarker; 
@property (nonatomic,retain) NSData * continuationMarker;                 //@synthesize continuationMarker=_continuationMarker - In the implementation block
@property (assign,nonatomic) char hasLimit; 
@property (assign,nonatomic) unsigned limit;                              //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) char hasOrderBy; 
@property (nonatomic,retain) CKDPQuerySort * orderBy;                     //@synthesize orderBy=_orderBy - In the implementation block
@property (nonatomic,readonly) char hasPath; 
@property (nonatomic,retain) NSString * path;                             //@synthesize path=_path - In the implementation block
+(id)options;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(CKDPCommentedOnId *)identifier;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(CKDPCommentedOnId *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasPath;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(char)hasIdentifier;
-(void)setLimit:(unsigned)arg1 ;
-(void)setHasLimit:(char)arg1 ;
-(char)hasLimit;
-(unsigned)limit;
-(void)setContinuationMarker:(NSData *)arg1 ;
-(char)hasContinuationMarker;
-(NSData *)continuationMarker;
-(void)setOrderBy:(CKDPQuerySort *)arg1 ;
-(char)hasOrderBy;
-(CKDPQuerySort *)orderBy;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

