/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@class NSURLConnection, NSURLResponse, NSMutableData, NSError;

@interface SYDURLConnection : NSObject <NSURLConnectionDelegate> {

	NSURLConnection* _connection;
	/*^block*/ id _handler;
	NSURLResponse* _response;
	NSMutableData* _data;
	NSError* _error;

}
-(id)initWithRequest:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)_callHandler;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
@end
