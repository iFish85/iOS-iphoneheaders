/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPIdentifier;

@interface CKDPRecordZoneIdentifier : PBCodable <NSCopying> {

	CKDPIdentifier* _ownerIdentifier;
	CKDPIdentifier* _value;

}

@property (nonatomic,readonly) char hasValue; 
@property (nonatomic,retain) CKDPIdentifier * value;                        //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) char hasOwnerIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * ownerIdentifier;              //@synthesize ownerIdentifier=_ownerIdentifier - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(CKDPIdentifier *)arg1 ;
-(CKDPIdentifier *)value;
-(id)dictionaryRepresentation;
-(char)hasValue;
-(void)setOwnerIdentifier:(CKDPIdentifier *)arg1 ;
-(char)hasOwnerIdentifier;
-(CKDPIdentifier *)ownerIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
