/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/Support/com.apple.sbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <com.apple.sbd/SecureBackupProtocol.h>
#import <com.apple.sbd/NSXPCListenerDelegate.h>

@class NSURL, NSString;

@interface SecureBackupDaemon : NSObject <SecureBackupProtocol, NSXPCListenerDelegate> {

	NSURL* _cacheDirURL;

}

@property (retain) NSURL * cacheDirURL;                             //@synthesize cacheDirURL=_cacheDirURL - In the implementation block
@property (retain,readonly) NSURL * cachedKeychainURL; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleKVStoreChangedNotification:(id)arg1 ;
-(void)_migrate;
-(NSURL *)cachedKeychainURL;
-(NSURL *)cacheDirURL;
-(void)_cacheProtectedKeychain:(id)arg1 keybagDigest:(id)arg2 ;
-(void)_storeProtectedKeychainInKVS:(id)arg1 keybagDigest:(id)arg2 ;
-(id)_getProtectedKeychainAndKeybagDigestFromKVS:(id*)arg1 ;
-(void)_removeCachedKeychain;
-(id)_getKeychainItemForKey:(id)arg1 status:(int*)arg2 ;
-(id)_backupKeychain;
-(id)_pushCachedKeychainToKVS;
-(char)_backupEnabled;
-(id)_setAutobackupEnabled:(char)arg1 ;
-(char)_usesEscrow;
-(int)_checkEscrowTrust;
-(id)_metadata;
-(id)_getProtectedKeychainAndKeybagDigest:(id*)arg1 ;
-(id)_KVSKeybag;
-(void)_storeProtectedKeychain:(id)arg1 currentBackup:(id)arg2 keybagDigest:(id)arg3 ;
-(void)_removeKeychainItemForKey:(id)arg1 ;
-(void)_removeKVSKeybag;
-(void)_removeMetadata;
-(void)_removeProtectedKeychain;
-(void)_setBackupEnabled:(char)arg1 ;
-(id)_createBackupKeybagWithPassword:(id)arg1 ;
-(void)_saveKeychainItem:(id)arg1 forKey:(id)arg2 ;
-(id)_getLastBackupTimestamp;
-(void)_setUsesEscrow:(char)arg1 ;
-(void)_removeUsesEscrow;
-(void)_setBackupUUID:(id)arg1 ;
-(id)_getBackupUUID;
-(void)_setKVSKeybag:(id)arg1 ;
-(void)_disableBackup;
-(id)normalizeSMSTarget:(id)arg1 error:(id*)arg2 ;
-(void)setCacheDirURL:(NSURL *)arg1 ;
-(id)_restoreKeychainWithBackupBag:(id)arg1 password:(id)arg2 ;
-(void)_setMetadata:(id)arg1 ;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)getAccountInfoWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)enableWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)recoverWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)disableWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)cachePassphraseWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)uncachePassphraseWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)changeSMSTargetWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)startSMSChallengeWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)backupWithInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)cachePassphraseWithInfoAsync:(id)arg1 ;
-(void)uncachePassphraseWithInfoAsync:(id)arg1 ;
-(void)_handleNotification:(id)arg1 ;
@end

