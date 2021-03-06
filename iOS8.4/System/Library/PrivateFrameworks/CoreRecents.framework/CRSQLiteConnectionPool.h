/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol CRSQLiteConnectionPoolDelegate, OS_dispatch_semaphore;
#import <recentsd/recentsd-Structs.h>
@class NSLock, NSMutableSet, NSObject;

@interface CRSQLiteConnectionPool : NSObject {

	id<CRSQLiteConnectionPoolDelegate> _delegate;
	NSLock* _cacheLock;
	NSMutableSet* _cache;
	unsigned long long _cacheSize;
	unsigned long long _cacheGeneration;
	unsigned long long _maxConcurrentReaders;
	unsigned long long _maxConcurrentWriters;
	NSLock* _checkoutLock;
	CFDictionaryRef _checkoutMap;
	NSObject*<OS_dispatch_semaphore> _readerSemaphore;
	int _readersWaiting;
	NSObject*<OS_dispatch_semaphore> _writerSemaphore;
	int _writersWaiting;

}

@property (assign) id<CRSQLiteConnectionPoolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long cacheSize; 
@property (readonly) unsigned long long maxConcurrentReaders; 
@property (readonly) unsigned long long maxConcurrentWriters; 
@property (readonly) unsigned long long readersWaiting; 
@property (readonly) unsigned long long writersWaiting; 
-(id)initWithDelegate:(id)arg1 maxConcurrentReaders:(unsigned long long)arg2 ;
-(unsigned long long)readersWaiting;
-(void)dealloc;
-(void)setDelegate:(id<CRSQLiteConnectionPoolDelegate>)arg1 ;
-(id<CRSQLiteConnectionPoolDelegate>)delegate;
-(void)flush;
-(void)setCacheSize:(unsigned long long)arg1 ;
-(unsigned long long)writersWaiting;
-(id)_connectionForWriting:(BOOL)arg1 ;
-(unsigned long long)maxConcurrentReaders;
-(unsigned long long)maxConcurrentWriters;
-(id)readerConnection;
-(id)writerConnection;
-(void)checkInConnection:(id)arg1 ;
-(unsigned long long)cacheSize;
@end

