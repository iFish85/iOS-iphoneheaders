/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAV-Structs.h>
#import <CoreDAV/CoreDAVSubmittable.h>
#import <DACoreDAVGlue/DATask.h>

@protocol CoreDAVTaskManager, CoreDAVAccountInfoProvider, CoreDAVResponseBodyParser, CoreDAVTaskDelegate;
@class NSError, NSHTTPURLResponse, NSURLConnection, NSURLRequest, NSDate, CoreDAVRequestLogger, NSURL, NSMutableDictionary, NSMutableArray, NSDictionary, NSData, CoreDAVErrorItem, NSString;

@interface CoreDAVTask : NSObject <CoreDAVSubmittable, DATask> {

	<CoreDAVTaskManager>* _taskManager;
	<CoreDAVAccountInfoProvider>* _accountInfoProvider;
	long long _numDownloadedElements;
	int _depth;
	NSHTTPURLResponse* _response;
	NSURLConnection* _connection;
	NSURLRequest* _request;
	double _timeoutInterval;
	long long _responseStatusCode;
	NSDate* _dateConnectionWentOut;
	bool _didSendRequest;
	bool _didFailWithError;
	bool _didCancel;
	bool _didReceiveResponse;
	bool _didReceiveData;
	bool _didFinishLoading;
	bool _finished;
	void* _context;
	bool _receivedBadPasswordResponse;
	bool _justTriedTokenAuth;
	bool _everTriedTokenAuth;
	bool _shouldRetryWithClientToken;
	bool _didRetryWithClientToken;
	bool _requestIsCompressed;
	bool _compressedRequestFailed;
	NSError* _passwordNotificationError;
	<CoreDAVResponseBodyParser>* _responseBodyParser;
	CoreDAVRequestLogger* _logger;
	NSURL* _url;
	bool _allowAutomaticRedirects;
	<CoreDAVTaskDelegate>* _delegate;
	/*^block*/ id _requestProgressBlock;
	/*^block*/ id _responseProgressBlock;
	/*^block*/ id _completionBlock;
	NSError* _error;
	unsigned long long _totalBytesReceived;
	NSMutableDictionary* _overriddenHeaders;
	NSMutableArray* _redirectHistory;
	NSDictionary* _requestProperties;
	NSData* _fakeResponseData;
	bool _haveParsedFakeResponseData;
	CoreDAVErrorItem* _forbiddenErrorItem;
	NSString* _uniqueID;

}

@property (nonatomic,copy) id requestProgressBlock;                                           //@synthesize requestProgressBlock=_requestProgressBlock - In the implementation block
@property (nonatomic,copy) id responseProgressBlock;                                          //@synthesize responseProgressBlock=_responseProgressBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSError * error;                                                 //@synthesize error=_error - In the implementation block
@property (getter=isFinished,readonly) bool finished; 
@property (assign,nonatomic) <CoreDAVTaskManager> * taskManager;                              //@synthesize taskManager=_taskManager - In the implementation block
@property (assign,nonatomic) <CoreDAVAccountInfoProvider> * accountInfoProvider;              //@synthesize accountInfoProvider=_accountInfoProvider - In the implementation block
@property (assign,nonatomic) <CoreDAVTaskDelegate> * delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) void* context;                                                   //@synthesize context=_context - In the implementation block
@property (assign) int depth;                                                                 //@synthesize depth=_depth - In the implementation block
@property (assign) double timeoutInterval;                                                    //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) bool allowAutomaticRedirects;                                    //@synthesize allowAutomaticRedirects=_allowAutomaticRedirects - In the implementation block
@property (retain) <CoreDAVResponseBodyParser> * responseBodyParser;                          //@synthesize responseBodyParser=_responseBodyParser - In the implementation block
@property (readonly) NSDictionary * responseHeaders; 
@property (assign,nonatomic) long long responseStatusCode;                                    //@synthesize responseStatusCode=_responseStatusCode - In the implementation block
@property (readonly) NSURL * url;                                                             //@synthesize url=_url - In the implementation block
@property (retain) NSDictionary * requestProperties;                                          //@synthesize requestProperties=_requestProperties - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytesReceived;                           //@synthesize totalBytesReceived=_totalBytesReceived - In the implementation block
+(unsigned)uniqueQueryID;
+(id)stringFromDepth:(int)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)performTask;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2 ;
-(bool)markAsFinished;
-(bool)validate:(id*)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(id)connection:(id)arg1 needNewBodyStream:(id)arg2 ;
-(unsigned long long)cachePolicy;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)setError:(id)arg1 ;
-(void)setRequestProperties:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)reset;
-(void)setCompletionBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)completionBlock;
-(id)url;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(bool)isFinished;
-(void)setAccountInfoProvider:(id)arg1 ;
-(id)accountInfoProvider;
-(id)responseBodyParser;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(void)submitWithTaskManager:(id)arg1 ;
-(void)finishEarlyWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)additionalHeaderValues;
-(long long)responseStatusCode;
-(void)setAllowAutomaticRedirects:(bool)arg1 ;
-(id)responseHeaders;
-(id)lastRedirectURL;
-(id)requestBodyStream;
-(void)performCoreDAVTask;
-(void)setResponseBodyParser:(id)arg1 ;
-(id)_compressBodyData:(id)arg1 ;
-(id)_createBodyData;
-(bool)_includeGeneralHeaders;
-(id)_applyStorageSession:(CFURLStorageSessionRef)arg1 toRequest:(id)arg2 ;
-(void)setRequestProgressBlock:(/*^block*/ id)arg1 ;
-(void)setResponseProgressBlock:(/*^block*/ id)arg1 ;
-(void)handleWebLoginRequestWithCompletionBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)requestProgressBlock;
-(unsigned long long)totalBytesReceived;
-(void)setTotalBytesReceived:(unsigned long long)arg1 ;
-(/*^block*/ id)responseProgressBlock;
-(bool)shouldLogResponseBody;
-(bool)_shouldHandleStatusCode:(long long)arg1 ;
-(bool)allowAutomaticRedirects;
-(id)credentialForOAuthChallenge:(id)arg1 ;
-(void)setResponseStatusCode:(long long)arg1 ;
-(void)overrideRequestHeader:(id)arg1 withValue:(id)arg2 ;
-(id)taskManager;
-(id)requestBody;
-(void)startModal;
-(void)setTaskManager:(id)arg1 ;
-(long long)numDownloadedElements;
-(void)reportStatusWithError:(id)arg1 ;
-(id)httpMethod;
-(id)_connectionForLogging;
-(id)_requestForLogging;
-(void)tearDownResources;
-(void)_handleBadPasswordResponse;
-(void)_failImmediately;
-(id)_applyAuthenticationChain:(CFArrayRef)arg1 toRequest:(id)arg2 ;
-(int)depth;
-(void)setDepth:(int)arg1 ;
-(id)error;
-(bool)connectionShouldUseCredentialStorage:(id)arg1 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(id)requestProperties;
@end

