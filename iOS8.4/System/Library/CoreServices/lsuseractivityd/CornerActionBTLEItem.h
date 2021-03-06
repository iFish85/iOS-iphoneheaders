/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/lsuseractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <lsuseractivityd/CornerActionItem.h>

@class SFActivityScanner, CornerActionManager, NSData, NSDate, NSMutableSet;

@interface CornerActionBTLEItem : CornerActionItem {

	SFActivityScanner* _scanner;
	CornerActionManager* _manager;
	NSData* _advertisementPayload;
	unsigned _optionBits;
	NSDate* _currentUntilDate;
	double _payloadAvailabilityDelay;
	NSMutableSet* _payloadRequestedCompletions;

}

@property (copy,readonly) SFActivityScanner * scanner;                      //@synthesize scanner=_scanner - In the implementation block
@property (copy,readonly) CornerActionManager * manager;                    //@synthesize manager=_manager - In the implementation block
@property (copy,readonly) NSData * BTLEPayloadData; 
@property (copy) NSData * advertisementPayload;                             //@synthesize advertisementPayload=_advertisementPayload - In the implementation block
@property (assign) unsigned optionBits;                                     //@synthesize optionBits=_optionBits - In the implementation block
@property (copy) NSDate * currentUntilDate;                                 //@synthesize currentUntilDate=_currentUntilDate - In the implementation block
@property (assign) double payloadAvailabilityDelay;                         //@synthesize payloadAvailabilityDelay=_payloadAvailabilityDelay - In the implementation block
@property (retain) NSMutableSet * payloadRequestedCompletions;              //@synthesize payloadRequestedCompletions=_payloadRequestedCompletions - In the implementation block
+(id)cornerActionBTLEItemWithSFAdvertisement:(id)arg1 optionBits:(unsigned)arg2 scanner:(id)arg3 manager:(id)arg4 ;
+(id)applicationProxyForWebBrowserSupportingContinuation;
+(double)currentAbsoluteTime;
+(BOOL)applicationProxyCanHandleWebBrowserContinuation:(id)arg1 ;
+(id)statusString;
-(unsigned)optionBits;
-(BOOL)updateFromSFAdvertisement:(id)arg1 ;
-(void)requestPayloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithSFAdvertisement:(id)arg1 optionBits:(unsigned)arg2 type:(unsigned long long)arg3 activityType:(id)arg4 bundleIdentifier:(id)arg5 teamIDs:(id)arg6 advertisingOptions:(id)arg7 scanner:(id)arg8 manager:(id)arg9 ;
-(void)setCurrentUntilDate:(NSDate *)arg1 ;
-(NSMutableSet *)payloadRequestedCompletions;
-(void)setPayloadRequestedCompletions:(NSMutableSet *)arg1 ;
-(void)clearPayload;
-(NSDate *)currentUntilDate;
-(double)payloadAvailabilityDelay;
-(void)setPayloadAvailabilityDelay:(double)arg1 ;
-(void)setOptionBits:(unsigned)arg1 ;
-(SFActivityScanner *)scanner;
-(id)when;
-(CornerActionManager *)manager;
-(void)setWhen:(id)arg1 ;
-(id)statusString;
-(NSData *)advertisementPayload;
-(void)setAdvertisementPayload:(NSData *)arg1 ;
@end

