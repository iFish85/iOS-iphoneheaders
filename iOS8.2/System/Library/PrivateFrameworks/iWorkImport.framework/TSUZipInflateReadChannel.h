/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSUStreamReadChannel.h>

@protocol OS_dispatch_queue, TSUStreamReadChannel;
@class NSObject, NSString;

@interface TSUZipInflateReadChannel : NSObject <TSUStreamReadChannel> {

	NSObject*<OS_dispatch_queue> _readQueue;
	id<TSUStreamReadChannel> _readChannel;
	unsigned long _remainingUncompressedSize;
	unsigned _CRC;
	char _validateCRC;
	z_stream_s* _stream;
	unsigned long _outBufferSize;
	char* _outBuffer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithReadChannel:(id)arg1 uncompressedSize:(unsigned long)arg2 CRC:(unsigned)arg3 validateCRC:(char)arg4 ;
-(void)handleFailureWithQueue:(id)arg1 handler:(/*^block*/id)arg2 error:(id)arg3 ;
-(void)readWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)prepareBuffer;
-(char)processData:(id)arg1 inflateResult:(int*)arg2 CRC:(unsigned*)arg3 isDone:(char)arg4 handlerQueue:(id)arg5 handler:(/*^block*/id)arg6 ;
-(void)dealloc;
-(void)close;
@end

