/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSSet, NSURL, NSDictionary, NSMutableSet, NSMutableDictionary, NSMutableArray;

@interface CoreDAVMultiMoveWithFallbackTaskGroup : CoreDAVTaskGroup {

	NSSet* _sourceURLs;
	NSURL* _destinationURL;
	int _overwrite;
	BOOL _useFallback;
	NSDictionary* _sourceEntityDataPayloads;
	NSDictionary* _sourceEntityDataContentTypes;
	NSDictionary* _sourceEntityETags;
	NSMutableSet* _destinationURLs;
	NSMutableDictionary* _destinationEntityETags;
	NSMutableArray* _outstandingSourceURLsToMove;

}

@property (nonatomic,readonly) NSSet * sourceURLs;                                        //@synthesize sourceURLs=_sourceURLs - In the implementation block
@property (nonatomic,readonly) NSURL * destinationURL;                                    //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * sourceEntityETags;                          //@synthesize sourceEntityETags=_sourceEntityETags - In the implementation block
@property (nonatomic,readonly) NSDictionary * sourceEntityDataPayloads;                   //@synthesize sourceEntityDataPayloads=_sourceEntityDataPayloads - In the implementation block
@property (nonatomic,readonly) NSDictionary * sourceEntityDataContentTypes;               //@synthesize sourceEntityDataContentTypes=_sourceEntityDataContentTypes - In the implementation block
@property (nonatomic,readonly) BOOL useFallback;                                          //@synthesize useFallback=_useFallback - In the implementation block
@property (nonatomic,readonly) int overwrite;                                             //@synthesize overwrite=_overwrite - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * destinationEntityETags;              //@synthesize destinationEntityETags=_destinationEntityETags - In the implementation block
@property (nonatomic,readonly) NSMutableSet * destinationURLs;                            //@synthesize destinationURLs=_destinationURLs - In the implementation block
@property (retain) NSMutableArray * outstandingSourceURLsToMove;                          //@synthesize outstandingSourceURLsToMove=_outstandingSourceURLsToMove - In the implementation block
-(id)destinationURL;
-(void)dealloc;
-(id)description;
-(void)startTaskGroup;
-(int)overwrite;
-(BOOL)useFallback;
-(id)sourceURLs;
-(id)filenameFromURL:(id)arg1 ;
-(void)processOutstandingTasks;
-(id)outstandingSourceURLsToMove;
-(id)fullDestinationURLFromSourceURL:(id)arg1 ;
-(id)sourceEntityETags;
-(void)_completedMoveTask:(id)arg1 sourceURL:(id)arg2 ;
-(id)destinationEntityETags;
-(id)_eTagFromTaskResponseHeaders:(id)arg1 ;
-(id)sourceEntityDataPayloads;
-(id)sourceEntityDataContentTypes;
-(void)_completedPutTask:(id)arg1 sourceURL:(id)arg2 ;
-(id)destinationURLs;
-(void)_setTagsForDestinationEntityAtURL:(id)arg1 fromTaskResponseHeaders:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(id)initWithSourceURLs:(id)arg1 destinationURL:(id)arg2 overwrite:(BOOL)arg3 useFallback:(BOOL)arg4 sourceEntityDataPayloads:(id)arg5 sourceEntityDataContentTypes:(id)arg6 sourceEntityETags:(id)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9 ;
-(void)setOutstandingSourceURLsToMove:(id)arg1 ;
@end

