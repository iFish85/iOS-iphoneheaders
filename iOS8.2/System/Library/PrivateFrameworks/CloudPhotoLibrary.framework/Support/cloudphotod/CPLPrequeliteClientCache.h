/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineClientCacheImplementation.h>

@class NSString;

@interface CPLPrequeliteClientCache : CPLPrequeliteStorage <CPLEngineClientCacheImplementation>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)initializeStorage;
-(char)upgradeStorageToVersion:(long long)arg1 ;
-(id)status;
-(char)resetWithError:(id*)arg1 ;
-(id)statusDictionary;
-(char)hasRecordWithIdentifier:(id)arg1 ;
-(id)recordWithIdentifier:(id)arg1 ;
-(char)addRecord:(id)arg1 error:(id*)arg2 ;
-(char)updateRecord:(id)arg1 error:(id*)arg2 ;
-(char)deleteRecordWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)relatedIdentifierForRecordWithIdentifier:(id)arg1 ;
-(id)recordsWithRelatedIdentifier:(id)arg1 ;
@end
