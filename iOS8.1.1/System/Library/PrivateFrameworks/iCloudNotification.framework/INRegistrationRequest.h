/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/ind
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <ind/INRequest.h>

@interface INRegistrationRequest : INRequest {

	unsigned long long _registrationReason;

}

@property (assign,nonatomic) unsigned long long registrationReason;              //@synthesize registrationReason=_registrationReason - In the implementation block
+(id)bodyParameterValueForRegistrationReason:(unsigned long long)arg1 ;
+(Class)responseClass;
-(id)addBodyParameters:(id)arg1 ;
-(unsigned long long)registrationReason;
-(void)setRegistrationReason:(unsigned long long)arg1 ;
-(id)urlString;
@end

