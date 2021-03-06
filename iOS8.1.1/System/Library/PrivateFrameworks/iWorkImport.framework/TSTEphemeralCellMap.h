/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTCellMap.h>

@class NSString;

@interface TSTEphemeralCellMap : NSObject <TSTCellMap> {

	SCD_Struct_TS272* mCellIDs;
	id* mCells;
	unsigned long long mCapacity;
	unsigned long long mCount;
	BOOL mMayModifyValuesReferencedByFormulas;
	BOOL mIgnoreHiddenCellsWhenApplying;
	BOOL mAppliesToHidden;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL appliesToHidden; 
-(void)addCell:(id)arg1 andCellID:(SCD_Struct_TS272)arg2 ;
-(SCD_Struct_TS272)cellIDAtIndex:(unsigned long long)arg1 ;
-(void)popLastCell;
-(BOOL)mayModifyFormulasInCells;
-(BOOL)mayModifyValuesReferencedByFormulas;
-(void)setMayModifyValuesReferencedByFormulas:(BOOL)arg1 ;
-(BOOL)appliesToHidden;
-(void)setAppliesToHidden:(BOOL)arg1 ;
-(SCD_Struct_TS272*)cellIDs;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)cellAtIndex:(unsigned long long)arg1 ;
@end

