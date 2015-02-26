/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <passd/PDPushNotificationConsumer.h>
#import <passd/PDDatabaseManagerPaymentServicesDelegate.h>
#import <passd/PKPaymentProvisioningServiceDelegate.h>
#import <passd/PKPaymentBackgroundProvisioningServiceDelegate.h>
#import <passd/PKSecureElementConsistencyCheckerDelegate.h>

@protocol OS_dispatch_queue;
@class PDPushNotificationManager, PDDatabaseManager, PDCardFileManager, PDSecureElement, PDBulletinManager, PKPaymentWebService, NSObject, PKPaymentWebServiceContext, NSString;

@interface PDPaymentWebServiceCoordinator : NSObject <PDPushNotificationConsumer, PDDatabaseManagerPaymentServicesDelegate, PKPaymentProvisioningServiceDelegate, PKPaymentBackgroundProvisioningServiceDelegate, PKSecureElementConsistencyCheckerDelegate> {

	PDPushNotificationManager* _pushNotificationManager;
	PDDatabaseManager* _databaseManager;
	PDCardFileManager* _cardFileManager;
	PDSecureElement* _secureElement;
	PDBulletinManager* _bulletinManager;
	PKPaymentWebService* _sharedWebService;
	NSObject*<OS_dispatch_queue> _sharedWebServiceQueue;

}

@property (nonatomic,readonly) PKPaymentWebServiceContext * sharedWebServiceContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPushNotificationManager:(id)arg1 databaseManager:(id)arg2 cardFileManager:(id)arg3 secureElement:(id)arg4 bulletinManager:(id)arg5 ;
-(void)updateWebServiceConfiguration;
-(void)deleteSharedWebService;
-(void)initiateDevicePassesDownload;
-(PKPaymentWebServiceContext *)sharedWebServiceContext;
-(void)updateSharedWebServiceContext:(id)arg1 ;
-(void)_queue_setupBackgroundWebService;
-(void)performConsistencyCheckWithCompletion:(/*^block*/id)arg1 ;
-(void)_checkVerificationStatusForUniqueID:(id)arg1 ;
-(id)sharedWebService;
-(void)_fetchPassesIfNecessary;
-(void)_registerWithPaymentWebService:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_scheduleVerificationCheckForPass:(id)arg1 onDate:(id)arg2 ;
-(id)pushNotificationTopics;
-(void)handlePushNotificationForTopic:(id)arg1 ;
-(void)applyPushNotificationToken:(id)arg1 ;
-(void)handleInsertionForPaymentPass:(id)arg1 ;
-(void)handleDeletionForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forPass:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)initiateConsistencyCheck;
-(void)_handleDownloadedPass:(id)arg1 ;
-(void)dealloc;
-(void)connect;
-(void)passAdded:(id)arg1 ;
-(void)removePassWithUniqueID:(id)arg1 ;
-(id)paymentApplications;
-(void)paymentWebService:(id)arg1 didDownloadPassRemoteAssets:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 didDownloadSerialNumbersForInstalledPasses:(id)arg2 ;
-(void)paymentWebService:(id)arg1 didDownloadPass:(id)arg2 ;
-(void)shouldArchiveContext:(id)arg1 ;
-(void)shouldArchiveBackgroundContext:(id)arg1 ;
-(id)secureElementCards;
-(void)scheduleConsistencyCheck:(id)arg1 pluggedIn:(BOOL)arg2 ;
-(void)deleteCardsWithAIDs:(id)arg1 ;
-(BOOL)synchronizeWithTSM;
-(id)paymentPasses;
-(void)didDownloadPaymentPass:(id)arg1 ;
@end
