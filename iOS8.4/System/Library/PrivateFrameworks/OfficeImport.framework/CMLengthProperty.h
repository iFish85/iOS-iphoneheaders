/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMProperty.h>

@interface CMLengthProperty : CMProperty {

	double value;
	int unitType;

}
+(double)convertToPoints:(double)arg1 unit:(int)arg2 ;
+(id)cssStringValue:(double)arg1 unit:(int)arg2 ;
-(id)description;
-(double)value;
-(id)initWithNumber:(double)arg1 unit:(int)arg2 ;
-(int)unitType;
-(id)cssStringForName:(id)arg1 ;
-(void)addNumber:(double)arg1 unit:(int)arg2 ;
-(id)cssString;
-(int)compareValue:(id)arg1 ;
-(id)initWithNumber:(double)arg1 ;
-(int)intValue;
@end
