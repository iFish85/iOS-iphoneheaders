/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, NSArray;

@interface AAEmailLookupRequest : AARequest {

	ACAccount* _account;
	NSArray* _emailAddresses;

}

@property (nonatomic,retain) ACAccount * account;                   //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSArray * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
+(Class)responseClass;
-(id)urlString;
-(id)urlCredential;
-(id)initWithAccount:(id)arg1 emailAddresses:(id)arg2 ;
-(id)initWithURLString:(id)arg1 account:(id)arg2 emailAddresses:(id)arg3 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSArray *)emailAddresses;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(id)urlRequest;
@end
