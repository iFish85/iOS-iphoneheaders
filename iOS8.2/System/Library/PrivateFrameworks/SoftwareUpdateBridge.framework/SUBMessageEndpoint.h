/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdateBridge/IDSServiceDelegate.h>
#import <SoftwareUpdateBridge/SUBMessageEndpoint.h>

@protocol SUBMessageEndpoint <NSObject>
@optional
+(id)sharedEndpoint;
-(void)suspend;
-(void)resume;
-(void)sendMessage:(id)arg1 isCritical:(char)arg2 completion:(/*^block*/id)arg3;
-(void)sendErrorReply:(id)arg1 toMessage:(id)arg2;
-(void)sendMessage:(id)arg1 completion:(/*^block*/id)arg2;
-(void)sendReply:(id)arg1 toMessage:(id)arg2;
-(void)setHandler:(/*^block*/id)arg1 forMessagesOfType:(id)arg2;
-(void)setHandler:(/*^block*/id)arg1 forMessagesOfTypes:(id)arg2;
-(void)sendMessage:(id)arg1 withReply:(/*^block*/id)arg2;

@end


@protocol OS_dispatch_queue;
@class IDSService, NSObject, NSMutableDictionary, NSString;

@interface SUBMessageEndpoint : NSObject <IDSServiceDelegate, SUBMessageEndpoint> {

	IDSService* _service;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _messageQueue;
	NSMutableDictionary* _messageHandlers;
	NSMutableDictionary* _pendingMessageCompletions;
	NSMutableDictionary* _pendingMessageReplies;

}

@property (nonatomic,retain,readonly) IDSService * service;                                   //@synthesize service=_service - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> messageQueue;              //@synthesize messageQueue=_messageQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * messageHandlers;                           //@synthesize messageHandlers=_messageHandlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingMessageCompletions;                 //@synthesize pendingMessageCompletions=_pendingMessageCompletions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingMessageReplies;                     //@synthesize pendingMessageReplies=_pendingMessageReplies - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedEndpoint;
-(void)dealloc;
-(id)init;
-(void)suspend;
-(void)resume;
-(NSObject*<OS_dispatch_queue>)messageQueue;
-(NSObject*<OS_dispatch_queue>)queue;
-(IDSService *)service;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(void)sendMessage:(id)arg1 isCritical:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)sendMessage:(id)arg1 replyingTo:(id)arg2 expectingResponse:(char)arg3 isCritical:(char)arg4 error:(id*)arg5 ;
-(NSMutableDictionary *)pendingMessageCompletions;
-(NSMutableDictionary *)pendingMessageReplies;
-(NSMutableDictionary *)messageHandlers;
-(void)sendErrorReply:(id)arg1 toMessage:(id)arg2 ;
-(void)sendMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendReply:(id)arg1 toMessage:(id)arg2 ;
-(void)setHandler:(/*^block*/id)arg1 forMessagesOfType:(id)arg2 ;
-(void)setHandler:(/*^block*/id)arg1 forMessagesOfTypes:(id)arg2 ;
-(void)setPendingMessageCompletions:(NSMutableDictionary *)arg1 ;
-(void)setPendingMessageReplies:(NSMutableDictionary *)arg1 ;
-(void)sendMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setMessageHandlers:(NSMutableDictionary *)arg1 ;
@end
