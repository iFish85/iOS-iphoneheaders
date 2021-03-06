/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EMSheetMapper.h>

@class EDChartSheet;

@interface EMChartsheetMapper : EMSheetMapper {

	EDChartSheet* mChartSheet;
	CGRect mBox;

}
-(int)width;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithChartSheet:(id)arg1 parent:(id)arg2 ;
-(int)preprocessWidthWithState:(id)arg1 ;
-(int)preprocessHeightWithState:(id)arg1 ;
@end

