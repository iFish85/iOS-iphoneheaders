/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:32 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@interface CKDGetUserPrivacySettingsOperation : CKDOperation {

	int _discoverable;

}

@property (assign,nonatomic) int discoverable;              //@synthesize discoverable=_discoverable - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(int)discoverable;
-(void)setDiscoverable:(int)arg1 ;
-(void)_handleRetrievedPrivacySettings:(id)arg1 ;
@end

