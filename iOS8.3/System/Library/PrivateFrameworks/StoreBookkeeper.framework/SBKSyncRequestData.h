/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:11 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKRequestData.h>

@class SBKSyncTransaction;

@interface SBKSyncRequestData : SBKRequestData

@property (readonly) SBKSyncTransaction * transaction; 
-(id)syncTransaction;
-(id)_serializableUpdateItemPayloadDictionaryForKey:(id)arg1 ;
-(id)_serializableDeleteItemPayloadDictionaryForKey:(id)arg1 ;
-(id)_serializableConflictDetectionValue;
-(char)_needsConflictDetection;
-(id)_serializableConflictDetectionOrdinalForKey:(id)arg1 ;
-(id)serializableRequestBodyPropertyList;
@end
