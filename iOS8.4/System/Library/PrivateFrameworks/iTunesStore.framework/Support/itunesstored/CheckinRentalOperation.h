/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, NSArray, SSURLConnectionResponse;

@interface CheckinRentalOperation : ISOperation {

	NSNumber* _accountIdentifier;
	NSString* _clientIdentifierHeader;
	NSNumber* _rentalKeyIdentifier;
	NSArray* _sinfs;
	SSURLConnectionResponse* _urlResponse;
	NSString* _userAgent;

}

@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) NSNumber * rentalKeyIdentifier; 
@property (copy) NSString * clientIdentifierHeader; 
@property (copy) NSString * userAgent; 
@property (readonly) SSURLConnectionResponse * URLResponse; 
-(id)initWithCheckinRequest:(id)arg1 ;
-(BOOL)_runCheckinAckOperationWithResponseData:(id)arg1 error:(id*)arg2 ;
-(id)_bodyDataWithCheckinAckResponseData:(id)arg1 ;
-(BOOL)_handleCheckinAckResponse:(id)arg1 error:(id*)arg2 ;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
-(SSURLConnectionResponse *)URLResponse;
-(BOOL)_handleResponse:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(void)_run;
-(void)run;
-(NSNumber *)accountIdentifier;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(id)_bodyData;
-(id)initWithSinfs:(id)arg1 ;
-(NSNumber *)rentalKeyIdentifier;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
@end

