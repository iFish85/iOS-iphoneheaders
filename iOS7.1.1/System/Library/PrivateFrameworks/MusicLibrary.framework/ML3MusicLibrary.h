/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3DatabaseConnectionDelegate.h>
#import <MusicLibrary/ML3DatabaseConnectionPoolDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, ML3AccountCacheDatabase, SBCPlaybackPositionServiceProxy, NSMutableDictionary, NSCountedSet, NSMutableArray, _LibraryNotification, ML3ArtworkUtility, ML3DatabaseConnectionPool, NSArray, ML3Container, ML3DatabaseMetadata;

@interface ML3MusicLibrary : NSObject <ML3DatabaseConnectionDelegate, ML3DatabaseConnectionPoolDelegate> {

	NSString* _libraryUID;
	NSObject<OS_dispatch_queue>* _atomicityQueue;
	bool _reloadForMediaServiceNeeded;
	ML3AccountCacheDatabase* _accountCacheDatabase;
	SBCPlaybackPositionServiceProxy* _uppService;
	NSMutableDictionary* _optimizedLibraryEntityFilterPredicatesByEntityClass;
	NSMutableDictionary* _optimizedLibraryContainerFilterPredicatesByContainerClass;
	NSCountedSet* _notifyNamesToIgnore;
	NSMutableArray* _pendingNotifyPostNames;
	NSMutableDictionary* _pendingLocalNotificationsToPost;
	_LibraryNotification* _libraryChangedNotify;
	_LibraryNotification* _nonContentsNotify;
	_LibraryNotification* _invisiblePropertyNotify;
	_LibraryNotification* _displayValuesNotify;
	_LibraryNotification* _syncGenerationNotify;
	_LibraryNotification* _libraryUIDNotify;
	int _systemLanguageChangedToken;
	id _mcSettingsObserver;
	id _loggingObserver;
	int _willDeleteDatabaseNotifyToken;
	ML3ArtworkUtility* _artworkUtility;
	iPhoneSortKeyBuilderRef _sortKeyBuilder;
	bool _isHomeSharingLibraryLoaded;
	bool _isHomeSharingLibrary;
	bool _hasEverConnectedTo;
	bool _keepPresignedValidyAfterVerification;
	ML3DatabaseConnectionPool* _connectionPool;
	NSString* _databasePath;
	NSArray* _libraryEntityFilterPredicates;
	NSArray* _libraryContainerFilterPredicates;

}

