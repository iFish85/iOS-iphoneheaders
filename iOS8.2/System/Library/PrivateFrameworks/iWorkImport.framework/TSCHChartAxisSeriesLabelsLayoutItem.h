/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartCategoryAxisLabelsLayoutItem.h>

@interface TSCHChartAxisSeriesLabelsLayoutItem : TSCHChartCategoryAxisLabelsLayoutItem
-(double)unitSpaceValueForAxis:(id)arg1 index:(unsigned)arg2 ;
-(unsigned)numberOfLabelsForAxis:(id)arg1 ;
-(unsigned)selectionPathLabelIndexForIndex:(unsigned)arg1 axis:(id)arg2 ;
-(id)labelStringForAxis:(id)arg1 index:(unsigned)arg2 ;
-(CGSize)calcMinSize;
-(char)showLabelsForAxis:(id)arg1 ;
-(unsigned)strideInLayoutArea:(CGRect)arg1 ;
-(id)selectionPathLabelType;
-(id)initWithParent:(id)arg1 ;
@end

