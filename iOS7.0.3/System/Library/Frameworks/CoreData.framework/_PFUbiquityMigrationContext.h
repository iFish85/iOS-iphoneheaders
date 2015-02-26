/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class PFUbiquityTransactionLog, PFUbiquityStoreSaveSnapshot;

@interface _PFUbiquityMigrationContext : NSObject {

	PFUbiquityTransactionLog* _transactionLog;
	PFUbiquityStoreSaveSnapshot* _sourceStoreSaveSnapshot;
	PFUbiquityStoreSaveSnapshot* _destinationStoreSaveSnapshot;

}

@property (nonatomic,retain) PFUbiquityTransactionLog * transactionLog;                               //@synthesize transactionLog=_transactionLog - In the implementation block
@property (nonatomic,retain) PFUbiquityStoreSaveSnapshot * sourceStoreSaveSnapshot;                   //@synthesize sourceStoreSaveSnapshot=_sourceStoreSaveSnapshot - In the implementation block
@property (nonatomic,retain) PFUbiquityStoreSaveSnapshot * destinationStoreSaveSnapshot;              //@synthesize destinationStoreSaveSnapshot=_destinationStoreSaveSnapshot - In the implementation block
-(id)transactionLog;
-(void)setTransactionLog:(id)arg1 ;
-(void)setSourceStoreSaveSnapshot:(id)arg1 ;
-(void)setDestinationStoreSaveSnapshot:(id)arg1 ;
-(id)destinationStoreSaveSnapshot;
-(id)sourceGlobalObjectIDFromCompressedID:(id)arg1 ;
-(id)sourceStoreSaveSnapshot;
-(void)dealloc;
@end
