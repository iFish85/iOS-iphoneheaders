/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSDLayout.h>

@class TNPageLayout;

@interface TNPageContentLayout : TSDLayout {

	TNPageLayout* mPageLayout;
	unsigned mPageNumber;

}

@property (assign) TNPageLayout * pageLayout; 
@property (readonly) unsigned pageNumber; 
-(Class)repClassOverride;
-(id)computeLayoutGeometry;
-(id)initWithPageLayout:(id)arg1 ;
-(void)setPageLayout:(TNPageLayout *)arg1 ;
-(TNPageLayout *)pageLayout;
-(void)validate;
-(unsigned)pageCount;
-(unsigned)pageNumber;
@end
