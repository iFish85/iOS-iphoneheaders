/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSObject, PLMomentAnalyzerWorkThread, PLXPCTransaction, NSMutableOrderedSet, NSMutableSet, NSDateFormatter, PLPhotoLibrary, NSDictionary, CLLocation, GEOPlace, NSString, NSOrderedSet, NSDate;

@interface PLMomentAnalyzer : NSObject {

	NSObject<OS_dispatch_queue>* _workQueue;
	PLMomentAnalyzerWorkThread* _geoWorkThread;
	unsigned _mode;
	double _analysisStartTime;
	BOOL _delayedSavePending;
	unsigned _objectUpdatesSinceSave;
	PLXPCTransaction* _keepAliveTransaction;
	NSMutableOrderedSet* _pendingGEORequests;
	NSMutableSet* _activeGEORequests;
	NSMutableSet* _processingMomentUuids;
	NSMutableSet* _megaMomentListIdsToProcess;
	NSMutableSet* _yearMomentListIdsToProcess;
	NSDateFormatter* _shortDateFormatter;
	NSDateFormatter* _dayOfTheWeekDateFormatter;
	PLPhotoLibrary* _photoLibrary;
	BOOL _analyzingAllMoments;
	BOOL _skippedMomentsDuringAnalysis;
	BOOL _passSuccess;
	void* _addressBook;
	unsigned _errorState;
	int _errorBackoffLevel;
	int _triesAtCurrentBackoffLevel;
	BOOL _networkObservingReachability;
	BOOL _needToUpdateInvalidMomentsWhenPossible;
	NSDictionary* _homeAddressDictionary;
	CLLocation* _homeLocation;
	GEOPlace* _homePlace;
	NSString* _languageAndLocale;
	NSString* _lastGeoProviderId;
	NSOrderedSet* _defaultDominantGeoOrderingForMoment;
	NSOrderedSet* _defaultSecondaryLocationGeoOrderingForMoment;
	NSOrderedSet* _defaultDominantGeoOrderingForMegaMoment;
	NSOrderedSet* _defaultSecondaryLocationGeoOrderingForMegaMoment;
	NSOrderedSet* _defaultSecondaryGeoOrderingForYear;
	double _lastNetworkForcedAbortTime;
	double _timeToWaitBeforeNextRequest;
	double _lastRevGeoRequestTime;
	NSDate* _lastGeoVersionFileFetchDate;
	unsigned _lastGeoVersionFileVersion;
	NSDictionary* _serverVersionInfo;
	double _lastServerVersionInfoFetchAttemptTime;
	unsigned _currentRevGeoServerVersionNum;
	BOOL _pendingServerVersionInfoFetch;
	BOOL _addCountyIfNeeded;
	BOOL _noResultErrorIsSuccess;
	double _revGeoServerVersionInfoFetchNewVersionInterval;
	NSString* _revGeoServerVersionInfoURL;
	NSString* _currentProviderId;
	BOOL _momentAnalysisPaused;

}

