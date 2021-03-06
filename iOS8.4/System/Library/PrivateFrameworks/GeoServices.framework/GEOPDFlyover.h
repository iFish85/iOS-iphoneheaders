/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOPDFlyover : PBCodable <NSCopying> {

	SCD_Struct_GE159* _cameraPaths;
	unsigned long long _cameraPathsCount;
	unsigned long long _cameraPathsSpace;
	SCD_Struct_GE160* _labelFrames;
	unsigned long long _labelFramesCount;
	unsigned long long _labelFramesSpace;
	NSMutableArray* _labels;
	NSMutableArray* _notificationMessages;
	BOOL _useSplines;
	SCD_Struct_GE5 _has;

}

@property (nonatomic,readonly) unsigned long long cameraPathsCount; 
@property (nonatomic,readonly) SCD_Struct_GE159* cameraPaths; 
@property (assign,nonatomic) BOOL hasUseSplines; 
@property (assign,nonatomic) BOOL useSplines;                                    //@synthesize useSplines=_useSplines - In the implementation block
@property (nonatomic,readonly) unsigned long long labelFramesCount; 
@property (nonatomic,readonly) SCD_Struct_GE160* labelFrames; 
@property (nonatomic,retain) NSMutableArray * labels;                            //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationMessages;              //@synthesize notificationMessages=_notificationMessages - In the implementation block
+(id)flyoverForPlaceData:(id)arg1 ;
-(id)bestLocalizedAnnouncementMessage;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)notificationMessages;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(void)clearCameraPaths;
-(void)clearLabelFrames;
-(void)setNotificationMessages:(NSMutableArray *)arg1 ;
-(void)addLabel:(id)arg1 ;
-(void)addNotificationMessage:(id)arg1 ;
-(void)addLabelFrame:(SCD_Struct_GE160)arg1 ;
-(unsigned long long)labelsCount;
-(void)clearLabels;
-(unsigned long long)notificationMessagesCount;
-(void)clearNotificationMessages;
-(id)notificationMessageAtIndex:(unsigned long long)arg1 ;
-(SCD_Struct_GE159*)cameraPaths;
-(void)setCameraPaths:(SCD_Struct_GE159*)arg1 count:(unsigned long long)arg2 ;
-(void)setUseSplines:(BOOL)arg1 ;
-(void)setHasUseSplines:(BOOL)arg1 ;
-(BOOL)hasUseSplines;
-(SCD_Struct_GE160*)labelFrames;
-(void)setLabelFrames:(SCD_Struct_GE160*)arg1 count:(unsigned long long)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(SCD_Struct_GE159)cameraPathAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cameraPathsCount;
-(void)addCameraPath:(SCD_Struct_GE159)arg1 ;
-(BOOL)useSplines;
-(unsigned long long)labelFramesCount;
-(SCD_Struct_GE160)labelFrameAtIndex:(unsigned long long)arg1 ;
-(id)labelAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)labels;
@end

