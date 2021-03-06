/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSError;

@interface IKOnReadyStateChangeMessage : NSObject {

	unsigned _readyState;
	unsigned _statusCode;
	NSString* _statusText;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned readyState;              //@synthesize readyState=_readyState - In the implementation block
@property (nonatomic,readonly) unsigned statusCode;              //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSString * statusText;                //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,copy) NSError * error;                      //@synthesize error=_error - In the implementation block
-(void)setStatusText:(NSString *)arg1 ;
-(unsigned)statusCode;
-(NSError *)error;
-(id)initWithReadyState:(unsigned)arg1 statusCode:(unsigned)arg2 statusText:(id)arg3 error:(id)arg4 ;
-(void)setError:(NSError *)arg1 ;
-(NSString *)statusText;
-(unsigned)readyState;
@end

