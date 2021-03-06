/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFMailMessage.h>

@class MFMessageBody, MFMutableMessageHeaders;

@interface MFOutgoingMessage : MFMailMessage {

	MFMessageBody* _messageBody;
	MFMutableMessageHeaders* _messageHeaders;

}
-(void)dealloc;
-(unsigned long long)messageSize;
-(id)mutableHeaders;
-(void)setMessageBody:(id)arg1 ;
-(id)messageStore;
-(id)messageBody;
-(id)messageBodyIfAvailable;
-(id)messageData;
-(BOOL)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(void)setMutableHeaders:(id)arg1 ;
-(id)headersIfAvailable;
-(id)headers;
@end

