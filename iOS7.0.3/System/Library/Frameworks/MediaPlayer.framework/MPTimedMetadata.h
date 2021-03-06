/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class AVMetadataItem, NSString, NSDictionary;

@interface MPTimedMetadata : NSObject {

	AVMetadataItem* _metadataItem;

}

@property (nonatomic,readonly) NSString * key; 
@property (nonatomic,readonly) NSString * keyspace; 
@property (nonatomic,readonly) id value; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) NSDictionary * allMetadata; 
-(id)_initWithMetadataItem:(id)arg1 ;
-(id)keyspace;
-(id)allMetadata;
-(id)init;
-(double)timestamp;
-(id)value;
-(id)key;
-(void).cxx_destruct;
@end