@property (nonatomic,readonly) PLPhotoLibrary * _photoLibrary; 
@property (nonatomic,readonly) void* _addressBook; 
@property (nonatomic,readonly) CLLocation * _homeLocation; 
+(id)sharedInstance;
+(BOOL)hasCompletedMomentsAndMomentListAnalysisInLibrary:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)pauseMomentAnalysis;
-(void)resumeMomentAnalysis;
-(id)_photoLibrary;
-(void)updateInfoForAllMoments;
-(void)_updateInformationForGeoProviderIfNeededOnWorkQueue;
-(void)_updateDateFormattersForLocale:(id)arg1 ;
-(void)_finalizeInitOnWorkQueue;
-(void)_fetchServerVersionInfo;
-(id)_metadataPath;
-(id)_locationFromDictionary:(id)arg1 ;
-(void)_saveGlobalMetadata;
-(BOOL)_updateHomeAddressIfNeeded;
-(BOOL)_updateLanguageIfNeeded;
-(void)_countryCodeChanged:(id)arg1 ;
-(void)_updateRevGeoServerFetchInfoConfig;
-(void)_updateInformationForGeoProviderIfNeeded;
-(void)_updateCurrentProviderId;
-(void)_updateInfoForAllMomentsWithReAnalyzeType:(unsigned)arg1 ;
-(BOOL)_loadServerVersionInfo;
-(void)_checkForNewServerVersionInfoIfNeeded;
-(void)_processNextTransaction;
-(void)_runBlockOnWorkQueue:(/*^block*/ id)arg1 ;
-(id)_serverVersionInfoFilePath;
-(void)_updateLocalServerVersionInfo:(id)arg1 ;
-(id)_currentProviderId;
-(void)_updateErrorStateWithSuccess:(BOOL)arg1 errorType:(unsigned)arg2 ;
-(void)_startObservingReachabilityChanges;
-(unsigned)_errorTypeForError:(id)arg1 ;
-(id)_dictionaryFromLocation:(id)arg1 ;
-(id)_currentHomeAddressDictionary;
-(void)_updateHomeLocation;
-(void)_updateCurrentProviderIdWithCountryCode:(id)arg1 ;
-(void)_forwardGeocodeAddressDictionary:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void*)_addressBook;
-(id)_addressDictionaryForABRecord:(void*)arg1 identifier:(int)arg2 ;
-(void)_reAnalyzeCachedDataAndProcessOnlyHomeChanges:(BOOL)arg1 ;
-(void)_forwardGeocodeAddressDictionaryOnGeoThread:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_setErrorState:(unsigned)arg1 ;
-(void)_finishedProcessingMomentWithUuid:(id)arg1 withSuccess:(BOOL)arg2 ;
-(BOOL)_isNetworkReachable;
-(void)_resetErrorState;
-(BOOL)_startingToProcessMomentWithUuid:(id)arg1 ;
-(void)_addRevGeoPlacesFromAssets:(id)arg1 toPlacesArray:(id)arg2 ;
-(void)_updateAllInfoInCompoundNameInfo:(id)arg1 andCompoundSecondaryNameInfo:(id)arg2 withRevGeoPlaces:(id)arg3 includeHome:(BOOL)arg4 primaryGeoOrderingSet:(id)arg5 secondaryGeoOrderingSet:(id)arg6 ;
-(BOOL)_updateHomeLocationInRevGeoInfo:(id)arg1 forLocation:(id)arg2 withHomeLocation:(id)arg3 ;
-(void)_finalizeDataForMoment:(id)arg1 withMomentLocationInfo:(id)arg2 success:(BOOL)arg3 ;
-(void)_saveDataIfReachedObjectChangeThreshold;
-(void)_finishedGEORequestInfo:(id)arg1 withSuccess:(BOOL)arg2 errorType:(unsigned)arg3 ;
-(void)_removeKeepAlive;
-(void)_saveNow;
-(void)_runOnWorkQueueAferSeconds:(double)arg1 block:(/*^block*/ id)arg2 ;
-(void)_updateKeepAlive;
-(void)_stopObservingReachabilityChanges;
-(void)_saveDataIfNeededAfterTimeDiff:(double)arg1 ;
-(void)_processPendingGEORequests;
-(void)_processMegaMomentLists;
-(void)_processYearMomentLists;
-(void)_analysisComplete;
-(void)_processNextAnalysisTransaction;
-(void)_waitForReachability;
-(void)_processGEORequestWithRequestInfo:(id)arg1 ;
-(unsigned)_processMegaMomentList:(id)arg1 ;
-(id)_updateDominantInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 defaultGeoOrderingSet:(id)arg3 includeAllPlaces:(BOOL)arg4 includeHome:(BOOL)arg5 homeAtEnd:(BOOL)arg6 outOtherNonDominantPlaces:(id)arg7 outOrdersCheckedOrUsed:(id)arg8 outOrderUsed:(unsigned*)arg9 outUsedHome:(BOOL*)arg10 ;
-(unsigned)_processYearMomentList:(id)arg1 ;
-(void)_setLocationDataValidForMomentId:(id)arg1 ;
-(id)_geoLocationForCoordinate:(SCD_Struct_PL9)arg1 date:(id)arg2 ;
-(void)_enqueueReverseGeocodeMomentWithRequestInfo:(id)arg1 shouldFilterIfInProgress:(BOOL)arg2 ;
-(void)_updateSecondaryInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 primaryCompoundNameInfo:(id)arg3 defaultGeoOrderingSet:(id)arg4 dominantPlaces:(id)arg5 otherNonDominantPlaces:(id)arg6 ordersCheckedOrUsed:(id)arg7 dominantOrder:(unsigned)arg8 usedHome:(BOOL)arg9 ;
-(unsigned)_geoOrderInPrioritySet:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_addOrUpdateNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2 ;
-(id)_dominantPlacesInPlaceInfoArray:(id)arg1 orderType:(unsigned)arg2 totalPlaceCount:(unsigned)arg3 includeAllPlaces:(BOOL)arg4 includeHome:(BOOL)arg5 homeAtEnd:(BOOL)arg6 atLastLevel:(BOOL)arg7 outOtherNonDominantPlaces:(id)arg8 ;
-(id)_resetAndSortedNameInfoArray:(id)arg1 homeAtEnd:(BOOL)arg2 ;
-(id)_localizedNamesForNameInfoArray:(id)arg1 namesUsed:(id)arg2 includeHome:(BOOL)arg3 outAddedHome:(BOOL*)arg4 ;
-(id)_suffixForGeoPlace:(id)arg1 afterOrderType:(unsigned)arg2 homePlace:(id)arg3 ;
-(id)_suffixForNameInfoArray:(id)arg1 afterOrderType:(unsigned)arg2 ;
-(BOOL)_canProcessMoments;
-(id)_homeLocation;
-(BOOL)_markInvalidLowQualityAssetsInMoment:(id)arg1 withCurrentProviderId:(id)arg2 ;
-(BOOL)_markInvalidOutOfDateAssetsInMoment:(id)arg1 forCurrentCountryVersionMap:(id)arg2 withCurrentProviderId:(id)arg3 ;
-(BOOL)_shouldProcessMoments:(id)arg1 ;
-(BOOL)updateInfoForMoments:(id)arg1 invalidOnly:(BOOL)arg2 ;
-(BOOL)updateInfoForMegaMomentLists:(id)arg1 ;
-(BOOL)updateInfoForYearMomentLists:(id)arg1 ;
-(void)_networkReachabilityDidChange:(id)arg1 ;
-(void)_setMomentAnalysisPaused:(BOOL)arg1 ;
-(void)_reverseGeocodeMoment:(id)arg1 shouldFilterIfInProgress:(BOOL)arg2 invalidOnly:(BOOL)arg3 ;
-(void)_addressBookChanged;
-(id)_compactPlaceDescriptionForPlaceResult:(id)arg1 ;
-(unsigned)_indexForGeoOrder:(unsigned)arg1 inPrioritySet:(id)arg2 ;
-(unsigned)_significantPlaceCountInMap:(id)arg1 ;
-(id)_simpleNamesForNameInfoArray:(id)arg1 ;
-(void)updateInfoForInvalidMomentsIfNeeded;
-(BOOL)updateInfoForMomentWithMomentId:(id)arg1 fromOnDemandRequest:(BOOL)arg2 ;
-(BOOL)updateInfoForMomentListWithMomentListId:(id)arg1 ;
@end

