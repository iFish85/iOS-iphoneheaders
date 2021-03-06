/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TNChartRangeList : NSObject {

	CFUUIDRef mTableID;
	TNChartRangeNode* mNodeList;
	SCD_Struct_TS267 mUnionRange;
	BOOL mUnionRangeValid;

}

@property (nonatomic,readonly) CFUUIDRef tableID; 
+(id)rangeListWithTableID:(CFUUIDRef)arg1 ;
+(id)rangeListWithTableID:(CFUUIDRef)arg1 range:(SCD_Struct_TS267)arg2 ;
+(id)rangeListWithRangeRef:(SCD_Struct_TS274*)arg1 ;
-(id)initWithTableID:(CFUUIDRef)arg1 ;
-(CFUUIDRef)tableID;
-(BOOL)containsCell:(SCD_Struct_TS266)arg1 ;
-(id)initWithTableID:(CFUUIDRef)arg1 range:(SCD_Struct_TS267)arg2 ;
-(SCD_Struct_TS267)unionRange;
-(SCD_Struct_TS267)rangeStartingAtCell:(SCD_Struct_TS266)arg1 direction:(int)arg2 ;
-(void)addRange:(SCD_Struct_TS267)arg1 coalesceFlags:(int)arg2 ;
-(SCD_Struct_TS267)rangeStartingAfterCell:(SCD_Struct_TS266)arg1 direction:(int)arg2 ;
-(SCD_Struct_TS274*)unionRangeRef;
-(SCD_Struct_TS267)rangeAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfRanges;
-(void)dealloc;
-(id)description;
-(BOOL)containsRange:(SCD_Struct_TS267)arg1 ;
-(void)enumerateRangesUsingBlock:(/*^block*/ id)arg1 ;
-(void)removeAllRanges;
@end

