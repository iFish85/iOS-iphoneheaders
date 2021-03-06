/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class TDDistiller, NSURL, TDLogger, NSString;

@interface TDDistillRunner : NSObject {

	TDDistiller* _distiller;
	NSURL* _carScratchURL;
	NSURL* _outputURL;
	TDLogger* _logger;
	NSString* _assetStoreVersionString;
	int _assetStoreVersionNumber;

}

@property (nonatomic,copy) NSURL * outputURL;                     //@synthesize outputURL=_outputURL - In the implementation block
@property (nonatomic,retain) TDLogger * logger;                   //@synthesize logger=_logger - In the implementation block
@property (copy) NSString * assetStoreVersionString;              //@synthesize assetStoreVersionString=_assetStoreVersionString - In the implementation block
@property (assign) int assetStoreVersionNumber;                   //@synthesize assetStoreVersionNumber=_assetStoreVersionNumber - In the implementation block
-(id)outputURL;
-(void)dealloc;
-(id)init;
-(id)carScratchURL;
-(BOOL)_isDistillUnnecessaryForDocument:(id)arg1 ;
-(int)assetStoreVersionNumber;
-(void)setAssetStoreVersionNumber:(int)arg1 ;
-(id)assetStoreVersionString;
-(void)setAssetStoreVersionString:(id)arg1 ;
-(void)_moveScratchToOutputPath;
-(void)_removeScratchPath;
-(BOOL)runDistillWithDocumentURL:(id)arg1 outputURL:(id)arg2 attemptIncremental:(BOOL)arg3 forceDistill:(BOOL)arg4 ;
-(void)setOutputURL:(id)arg1 ;
-(id)logger;
-(void)setLogger:(id)arg1 ;
@end

