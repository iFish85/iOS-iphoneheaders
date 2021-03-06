/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <CloudDocsDaemon/BRCOperationSubclass.h>

@class BRCAccountSession, BRCContainerMetadataSyncPersistedState, NSMutableArray, NSMutableDictionary, NSString;

@interface BRCContainerMetadataSyncDownOperation : _BRCOperation <BRCOperationSubclass> {

	BRCAccountSession* _session;
	BRCContainerMetadataSyncPersistedState* _state;
	NSMutableArray* _recordIDsForDesiredAssets;
	NSMutableArray* _desiredKeysForDesiredAssets;
	NSMutableDictionary* _recordIDsToVersionETagsForDesiredAssets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithSession:(id)arg1 state:(id)arg2 ;
-(void)performAfterFetchingAssetContents:(/*^block*/id)arg1 ;
-(void)performAfterFetchingRecordChanges:(/*^block*/id)arg1 ;
-(void)performAfterCreatingZoneIfNeeded:(/*^block*/id)arg1 ;
@end

