/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface GKVoiceChatDictionary : NSObject {

	NSMutableDictionary* actualDictionary;
	unsigned type;
	unsigned long orignalCallID;

}

@property (assign) unsigned long callID; 
@property (readonly) unsigned long originalCallID; 
@property (assign) int nonce; 
+(char)validateDictionary:(id)arg1 ;
+(char)validateInvite:(id)arg1 ;
+(char)validateReply:(id)arg1 ;
+(char)validateCancel:(id)arg1 ;
+(char)validateFocus:(id)arg1 ;
+(id)inviteDictionaryToParticipantID:(id)arg1 fromParticipantID:(id)arg2 connectionData:(id)arg3 callID:(unsigned long)arg4 focus:(char)arg5 ;
+(id)dictionaryFromData:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned)type;
-(unsigned)response;
-(id)version;
-(unsigned long)callID;
-(void)setCallID:(unsigned long)arg1 ;
-(id)participantID;
-(id)connectionData;
-(char)isFocus;
-(id)fromParticipantID;
-(int)nonce;
-(id)remoteVCPartyID;
-(id)localVCPartyID;
-(char)matchesNonce:(int)arg1 ;
-(unsigned long)originalCallID;
-(id)replyDictionary:(unsigned)arg1 connectionData:(id)arg2 callID:(unsigned long)arg3 focus:(char)arg4 ;
-(id)cancelDictionary;
-(id)focusDictionary:(char)arg1 ;
-(char)isInviteDictionary;
-(char)isCancelDictionary;
-(char)isReplyDictionary;
-(char)isFocusDictionary;
-(char)matchesResponse:(id)arg1 ;
-(void)setFromParticipantID:(id)arg1 ;
-(void)setNonce:(int)arg1 ;
-(void)setFocus:(char)arg1 ;
-(id)createBlob;
-(id)setLocalVCPartyID:(id)arg1 ;
-(id)setRemoteVCPartyID:(id)arg1 ;
@end
