/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSDictionary;

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob {

	NSDictionary* _metadata;

}

@property (nonatomic,retain) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(void)updateAlbumMetadata:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)run;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(void)runDaemonSide;
-(long long)daemonOperation;
-(id)_argumentsDictionaryAsData:(id)arg1 ;
-(id)_argumentsDictionaryFromXPCEvent:(id)arg1 ;
@end
