/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:02 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSData;

@interface SFUDataRepresentation : NSObject {

	char mHasHash;
	unsigned mHash;
	char mHasSha1Hash;
	NSData* mSha1Hash;

}
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(int)compare:(id)arg1 ;
-(id)inputStream;
-(xmlTextReaderRef)xmlReaderWithReadCallback:(/*function pointer*/void*)arg1 ;
-(xmlTextReaderRef)xmlReaderForGzippedDataWithInputStream:(id*)arg1 ;
-(unsigned)uint32Hash;
-(id)bufferedInputStreamWithBufferSize:(unsigned long)arg1 ;
-(xmlDoc*)xmlDocument;
-(xmlTextReaderRef)xmlReader;
-(xmlTextReaderRef)xmlReaderForGzippedData;
-(CGDataProviderRef)cgDataProvider;
-(unsigned long)readIntoData:(id)arg1 ;
-(id)sha1Hash;
-(char)hasSameLocationAs:(id)arg1 ;
-(char)isReadable;
-(id)bufferedInputStream;
-(long long)encodedLength;
-(char)isEncrypted;
-(long long)dataLength;
@end

