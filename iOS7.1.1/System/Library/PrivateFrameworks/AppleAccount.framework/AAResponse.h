/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSHTTPURLResponse, NSError, NSString;

@interface AAResponse : NSObject {

	NSDictionary* _responseDictionary;
	NSHTTPURLResponse* _httpResponse;
	NSError* _error;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * protocolVersion; 
-(void)setError:(id)arg1 ;
-(id)protocolVersion;
-(id)responseDictionary;
-(void).cxx_destruct;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 bodyIsPlist:(bool)arg3 ;
-(id)_deviceSpecificLocalizedString:(id)arg1 ;
-(void)_parsePlistResponse:(id)arg1 ;
-(id)_stringWithDescriptionForResponseError:(id)arg1 ;
-(id)error;
@end

