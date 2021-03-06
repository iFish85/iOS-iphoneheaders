/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSDictionary, ACAccount;

@interface AAGenericTermsUIRequest : AARequest {

	NSDictionary* _requestDictionary;
	ACAccount* _account;

}
+(Class)responseClass;
-(id)urlString;
-(id)initWithAccount:(id)arg1 parameters:(id)arg2 ;
-(id)initWithParameters:(id)arg1 ;
-(id)urlRequest;
@end