@property (retain) ML3DatabaseConnectionPool * connectionPool;                        //@synthesize connectionPool=_connectionPool - In the implementation block
@property (retain) ML3ArtworkUtility * artworkUtility;                                //@synthesize artworkUtility=_artworkUtility - In the implementation block
@property (retain) NSString * databasePath;                                           //@synthesize databasePath=_databasePath - In the implementation block
@property (copy) NSString * libraryUID; 
@property (readonly) long long persistentID; 
@property (readonly) long long currentRevision; 
@property (readonly) long long currentContentRevision; 
@property (assign) long long syncGenerationID; 
@property (readonly) long long autoFilledTracksTotalSize; 
@property (readonly) ML3Container * currentDevicePurchasesPlaylist; 
@property (readonly) ML3DatabaseMetadata * databaseInfo; 
@property (readonly) NSArray * localizedSectionIndexTitles; 
@property (readonly) NSArray * preferredAudioTracks; 
@property (readonly) NSArray * preferredSubtitleTracks; 
@property (assign,nonatomic) bool isHomeSharingLibrary; 
@property (readonly) bool mediaRestrictionEnabled; 
@property (nonatomic,readonly) bool hasEverConnectedToDatabase;                       //@synthesize hasEverConnectedTo=_hasEverConnectedTo - In the implementation block
@property (assign,nonatomic) bool keepPresignedValidyAfterVerification;               //@synthesize keepPresignedValidyAfterVerification=_keepPresignedValidyAfterVerification - In the implementation block
@property (nonatomic,retain) NSArray * libraryEntityFilterPredicates;                 //@synthesize libraryEntityFilterPredicates=_libraryEntityFilterPredicates - In the implementation block
@property (nonatomic,retain) NSArray * libraryContainerFilterPredicates;              //@synthesize libraryContainerFilterPredicates=_libraryContainerFilterPredicates - In the implementation block
@property (nonatomic,readonly) bool supportsUbiquitousPlaybackPositions; 
+(void)buildDatabaseFromHomeSharingLibrary:(id)arg1 atPath:(id)arg2 completionHandler:(/*^block*/ id)arg3 progressHandler:(/*^block*/ id)arg4 ;
+(void)buildDatabaseFromHomeSharingLibrary:(id)arg1 atPath:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
+(id)databasePathForUnitTest:(id)arg1 withBasePath:(id)arg2 ;
+(id)unitTestableLibraryForTest:(id)arg1 basePath:(id)arg2 setupSQLFilenames:(id)arg3 ;
+(id)mediaFolderRelativePath:(id)arg1 ;
+(id)pathForResourceFileOrFolder:(int)arg1 ;
+(id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(bool)arg3 createParentFolderIfNecessary:(bool)arg4 ;
+(id)mediaFolderPath;
+(id)controlDirectoryPathWithBasePath:(id)arg1 ;
+(id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(bool)arg3 isFolder:(bool*)arg4 ;
+(id)pathForBaseLocationPath:(long long)arg1 ;
+(bool)defaultExcludeFromShuffleForMediaType:(unsigned)arg1 ;
+(bool)defaultRememberBookmarkTimeForMediaType:(unsigned)arg1 ;
+(bool)userVersionMatchesSystemUsingConnection:(id)arg1 ;
+(id)allTables;
+(bool)orderingLanguageMatchesSystemUsingConnection:(id)arg1 ;
+(id)sortMapNewSchemaSQL;
+(bool)dropIndexesUsingConnection:(id)arg1 tableNames:(const char*)arg2 ;
+(int)userVersionUsingConnection:(id)arg1 ;
+(id)itemIndexSchemaSQL;
+(id)allPragmaSQL;
+(id)allSchemaSQL;
+(bool)createIndexesUsingConnection:(id)arg1 ;
+(bool)createTriggersUsingConnection:(id)arg1 ;
+(long long)currentUserVersion;
+(bool)buildDatabaseTablesUsingConnection:(id)arg1 popuplateDatabaseTablesOnConnectionBlock:(/*^block*/ id)arg2 ;
+(id)indexSchemaSQL;
+(id)allTriggersSQL;
+(bool)migrateToCurrentUserVersionUsingConnection:(id)arg1 musicLibrary:(id)arg2 ;
+(id)storeLinkSchemaSQL;
+(id)sortMapSchemaSQL;
+(id)itemSchemaSQL;
+(bool)dropIndexesUsingConnection:(id)arg1 ;
+(bool)updateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(bool)arg2 ;
+(bool)inTransactionUpdateSortMapOnConnection:(id)arg1 forceUpdateOriginals:(bool)arg2 ;
+(bool)inTransactionUpdateSearchMapOnConnection:(id)arg1 ;
+(bool)updateSortMapOnConnection:(id)arg1 ;
+(bool)hasArtworkConversionManifestTasksRemainingUsingConnection:(id)arg1 ;
+(void)resetArtworkConversionManifestFormatPairs:(id)arg1 usingConnection:(id)arg2 ;
+(void)disableAutomaticDatabaseArtworkConversion;
+(void)initialize;
+(id)sectionIndexTitles;
+(id)sharedLibrary;
+(id)sharedLibraryDatabasePath;
+(id)_purgeableTrackPredicateWithUrgency:(unsigned long long)arg1 ;
+(void)disableSharedLibrary;
+(void)disableAutomaticDatabaseValidation;
+(void)enableAutomaticDatabaseValidation;
+(bool)processHasDatabaseWritePermissions;
+(bool)importationEnabled;
+(void)setImportationEnabled:(bool)arg1 ;
+(id)localizedSectionHeaderForSectionHeader:(id)arg1 ;
+(id)localizedSectionIndexTitleForSectionHeader:(id)arg1 ;
+(id)sectionIndexTitleForSectionHeader:(id)arg1 ;
+(void)enumerateSortMapTablesUsingBlock:(/*^block*/ id)arg1 ;
+(bool)updateTrackIntegrityOnConnection:(id)arg1 ;
-(void)checkForChangesInHomeSharingLibrary:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)fillContainerForHomeSharingLibrary:(id)arg1 containerID:(long long)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(bool)executeUpdateSQL:(id)arg1 ;
-(void)removeSagaTrackData;
-(void)removeJaliscoTrackData;
-(bool)prepareUnitTestDatabaseWithSQLFromContentsOfFile:(id)arg1 error:(id*)arg2 ;
-(bool)removeSource:(int)arg1 ;
-(bool)removeSource:(int)arg1 fromTracksWithPersistentIDs:(id)arg2 ;
-(id)locationKindForKind:(id)arg1 ;
-(bool)dropItemIndexes;
-(bool)createIndexes;
-(bool)coerceValidDatabase;
-(bool)deleteAndRecreateDatabaseUsingConnection:(id)arg1 ;
-(bool)buildDatabaseTables;
-(bool)removeLocationsForItemsMissingAssets;
-(bool)resetAllContents;
-(bool)populateArtworkCacheWithArtworkData:(id)arg1 trackValues:(id)arg2 ;
-(bool)handleDatabaseValidation;
-(bool)handlePreprocessDatabase;
-(bool)handleSchemaUpgrade;
-(bool)updateSystemPlaylistNamesForCurrentLanguage;
-(void)updateOrderingLanguagesForCurrentLanguage;
-(id)albumArtistForEffectiveAlbumArtistName:(id)arg1 ;
-(id)composerForComposerName:(id)arg1 ;
-(id)genreForGenre:(id)arg1 ;
-(SCD_Struct_ML7)nameOrderForString:(id)arg1 ;
-(long long)insertStringIntoSortMapNoTransaction:(id)arg1 ;
-(id)insertStringsIntoSortMap:(id)arg1 didReSortMap:(bool*)arg2 ;
-(id)insertStringsIntoSortMap:(id)arg1 ;
-(id)albumForAlbumArtistPersistentID:(long long)arg1 albumName:(id)arg2 feedURL:(id)arg3 seasonNumber:(id)arg4 compilation:(bool)arg5 ;
-(id)artistGroupingKeyForArtistName:(id)arg1 seriesName:(id)arg2 ;
-(id)artistForArtistName:(id)arg1 seriesName:(id)arg2 ;
-(id)_artworkMigrator;
-(void)beginAutoConvertingArtworkFormats;
-(void)beginConvertingArtworkFormatsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void).cxx_destruct;
-(void)performDatabaseTransactionWithBlock:(/*^block*/ id)arg1 ;
-(id)artworkUtility;
-(bool)writeToDatabaseArtworkForCacheID:(id)arg1 length:(unsigned long long)arg2 formatID:(unsigned)arg3 imageSubRect:(CGRect)arg4 ;
-(void)performReadOnlyDatabaseTransactionWithBlock:(/*^block*/ id)arg1 ;
-(bool)deleteArtworkForCacheID:(id)arg1 formatID:(unsigned)arg2 deleteAllFromConversionTable:(bool)arg3 ;
-(id)artworkDataForCacheID:(id)arg1 formatID:(unsigned)arg2 ;
-(bool)deleteArtworkForCacheID:(id)arg1 formatID:(unsigned)arg2 ;
-(id)valueForDatabaseProperty:(id)arg1 ;
-(bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(id)checkoutWriterConnection;
-(void)deleteFromArtworkConversionForCacheID:(id)arg1 fromFormatID:(unsigned)arg2 toFormatID:(unsigned)arg3 ;
-(void)notifyDisplayValuesPropertyDidChange;
-(void)checkInDatabaseConnection:(id)arg1 ;
-(bool)keepPresignedValidyAfterVerification;
-(void)databaseConnectionAllowingWrites:(bool)arg1 withBlock:(/*^block*/ id)arg2 ;
-(bool)insertArtworkWithImageData:(id)arg1 artworkCreationDirective:(SCD_Struct_ML4)arg2 forCacheID:(id)arg3 ;
-(long long)persistentID;
-(void)notifyContentsDidChange;
-(bool)isCurrentThreadInTransaction;
-(void)notifyNonContentsPropertyDidChange;
-(void)notifyInvisiblePropertyDidChange;
-(void)enumeratePersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(unsigned long long)arg2 maximumRevisionType:(int)arg3 usingBlock:(/*^block*/ id)arg4 ;
-(id)connectionPool;
-(id)initWithPath:(id)arg1 readOnly:(bool)arg2 populateUnitTestTablesBlock:(/*^block*/ id)arg3 ;
-(void)_enqueueLocalNotificationName:(id)arg1 isSourceExternal:(bool)arg2 ;
-(void)_updateDatabaseConnectionsProfilingLevel;
-(void)_delayableNotifyPost:(id)arg1 localNotificationName:(id)arg2 ;
-(id)databaseInfo;
-(bool)validateDatabaseWithTimeout:(double)arg1 ;
-(bool)_canConfigureMediaLibraryDatabaseConnection:(id)arg1 ;
-(void)_configureMediaLibraryDatabaseConnection:(id)arg1 ;
-(void)_teardownMediaLibraryDatabaseConnection:(id)arg1 ;
-(id)checkoutReaderConnection;
-(id)uppService;
-(void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1 ;
-(void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1 ;
-(void)accessSortKeyBuilder:(/*^block*/ id)arg1 ;
-(void)_postChangeNotificationAndScheduleFlushLocalOnly:(bool)arg1 ;
-(void)_postNonContentsChangeNotificationAndScheduleFlushLocalOnly:(bool)arg1 ;
-(void)_postInvisiblePropertyChangeNotificationAndScheduleFlushLocalOnly:(bool)arg1 ;
-(void)_postDisplayValuesChangeNotificationLocalOnly:(bool)arg1 ;
-(void)saveTrackMetadataSinceRevision:(long long)arg1 withGrappaID:(unsigned)arg2 ;
-(void)savePlaylistsSinceRevision:(long long)arg1 withGrappaID:(unsigned)arg2 ;
-(long long)autoFilledTracksTotalSizeWithUrgency:(unsigned long long)arg1 ;
-(long long)autoFilledTracksTotalSizeWithUrgency:(unsigned long long)arg1 respectSongMattress:(bool)arg2 ;
-(long long)getDatabaseFileFreeSpace;
-(void)_enumeratePurgeableTracksForUrgency:(unsigned long long)arg1 respectSongMattress:(bool)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(unsigned long long)arg2 ;
-(long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 urgency:(unsigned long long)arg2 respectSongMattress:(bool)arg3 ;
-(void)purgeCloudAssets;
-(bool)compactArtwork;
-(id)_existingArtworkDataForCacheID:(id)arg1 formatID:(unsigned)arg2 ;
-(bool)insertArtworkWithImageData:(id)arg1 forCacheID:(id)arg2 forFormatID:(unsigned)arg3 ;
-(id)_artworkDataForCacheID:(id)arg1 formatID:(unsigned)arg2 canCreateIfMissing:(bool)arg3 ;
-(bool)hasArtworkForCacheID:(id)arg1 ensureArtworkFileExists:(bool)arg2 ;
-(bool)deleteArtworkForCacheID:(id)arg1 ;
-(bool)verifyPresignedValidity;
-(void)updateTrackIntegrity;
-(void)deletePresignedValidity;
-(void)_enqueueNotifyPostName:(id)arg1 ;
-(void)connectionWillOpenDatabase:(id)arg1 ;
-(void)connectionDidOpenDatabase:(id)arg1 ;
-(void)connectionWillCloseDatabase:(id)arg1 ;
-(void)connectionPool:(id)arg1 createdNewConnection:(id)arg2 ;
-(bool)isHomeSharingLibrary;
-(void)setIsHomeSharingLibrary:(bool)arg1 ;
-(long long)currentRevision;
-(long long)currentContentRevision;
-(void)setSyncGenerationID:(long long)arg1 ;
-(long long)syncGenerationID;
-(id)libraryUID;
-(void)setLibraryUID:(id)arg1 ;
-(id)currentDevicePurchasesPlaylist;
-(id)localizedSectionIndexTitles;
-(id)preferredAudioTracks;
-(id)preferredSubtitleTracks;
-(bool)mediaRestrictionEnabled;
-(void)setLibraryEntityFilterPredicates:(id)arg1 ;
-(void)setLibraryContainerFilterPredicates:(id)arg1 ;
-(id)libraryEntityFilterPredicatesForEntityClass:(Class)arg1 ;
-(id)libraryEntityFilterPredicatesForContainerClass:(Class)arg1 ;
-(void)reconnectToDatabase;
-(bool)automaticDatabaseValidationDisabled;
-(bool)emptyAllTables;
-(id)accountCacheDatabase;
-(bool)supportsUbiquitousPlaybackPositions;
-(bool)populateStaticItemsOfDynamicContainers;
-(id)groupingKeyForString:(id)arg1 ;
-(id)groupingKeysForStrings:(id)arg1 ;
-(id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1 ;
-(unsigned long long)sectionIndexTitleIndexForSectionIndex:(unsigned long long)arg1 ;
-(void)saveTrackMetadata;
-(void)savePlaylists;
-(bool)requiresSchemaOnlyUpdatesOnConnection:(id)arg1 ;
-(bool)requiresNonSchemaUpdatesOnConnection:(id)arg1 ;
-(long long)addStringToSortMap:(id)arg1 ;
-(bool)updateSortMap;
-(void)enumeratePersistentIDsAfterRevision:(long long)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)getChangedPersistentIDsAfterRevision:(long long)arg1 revisionTrackingCode:(long long)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(bool)persistentID:(long long)arg1 changedAfterRevision:(long long)arg2 revisionTrackingCode:(long long)arg3 ;
-(long long)autoFilledTracksTotalSize;
-(long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)arg1 ;
-(void)loadArtworkForCacheID:(id)arg1 formatID:(unsigned)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(bool)hasArtworkForCacheID:(id)arg1 ;
-(void)updateArtworkFormatsWithArtworkCreationDirective:(SCD_Struct_ML4)arg1 forCacheID:(id)arg2 ;
-(bool)deleteAllArtwork;
-(void)removeTombstonesForDeletedItems;
-(void)removeOrphanedTracks;
-(bool)deleteDatabaseProperty:(id)arg1 ;
-(void)migratePresignedValidity;
-(bool)hasPresignedValidity;
-(id)_newGeniusDBConnectionAtPath:(id)arg1 ;
-(bool)hasEverConnectedToDatabase;
-(void)setKeepPresignedValidyAfterVerification:(bool)arg1 ;
-(void)setConnectionPool:(id)arg1 ;
-(void)setArtworkUtility:(id)arg1 ;
-(void)setDatabasePath:(id)arg1 ;
-(id)libraryEntityFilterPredicates;
-(id)libraryContainerFilterPredicates;
-(id)databasePath;
@end

