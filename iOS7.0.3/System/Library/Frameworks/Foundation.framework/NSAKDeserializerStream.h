/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSDeserializerStream.h>

@interface NSAKDeserializerStream : NSObject <NSDeserializerStream> {

	const void* memory;
	const char* current;
	unsigned left;
	unsigned max;
	BOOL freeWhenDone;

}
-(id)initFromMemoryNoCopy:(const void*)arg1 length:(unsigned)arg2 freeWhenDone:(BOOL)arg3 ;
-(int)readInt;
-(unsigned)readAlignedDataSize;
-(void)readData:(void*)arg1 length:(unsigned)arg2 ;
-(id)initFromPath:(id)arg1 ;
-(void)dealloc;
-(void)finalize;
@end

