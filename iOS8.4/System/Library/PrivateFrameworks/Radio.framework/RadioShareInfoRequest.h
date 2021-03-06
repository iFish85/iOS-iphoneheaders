/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSString, NSArray;

@interface RadioShareInfoRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	long long _shareType;
	long long _stationID;
	NSString* _stationHash;
	NSArray* _acceptedMIMETypes;

}

@property (nonatomic,copy) NSArray * acceptedMIMETypes;              //@synthesize acceptedMIMETypes=_acceptedMIMETypes - In the implementation block
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)acceptedMIMETypes;
-(id)initWithStation:(id)arg1 shareType:(long long)arg2 ;
-(void)setAcceptedMIMETypes:(NSArray *)arg1 ;
-(void)startWithShareInformationCompletionHandler:(/*^block*/id)arg1 ;
@end

