/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:06 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSCEFormulaOwning <NSObject>
@required
-(void)releaseForCalculationEngine:(id)arg1;
-(void)retainForCalculationEngine:(id)arg1;
-(SCD_Struct_TS347*)recalculateForCalculationEngine:(id)arg1 formulaID:(/*function pointer*/void*)arg2 isInCycle:(char)arg3 hasCalculatedPrecedents:(char)arg4;
-(void)writeResultsForCalculationEngine:(id)arg1;
-(void)invalidateForCalculationEngine:(id)arg1;

@end

