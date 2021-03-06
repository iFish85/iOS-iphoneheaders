/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:58:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HDHealthDataCollector <NSObject>
@property (assign) char disabled; 
@required
-(char)disabled;
-(void)setDisabled:(char)arg1;
-(void)collectionStartedForType:(id)arg1 collectionInterval:(double)arg2;
-(void)updateCollectionInterval:(double)arg1 forType:(id)arg2;
-(void)collectionStoppedForType:(id)arg1;
-(void)updateHistoricalData;
-(id)dataCollectorDiagnosticDescription;

@end

