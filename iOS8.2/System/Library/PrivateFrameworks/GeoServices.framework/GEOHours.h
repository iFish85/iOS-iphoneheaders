/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOHours : PBCodable <NSCopying> {

	SCD_Struct_GE55* _days;
	NSMutableArray* _timeRanges;

}

@property (nonatomic,readonly) unsigned daysCount; 
@property (nonatomic,readonly) int* days; 
@property (nonatomic,retain) NSMutableArray * timeRanges;              //@synthesize timeRanges=_timeRanges - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int*)days;
-(unsigned)daysCount;
-(void)setDays:(int*)arg1 count:(unsigned)arg2 ;
-(NSMutableArray *)timeRanges;
-(unsigned)timeRangesCount;
-(void)addTimeRange:(id)arg1 ;
-(id)initWithPlaceDataHours:(id)arg1 ;
-(void)clearTimeRanges;
-(void)clearDays;
-(int)dayAtIndex:(unsigned)arg1 ;
-(void)addDay:(int)arg1 ;
-(id)timeRangeAtIndex:(unsigned)arg1 ;
-(void)setTimeRanges:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
