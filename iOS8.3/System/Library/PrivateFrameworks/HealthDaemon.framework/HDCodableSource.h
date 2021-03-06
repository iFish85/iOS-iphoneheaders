/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:58:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <HealthDaemon/NSCopying.h>

@class NSString;

@interface HDCodableSource : PBCodable <NSCopying> {

	long long _options;
	NSString* _bundleIdentifier;
	NSString* _name;
	NSString* _productType;
	SCD_Struct_HD15 _has;

}

@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) char hasProductType; 
@property (nonatomic,retain) NSString * productType;                   //@synthesize productType=_productType - In the implementation block
@property (assign,nonatomic) char hasOptions; 
@property (assign,nonatomic) long long options;                        //@synthesize options=_options - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setOptions:(long long)arg1 ;
-(long long)options;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(char)hasBundleIdentifier;
-(char)hasOptions;
-(char)hasProductType;
-(void)setHasOptions:(char)arg1 ;
-(void)setProductType:(NSString *)arg1 ;
-(NSString *)productType;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasName;
@end

