/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>
#import <itunescloudd/NSURLSessionTaskDelegate.h>

@class NSString;

@interface JaliscoUpdateGeniusDataOperation : CloudLibraryOperation <NSURLSessionTaskDelegate> {

	BOOL _initialImport;
	long long _geniusOperationStatus;

}

@property (assign,getter=isInitialImport,nonatomic) BOOL initialImport;              //@synthesize initialImport=_initialImport - In the implementation block
@property (nonatomic,readonly) long long geniusOperationStatus;                      //@synthesize geniusOperationStatus=_geniusOperationStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInitialImport:(BOOL)arg1 ;
-(void)_updateGeniusData;
-(void)_prepareMetadataPayloadWithCUID:(id)arg1 ;
-(id)_itemsToUpload;
-(id)_standardBodyDictionaryWithAdditionalFields:(id)arg1 ;
-(void)_determineUploadURLWithCUID:(id)arg1 numberOfItems:(unsigned long long)arg2 metadataPayloadData:(id)arg3 ;
-(id)_requestWithURLBagKey:(id)arg1 additionalBodyFields:(id)arg2 ;
-(id)_responseBodyForRequest:(id)arg1 retryTimeout:(double)arg2 debugName:(id)arg3 ;
-(void)_uploadMetadataWithCUID:(id)arg1 metadataPayloadData:(id)arg2 toURL:(id)arg3 updateID:(id)arg4 ;
-(void)_determineResultsURLWhenReadyWithCUID:(id)arg1 updateID:(id)arg2 ;
-(void)_downloadSimDataFromURL:(id)arg1 additionalFieldsFromURL:(id)arg2 ;
-(id)_simDataDestinationPathURL;
-(id)_additionalFieldsDestinationPathURL;
-(void)_importGeniusData;
-(long long)geniusOperationStatus;
-(BOOL)isInitialImport;
-(id)init;
-(void)main;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

