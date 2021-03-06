/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:50 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/sbin/BTLEServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableData;

@interface DataOutputStream : NSObject {

	NSMutableData* _stream;
	long _byteOrder;

}
+(id)outputStreamWithByteOrder:(long)arg1 ;
+(id)outputStream;
-(void)writeUint32:(unsigned)arg1 ;
-(void)writeUint16:(unsigned short)arg1 ;
-(id)initWithByteOrder:(long)arg1 ;
-(void)dealloc;
-(id)data;
-(void)writeBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(void)writeUint8:(unsigned char)arg1 ;
-(void)writeString:(id)arg1 ;
-(void)writeData:(id)arg1 ;
@end

