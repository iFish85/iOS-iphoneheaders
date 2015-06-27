/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:33 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKSQLite.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CKDMetadataCache : CKSQLite {

	NSObject*<OS_dispatch_queue> _cacheQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheQueue;              //@synthesize cacheQueue=_cacheQueue - In the implementation block
+(id)sharedCache;
+(id)dbFileName;
-(id)init;
-(id)applicationMetadataForApplicationBundleID:(id)arg1 ;
-(void)setApplicationMetadata:(id)arg1 forApplicationBundleID:(id)arg2 ;
-(id)globalConfiguration;
-(id)dateOfLastTokenUpdate;
-(id)knownAppContainerTuples;
-(id)appContainerIntersectionMetadataForAppContainerTuple:(id)arg1 ;
-(void)setPushToken:(id)arg1 forAppContainerTuple:(id)arg2 ;
-(void)setDateOfLastTokenUpdate:(id)arg1 ;
-(id)pushTokenForAppContainerTuple:(id)arg1 ;
-(void)setAppContainerIntersectionMetadata:(id)arg1 forAppContainerTuple:(id)arg2 ;
-(void)setGlobalConfiguration:(id)arg1 ;
-(void)setContainerInfo:(id)arg1 forContainerID:(id)arg2 ;
-(id)containerInfoForContainerID:(id)arg1 ;
-(void)expungeWithCurrentAccountIdentifier:(id)arg1 forceRemove:(char)arg2 ;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(void)inlock_setDateOfLastTokenUpdate:(id)arg1 ;
-(id)inlock_applicationMetadataForApplicationBundleID:(id)arg1 ;
-(id)inlock_containerInfoForContainerID:(id)arg1 ;
-(id)knownApplicationBundleIDs;
-(void)removeKnownApplicationBundleID:(id)arg1 ;
-(void)setCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
