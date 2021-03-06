/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PTPWrappedBytes : NSObject {

	unsigned long long _offset;
	unsigned long long _capacity;
	BOOL _allocatedBytes;
	char* _bytes;
	int _fd;
	BOOL _useByteBuffer;
	unsigned long long _excessDataLength;
	double _progressNotificationTime;
	/*function pointer*/void* _progressNotifier;
	void* _progressNotifierContext;
	int _lastNotifiedProgress;

}
+(id)wrappedBytesWithCapacity64:(unsigned long long)arg1 ;
+(id)wrappedBytesWithBytes:(void*)arg1 capacity64:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(const void*)bytes;
-(unsigned long long)offset;
-(unsigned long long)appendData:(id)arg1 ;
-(void*)mutableBytes;
-(unsigned long long)length64;
-(id)initWithCapacity64:(unsigned long long)arg1 ;
-(unsigned long long)appendBytes:(const void*)arg1 length64:(unsigned long long)arg2 ;
-(id)initWithFileDescriptor:(int)arg1 capacity64:(unsigned long long)arg2 ;
-(BOOL)wasInitWithFD;
-(double)percentFull;
-(unsigned long long)capacity64;
-(void)setLength64:(unsigned long long)arg1 ;
-(id)initWithBytes:(void*)arg1 capacity64:(unsigned long long)arg2 ;
-(unsigned long long)rewindBytesToPosition64:(unsigned long long)arg1 ;
-(void)setProgressNotifierCallback:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(unsigned long long)setCapacity64:(unsigned long long)arg1 ;
-(unsigned long long)excessDataLength;
@end

