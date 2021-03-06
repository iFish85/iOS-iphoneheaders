/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:14:53 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CPDistributedMessagingCenter, NSString;

@interface MCInteractionClient : NSObject {

	CPDistributedMessagingCenter* _client;
	NSString* _defaultStatus;
	NSString* _lastStatus;

}

@property (nonatomic,retain) NSString * defaultStatus; 
-(id)initWithClientCenter:(id)arg1 ;
-(BOOL)didFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2 ;
-(BOOL)didUpdateStatus:(id)arg1 ;
-(BOOL)requestUserInput:(id)arg1 delegate:(id)arg2 outResult:(id*)arg3 ;
-(BOOL)showUserWarnings:(id)arg1 outResult:(BOOL*)arg2 ;
-(BOOL)didBeginInstallingNextProfileData:(id)arg1 ;
-(BOOL)requestCurrentPasscodeOutPasscode:(id*)arg1 ;
-(id)defaultStatus;
-(void)setDefaultStatus:(id)arg1 ;
-(void).cxx_destruct;
@end

