/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class GEOVLaneCharacteristic;

@interface GEOVPointCharacteristic : PBCodable {

	GEOVLaneCharacteristic* _laneCharacteristic;
	int _roadLaneCount;
	int _roadOffset;
	int _sectionIndex;
	int _vertexIndex;
	int _zLevel;
	bool _brunnelEntry;
	bool _castShadow;
	bool _cropped;
	bool _shouldDrawLanes;
	SCD_Struct_GE60 _has;

}

@property (assign,nonatomic) bool hasSectionIndex; 
@property (assign,nonatomic) int sectionIndex;                                         //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (assign,nonatomic) bool hasVertexIndex; 
@property (assign,nonatomic) int vertexIndex;                                          //@synthesize vertexIndex=_vertexIndex - In the implementation block
@property (assign,nonatomic) bool hasRoadLaneCount; 
@property (assign,nonatomic) int roadLaneCount;                                        //@synthesize roadLaneCount=_roadLaneCount - In the implementation block
@property (assign,nonatomic) bool hasRoadOffset; 
@property (assign,nonatomic) int roadOffset;                                           //@synthesize roadOffset=_roadOffset - In the implementation block
@property (assign,nonatomic) bool hasZLevel; 
@property (assign,nonatomic) int zLevel;                                               //@synthesize zLevel=_zLevel - In the implementation block
@property (assign,nonatomic) bool hasCropped; 
@property (assign,nonatomic) bool cropped;                                             //@synthesize cropped=_cropped - In the implementation block
@property (nonatomic,readonly) bool hasLaneCharacteristic; 
@property (nonatomic,retain) GEOVLaneCharacteristic * laneCharacteristic;              //@synthesize laneCharacteristic=_laneCharacteristic - In the implementation block
@property (assign,nonatomic) bool hasShouldDrawLanes; 
@property (assign,nonatomic) bool shouldDrawLanes;                                     //@synthesize shouldDrawLanes=_shouldDrawLanes - In the implementation block
@property (assign,nonatomic) bool hasCastShadow; 
@property (assign,nonatomic) bool castShadow;                                          //@synthesize castShadow=_castShadow - In the implementation block
@property (assign,nonatomic) bool hasBrunnelEntry; 
@property (assign,nonatomic) bool brunnelEntry;                                        //@synthesize brunnelEntry=_brunnelEntry - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(bool)hasRoadLaneCount;
-(int)roadLaneCount;
-(void)setRoadLaneCount:(int)arg1 ;
-(void)setHasRoadLaneCount:(bool)arg1 ;
-(void)setLaneCharacteristic:(id)arg1 ;
-(bool)hasSectionIndex;
-(bool)hasVertexIndex;
-(int)vertexIndex;
-(void)setVertexIndex:(int)arg1 ;
-(bool)hasRoadOffset;
-(int)roadOffset;
-(void)setRoadOffset:(int)arg1 ;
-(bool)hasZLevel;
-(int)zLevel;
-(void)setZLevel:(int)arg1 ;
-(bool)hasCropped;
-(bool)cropped;
-(void)setCropped:(bool)arg1 ;
-(bool)hasLaneCharacteristic;
-(id)laneCharacteristic;
-(bool)hasShouldDrawLanes;
-(bool)shouldDrawLanes;
-(void)setShouldDrawLanes:(bool)arg1 ;
-(bool)hasCastShadow;
-(bool)castShadow;
-(void)setCastShadow:(bool)arg1 ;
-(bool)hasBrunnelEntry;
-(bool)brunnelEntry;
-(void)setBrunnelEntry:(bool)arg1 ;
-(void)setHasSectionIndex:(bool)arg1 ;
-(void)setHasVertexIndex:(bool)arg1 ;
-(void)setHasRoadOffset:(bool)arg1 ;
-(void)setHasZLevel:(bool)arg1 ;
-(void)setHasCropped:(bool)arg1 ;
-(void)setHasShouldDrawLanes:(bool)arg1 ;
-(void)setHasCastShadow:(bool)arg1 ;
-(void)setHasBrunnelEntry:(bool)arg1 ;
-(int)sectionIndex;
-(void)setSectionIndex:(int)arg1 ;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

