/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:33:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/Support/softwarebehaviorservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBManagerServerInterface
@required
-(void)setSoftwareBehaviorID:(id)arg1 withBundle:(id)arg2 replyHandler:(/*^block*/id)arg3;
-(void)isSoftwareBehaviorBundleSupported:(/*^block*/id)arg1;
-(void)copySoftwareBehaviorValue:(id)arg1 replyHandler:(/*^block*/id)arg2;
-(void)checkForSoftwareBehaviorBundleUpdate:(/*^block*/id)arg1;
-(void)setClientType:(int)arg1 withResult:(/*^block*/id)arg2;

@end

