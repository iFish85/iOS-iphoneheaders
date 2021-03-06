/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDSystemAvailabilityWatcher.h>
#import <CloudKitDaemon/CKXPCDaemon.h>

@protocol OS_dispatch_queue;
@class CKDClientContext, NSOperationQueue, NSString, NSXPCConnection, NSObject, CKWatchdog, NSArray, NSMutableArray, NSMutableSet;

@interface CKDClientProxy : NSObject <CKDSystemAvailabilityWatcher, CKXPCDaemon> {

	CKDClientContext* _context;
	BOOL _sandboxed;
	BOOL _canUsePackages;
	BOOL _canOpenByID;
	int _pid;
	NSOperationQueue* _operationQueue;
	NSString* _procName;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _setupQueue;
	NSObject*<OS_dispatch_queue> _cancellationQueue;
	NSOperationQueue* _backgroundOperationThrottleQueue;
	NSString* _bundleIdentifier;
	CKWatchdog* _watchdog;
	NSString* _cachedSourceApplicationBundleIdentifier;
	NSArray* _cachedSandboxExtensions;
	NSMutableArray* _pendingContexts;
	NSMutableSet* _pendingOperationIDs;

}

@property (nonatomic,readonly) CKDClientContext * context; 
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) int pid;                                                        //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSString * procName;                                            //@synthesize procName=_procName - In the implementation block
@property (assign,getter=isSandboxed,nonatomic) BOOL sandboxed;                                //@synthesize sandboxed=_sandboxed - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CK2 auditToken; 
@property (assign,nonatomic,__weak) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> setupQueue;                          //@synthesize setupQueue=_setupQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cancellationQueue;                   //@synthesize cancellationQueue=_cancellationQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * backgroundOperationThrottleQueue;              //@synthesize backgroundOperationThrottleQueue=_backgroundOperationThrottleQueue - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) CKWatchdog * watchdog;                                            //@synthesize watchdog=_watchdog - In the implementation block
@property (nonatomic,retain) NSString * cachedSourceApplicationBundleIdentifier;               //@synthesize cachedSourceApplicationBundleIdentifier=_cachedSourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * cachedSandboxExtensions;                                //@synthesize cachedSandboxExtensions=_cachedSandboxExtensions - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingContexts;                                 //@synthesize pendingContexts=_pendingContexts - In the implementation block
@property (assign,nonatomic) BOOL canUsePackages;                                              //@synthesize canUsePackages=_canUsePackages - In the implementation block
@property (assign,nonatomic) BOOL canOpenByID;                                                 //@synthesize canOpenByID=_canOpenByID - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingOperationIDs;                               //@synthesize pendingOperationIDs=_pendingOperationIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedClientThrottlingOperationQueue;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(CKDClientContext *)context;
-(void)setContext:(CKDClientContext *)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(SCD_Struct_CK2)auditToken;
-(BOOL)isSandboxed;
-(NSOperationQueue *)operationQueue;
-(id)statusReport;
-(void)cancelOperationWithIdentifier:(id)arg1 ;
-(void)accountStatusWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)currentUserIDWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)statusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getSandboxExtensionsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performDiscoverUserInfosOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performDiscoverAllContactsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchUserIdentitiesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchRecordsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performModifyRecordsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchRecordChangesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchRecordVersionsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performPublishAssetsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performModifyWebSharingOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)getNewWebSharingIdentityWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performModifyRecordAccessOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performQueryOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performModifySubscriptionsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchSubscriptionsOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performModifyRecordZonesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchRecordZonesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchChangedRecordZonesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performModifyBadgeOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchNotificationChangesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performMarkNotificationsReadOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchSharesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performModifySharesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performAcceptSharesOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchShareInfoOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchUserQuotaOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)performFetchWebAuthTokenOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)serverPreferredPushEnvironmentWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2 setupInfo:(id)arg3 ;
-(void)clearAssetCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 ;
-(void)clearRecordCacheWithSetupInfo:(id)arg1 databaseScope:(long long)arg2 ;
-(void)clearAuthTokensWithSetupInfo:(id)arg1 recordID:(id)arg2 databaseScope:(long long)arg3 ;
-(void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2 ;
-(void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2 ;
-(void)accountsWillDeleteAccount:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)accountChangedWithID:(id)arg1 ;
-(void)setApplicationPermission:(unsigned long long)arg1 enabled:(BOOL)arg2 setupInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)resetAllApplicationPermissionsWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)statusGroupsForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)wipeAllCachesAndDie;
-(void)updatePushTokens;
-(void)getPCSDiagnosticsForZonesWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)repairZonePCSWithOperationInfo:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)tossConfigWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)procName;
-(void)tearDown;
-(void)_setupOperationQueues;
-(void)systemAvailabilityChanged:(BOOL)arg1 ;
-(NSOperationQueue *)backgroundOperationThrottleQueue;
-(CKWatchdog *)watchdog;
-(BOOL)_hasEntitlementForKey:(id)arg1 ;
-(BOOL)_hasMasqueradingEntitlement;
-(id)_clientPrefixEntitlement;
-(NSMutableSet *)pendingOperationIDs;
-(NSObject*<OS_dispatch_queue>)setupQueue;
-(void)_startClientSetupWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)cancellationQueue;
-(BOOL)_isConnectionAuthorizedForOperation:(id)arg1 error:(id*)arg2 ;
-(long long)_accountStatusWithClientContext:(id)arg1 ;
-(void)_setupClientWithSetupInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)_applicationPermissionStatusFromUserPrivacySetting:(long long)arg1 ;
-(void)_addOperationWithOperationInfo:(id)arg1 factoryBlock:(/*^block*/id)arg2 ;
-(void)_globalStatusForApplicationPermission:(unsigned long long)arg1 setupInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setApplicationPermission:(unsigned long long)arg1 enabled:(BOOL)arg2 setupInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2 ;
-(void)_handleCompletionForOperation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSString *)cachedSourceApplicationBundleIdentifier;
-(BOOL)_hasCustomAccountsEntitlement;
-(BOOL)_hasEnvironmentEntitlement;
-(void)setCachedSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setCachedSandboxExtensions:(NSArray *)arg1 ;
-(NSMutableArray *)pendingContexts;
-(void)forceFinishClientSetupWithClientContext:(id)arg1 ;
-(NSArray *)cachedSandboxExtensions;
-(void)_finishClientSetupWithClientContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canOpenByID;
-(int)pid;
-(BOOL)canUsePackages;
-(BOOL)hasProtectionDataEntitlement;
-(BOOL)hasDeviceIdentifierEntitlement;
-(BOOL)hasCloudKitSystemServiceEntitlement;
-(BOOL)hasDarkWakeNetworkReachabilityEnabledEntitlement;
-(id)apsEnvironmentEntitlement;
-(BOOL)usePublicTokenEntitlement;
-(BOOL)darkWakeEnabledEntitlement;
-(BOOL)canReadMMCSItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)canUsePackagesWithError:(id*)arg1 ;
-(void)setSandboxed:(BOOL)arg1 ;
-(void)setSetupQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCancellationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setBackgroundOperationThrottleQueue:(NSOperationQueue *)arg1 ;
-(void)setWatchdog:(CKWatchdog *)arg1 ;
-(void)setPendingContexts:(NSMutableArray *)arg1 ;
-(void)setCanUsePackages:(BOOL)arg1 ;
-(void)setCanOpenByID:(BOOL)arg1 ;
-(void)setPendingOperationIDs:(NSMutableSet *)arg1 ;
-(id)initWithConnection:(id)arg1 ;
@end

