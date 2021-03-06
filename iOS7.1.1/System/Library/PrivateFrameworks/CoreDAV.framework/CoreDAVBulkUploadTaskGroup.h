/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVTaskDelegate.h>

@class NSURL, NSString, NSMutableDictionary, NSDictionary;

@interface CoreDAVBulkUploadTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {

	NSURL* _folderURL;
	NSString* _lastKnownCTag;
	bool _validCTag;
	void* _context;
	unsigned long long _multiPutBatchMaxNumResources;
	unsigned long long _multiPutBatchMaxSize;
	NSMutableDictionary* _remainingUUIDsToAddActions;
	NSMutableDictionary* _remainingHREFsToModDeleteActions;
	NSMutableDictionary* _uuidToHREF;
	NSMutableDictionary* _hrefToETag;
	NSMutableDictionary* _uuidToErrorItems;
	NSMutableDictionary* _hrefToErrorItems;
	NSMutableDictionary* _uuidToStatus;
	NSMutableDictionary* _hrefToStatus;

}

@property (assign) unsigned long long multiPutBatchMaxNumResources;              //@synthesize multiPutBatchMaxNumResources=_multiPutBatchMaxNumResources - In the implementation block
@property (assign) unsigned long long multiPutBatchMaxSize;                      //@synthesize multiPutBatchMaxSize=_multiPutBatchMaxSize - In the implementation block
@property (readonly) NSURL * folderURL;                                          //@synthesize folderURL=_folderURL - In the implementation block
@property (readonly) void* context;                                              //@synthesize context=_context - In the implementation block
@property (readonly) bool validCTag;                                             //@synthesize validCTag=_validCTag - In the implementation block
@property (retain) NSString * nextCTag;                                          //@synthesize lastKnownCTag=_lastKnownCTag - In the implementation block
@property (readonly) NSDictionary * uuidToHREF;                                  //@synthesize uuidToHREF=_uuidToHREF - In the implementation block
@property (readonly) NSDictionary * hrefToETag;                                  //@synthesize hrefToETag=_hrefToETag - In the implementation block
@property (readonly) NSDictionary * uuidToStatus;                                //@synthesize uuidToStatus=_uuidToStatus - In the implementation block
@property (readonly) NSDictionary * hrefToStatus;                                //@synthesize hrefToStatus=_hrefToStatus - In the implementation block
@property (readonly) NSDictionary * uuidToErrorItems;                            //@synthesize uuidToErrorItems=_uuidToErrorItems - In the implementation block
@property (readonly) NSDictionary * hrefToErrorItems;                            //@synthesize hrefToErrorItems=_hrefToErrorItems - In the implementation block
-(void)dealloc;
-(id)description;
-(void*)context;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(void)_sendNextBatch;
-(id)nextCTag;
-(void)setNextCTag:(id)arg1 ;
-(void)syncAway;
-(id)folderURL;
-(Class)multiPutTaskClass;
-(id)uuidToHREF;
-(id)hrefToETag;
-(id)uuidToErrorItems;
-(id)hrefToErrorItems;
-(id)uuidToStatus;
-(id)hrefToStatus;
-(id)initWithFolderURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4 context:(void*)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7 ;
-(unsigned long long)multiPutBatchMaxNumResources;
-(void)setMultiPutBatchMaxNumResources:(unsigned long long)arg1 ;
-(unsigned long long)multiPutBatchMaxSize;
-(void)setMultiPutBatchMaxSize:(unsigned long long)arg1 ;
-(bool)validCTag;
@end

