/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MFConnection, MFAuthScheme, MFAccount;

@interface MFSASLAuthenticator : NSObject {

	MFConnection* _connection;
	MFAuthScheme* _authScheme;
	MFAccount* _account;
	int _authenticationState;

}
-(void)dealloc;
-(id)account;
-(id)saslName;
-(BOOL)base64EncodeResponseData;
-(void)setAuthenticationState:(int)arg1 ;
-(id)responseForServerData:(id)arg1 ;
-(BOOL)justSentPlainTextPassword;
-(int)authenticationState;
-(id)initWithAuthScheme:(id)arg1 account:(id)arg2 connection:(id)arg3 ;
-(id)authScheme;
-(BOOL)supportsInitialClientResponse;
-(id)securityLayer;
-(BOOL)isUsingSSL;
-(BOOL)couldRetry;
-(void)setMissingPasswordError;
@end

