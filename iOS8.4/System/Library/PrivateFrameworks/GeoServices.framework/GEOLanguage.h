/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOLanguage : PBCodable <NSCopying> {

	unsigned _identifier;
	NSMutableArray* _languages;

}

@property (assign,nonatomic) unsigned identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * languages;              //@synthesize languages=_languages - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)languages;
-(void)setLanguages:(NSMutableArray *)arg1 ;
-(void)addLanguage:(id)arg1 ;
-(unsigned long long)languagesCount;
-(void)clearLanguages;
-(id)languageAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

