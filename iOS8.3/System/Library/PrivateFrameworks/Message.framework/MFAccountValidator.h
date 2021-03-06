/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:30:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class MFAccount, MFActivityMonitor, MFMonitoredInvocation, MFError, NSArray;

@interface MFAccountValidator : NSObject {

	MFAccount* _account;
	MFActivityMonitor* _accountValidationActivity;
	MFMonitoredInvocation* _validationInvocation;
	/*^block*/id _completionBlock;
	struct {
		unsigned useSSL : 1;
		unsigned incomingServerSupportsSSL : 1;
		unsigned smtpServerSupportsSSL : 1;
		unsigned canceled : 1;
		unsigned performsValidationInBackground : 1;
		unsigned unused : 27;
	}  _flags;
	MFError* _incomingServerValidationError;
	MFError* _smtpServerValidationError;
	NSArray* _incomingServerAuthSchemes;
	NSArray* _smtpServerAuthSchemes;
	id _delegate;

}

@property (assign,nonatomic) id delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char accountIsValid; 
@property (nonatomic,readonly) char accountSupportsSSL; 
@property (nonatomic,readonly) MFError * error; 
@property (nonatomic,readonly) MFAccount * account; 
@property (nonatomic,readonly) char performsValidationInBackground; 
@property (nonatomic,readonly) MFMonitoredInvocation * validationInvocation; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)stop;
-(MFError *)error;
-(MFAccount *)account;
-(id)initWithPerformsValidationInBackground:(char)arg1 ;
-(void)validateAccount:(id)arg1 useSSL:(char)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_validateAccount:(id)arg1 withFallbacks:(char)arg2 ;
-(void)validateAccountWithoutFallbacks:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_backgroundValidateAccountFinished:(id)arg1 authSchemes:(id)arg2 ;
-(void)_validateAccount:(id)arg1 ;
-(void)_validateAccountWithoutFallbacks:(id)arg1 ;
-(char)performsValidationInBackground;
-(char)_outgoingServerValid;
-(char)_incomingServerValid;
-(void)validateAccount:(id)arg1 useSSL:(char)arg2 ;
-(void)validateAccountWithoutFallbacks:(id)arg1 ;
-(void)cancelValidation;
-(id)_ispAccountInfo;
-(char)accountValidationCanceled;
-(MFMonitoredInvocation *)validationInvocation;
-(char)accountIsValid;
-(char)accountSupportsSSL;
@end

