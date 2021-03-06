/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFDeliveryDelegate;
@class MFMessage, MFMutableMessageHeaders, NSArray, NSString, MFPlainTextDocument, MailAccount, DeliveryAccount, NSDictionary, MFMailDelivery;

@interface MFOutgoingMessageDelivery : NSObject {

	MFMessage* _message;
	MFMutableMessageHeaders* _headers;
	NSArray* _mixedContent;
	char _textPartsAreHTML;
	NSString* _htmlBody;
	MFPlainTextDocument* _plainTextAlternative;
	NSArray* _otherHTMLAndAttachments;
	NSArray* _charsets;
	id<MFDeliveryDelegate> _delegate;
	MailAccount* _archiveAccount;
	DeliveryAccount* _deliveryAccount;
	NSDictionary* _compositionSpecification;
	MFMailDelivery* _currentDeliveryObject;
	char _isUserRequested;
	unsigned long long _conversationFlags;
	long long _originalConversationId;

}

@property (nonatomic,retain) NSDictionary * compositionSpecification;              //@synthesize compositionSpecification=_compositionSpecification - In the implementation block
@property (assign,nonatomic) unsigned long long conversationFlags;                 //@synthesize conversationFlags=_conversationFlags - In the implementation block
@property (assign,nonatomic) long long originalConversationId;                     //@synthesize originalConversationId=_originalConversationId - In the implementation block
@property (assign,nonatomic) char isUserRequested;                                 //@synthesize isUserRequested=_isUserRequested - In the implementation block
+(id)newWithMessage:(id)arg1 ;
+(id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(char)arg3 ;
+(id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)message;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(NSDictionary *)compositionSpecification;
-(id)deliverSynchronously;
-(id)originalHeaders;
-(id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(char)arg3 ;
-(id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5 ;
-(void)setArchiveAccount:(id)arg1 ;
-(int)deliveryStatus;
-(void)setCompositionSpecification:(NSDictionary *)arg1 ;
-(unsigned long long)conversationFlags;
-(void)setConversationFlags:(unsigned long long)arg1 ;
-(char)isUserRequested;
-(void)setIsUserRequested:(char)arg1 ;
-(id)_currentDeliveryObject;
-(id)_deliverSynchronouslyWithCurrentSettings:(char)arg1 ;
-(id)_deliveryAccountForInitializers;
-(long long)originalConversationId;
-(void)setOriginalConversationId:(long long)arg1 ;
-(id)initWithMessage:(id)arg1 ;
@end

