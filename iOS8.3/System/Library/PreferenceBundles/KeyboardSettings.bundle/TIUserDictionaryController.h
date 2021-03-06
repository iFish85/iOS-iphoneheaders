/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:59:25 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <KeyboardSettings/TIUserDictionaryUpdater.h>

@class NSPersistentStoreCoordinator, NSManagedObjectContext, NSPersistentStore, NSMutableArray, NSArray;

@interface TIUserDictionaryController : TIUserDictionaryUpdater {

	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectContext* _managedObjectContext;
	NSPersistentStore* _persistentStore;
	NSMutableArray* _pendingTransactions;
	NSArray* _cachedEntries;

}

@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSPersistentStore * persistentStore;                                      //@synthesize persistentStore=_persistentStore - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingTransactions;                                   //@synthesize pendingTransactions=_pendingTransactions - In the implementation block
@property (nonatomic,retain) NSArray * cachedEntries;                                                  //@synthesize cachedEntries=_cachedEntries - In the implementation block
-(NSPersistentStore *)persistentStore;
-(id)entityDescription;
-(void)dealloc;
-(id)init;
-(void)reset;
-(id)entries;
-(NSManagedObjectContext *)managedObjectContext;
-(char)canValidateLocally;
-(void)openConnectionToKBD;
-(void)didPerformTransaction:(id)arg1 success:(char)arg2 ;
-(void)userDictionaryStoreDidImportChanges:(id)arg1 ;
-(void)userDictionaryStoreURLChanged:(id)arg1 ;
-(void)loadPersistentStore;
-(void)loadPersistentStoreAtURL:(id)arg1 ;
-(void)setCachedEntries:(NSArray *)arg1 ;
-(void)applyTransactionToLocalContext:(id)arg1 ;
-(NSArray *)cachedEntries;
-(id)indexesOfConsecutiveDuplicatesInEntries:(id)arg1 ;
-(void)setPersistentStore:(NSPersistentStore *)arg1 ;
-(void)performTransaction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(NSMutableArray *)pendingTransactions;
@end

