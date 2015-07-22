/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PASampleAggregatorOptions : NSObject {

	BOOL _tabDelineateBinaryImageSections;
	BOOL _binaryImagesBeforeStacks;
	BOOL _printSpinSignatureStack;
	BOOL _printHeavyStacks;
	BOOL _displayFrameAddresses;
	BOOL _displaySub1MsCpuTime;
	BOOL _displayStateChangesOnIdleThreads;
	BOOL _displayProcessFirstLastTimes;
	BOOL _displayOffsetsFromUnnamedSymbols;
	BOOL _displaySymbolInformation;
	BOOL _displayBinaryImageAddresses;
	BOOL _displayBinaryImagesLackingNameOrPath;
	BOOL _displayNonRunnableThreads;
	BOOL _displayIdleWorkQueueThreads;

}

@property (assign) BOOL tabDelineateBinaryImageSections;                   //@synthesize tabDelineateBinaryImageSections=_tabDelineateBinaryImageSections - In the implementation block
@property (assign) BOOL binaryImagesBeforeStacks;                          //@synthesize binaryImagesBeforeStacks=_binaryImagesBeforeStacks - In the implementation block
@property (assign) BOOL printSpinSignatureStack;                           //@synthesize printSpinSignatureStack=_printSpinSignatureStack - In the implementation block
@property (assign) BOOL printHeavyStacks;                                  //@synthesize printHeavyStacks=_printHeavyStacks - In the implementation block
@property (assign) BOOL displayFrameAddresses;                             //@synthesize displayFrameAddresses=_displayFrameAddresses - In the implementation block
@property (assign) BOOL displaySub1MsCpuTime;                              //@synthesize displaySub1MsCpuTime=_displaySub1MsCpuTime - In the implementation block
@property (assign) BOOL displayStateChangesOnIdleThreads;                  //@synthesize displayStateChangesOnIdleThreads=_displayStateChangesOnIdleThreads - In the implementation block
@property (assign) BOOL displayProcessFirstLastTimes;                      //@synthesize displayProcessFirstLastTimes=_displayProcessFirstLastTimes - In the implementation block
@property (assign) BOOL displayOffsetsFromUnnamedSymbols;                  //@synthesize displayOffsetsFromUnnamedSymbols=_displayOffsetsFromUnnamedSymbols - In the implementation block
@property (assign) BOOL displaySymbolInformation;                          //@synthesize displaySymbolInformation=_displaySymbolInformation - In the implementation block
@property (assign) BOOL displayBinaryImageAddresses;                       //@synthesize displayBinaryImageAddresses=_displayBinaryImageAddresses - In the implementation block
@property (assign) BOOL displayBinaryImagesLackingNameOrPath;              //@synthesize displayBinaryImagesLackingNameOrPath=_displayBinaryImagesLackingNameOrPath - In the implementation block
@property (assign) BOOL displayNonRunnableThreads;                         //@synthesize displayNonRunnableThreads=_displayNonRunnableThreads - In the implementation block
@property (assign) BOOL displayIdleWorkQueueThreads;                       //@synthesize displayIdleWorkQueueThreads=_displayIdleWorkQueueThreads - In the implementation block
@property (assign) BOOL verbose; 
-(id)init;
-(BOOL)displayFrameAddresses;
-(BOOL)displayStateChangesOnIdleThreads;
-(BOOL)displaySub1MsCpuTime;
-(BOOL)displayProcessFirstLastTimes;
-(BOOL)displayOffsetsFromUnnamedSymbols;
-(BOOL)displaySymbolInformation;
-(BOOL)displayBinaryImageAddresses;
-(BOOL)displayBinaryImagesLackingNameOrPath;
-(BOOL)displayNonRunnableThreads;
-(BOOL)displayIdleWorkQueueThreads;
-(void)setDisplayFrameAddresses:(BOOL)arg1 ;
-(void)setDisplayStateChangesOnIdleThreads:(BOOL)arg1 ;
-(void)setDisplaySub1MsCpuTime:(BOOL)arg1 ;
-(void)setDisplayProcessFirstLastTimes:(BOOL)arg1 ;
-(void)setDisplayOffsetsFromUnnamedSymbols:(BOOL)arg1 ;
-(void)setDisplaySymbolInformation:(BOOL)arg1 ;
-(void)setDisplayBinaryImageAddresses:(BOOL)arg1 ;
-(void)setDisplayBinaryImagesLackingNameOrPath:(BOOL)arg1 ;
-(void)setDisplayNonRunnableThreads:(BOOL)arg1 ;
-(void)setDisplayIdleWorkQueueThreads:(BOOL)arg1 ;
-(BOOL)verbose;
-(void)setVerbose:(BOOL)arg1 ;
-(BOOL)tabDelineateBinaryImageSections;
-(void)setTabDelineateBinaryImageSections:(BOOL)arg1 ;
-(BOOL)binaryImagesBeforeStacks;
-(void)setBinaryImagesBeforeStacks:(BOOL)arg1 ;
-(BOOL)printSpinSignatureStack;
-(void)setPrintSpinSignatureStack:(BOOL)arg1 ;
-(BOOL)printHeavyStacks;
-(void)setPrintHeavyStacks:(BOOL)arg1 ;
@end
