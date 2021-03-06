/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccountUI/AAUIFamilySetupDelegate.h>

@protocol AAUIFamilySetupPrompterDelegate;
@class ACAccountStore, ACAccount, SSAccount, UIViewController, NSOperationQueue, NSString;

@interface AAUIFamilySetupPrompter : NSObject <AAUIFamilySetupDelegate> {

	ACAccountStore* _accountStore;
	ACAccount* _appleAccount;
	ACAccount* _grandSlamAccount;
	SSAccount* _iTunesAccount;
	UIViewController* _presentingViewController;
	NSOperationQueue* _networkingQueue;
	BOOL _isRequestInFlight;
	id<AAUIFamilySetupPrompterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUIFamilySetupPrompterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<AAUIFamilySetupPrompterDelegate>)arg1 ;
-(id)init;
-(id<AAUIFamilySetupPrompterDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithiTunesAccount:(id)arg1 ;
-(void)_handleFamilyEligibilityResponse:(id)arg1 isFirstRun:(BOOL)arg2 ;
-(void)_showUnderageAlertWithEligibilityResponse:(id)arg1 ;
-(void)_showConfirmationForStartingFamilySetupWithPendingInvite;
-(void)_showConfirmationForStartingFamilySetup;
-(void)_showPendingInvitesDialog;
-(void)_startFamilySetupFlowWithEligibilityResponse:(id)arg1 ;
-(void)_goToInvitations;
-(void)_goToFamilySetup;
-(void)promptIfEligibleWithPresentingViewController:(id)arg1 isFirstRun:(BOOL)arg2 ;
-(void)familySetupViewController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 ;
@end

