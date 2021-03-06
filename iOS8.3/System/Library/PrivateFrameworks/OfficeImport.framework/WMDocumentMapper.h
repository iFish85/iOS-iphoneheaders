/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:52:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>
#import <OfficeImport/CMMapperRoot.h>

@class CMArchiveManager, WDDocument, NSString;

@interface WMDocumentMapper : CMMapper <CMMapperRoot> {

	CMArchiveManager* mArchiver;
	WDDocument* wDom;
	NSString* mFileName;

}
-(id)fileName;
-(float)topMargin;
-(void)dealloc;
-(float)rightMargin;
-(id)blipAtIndex:(unsigned)arg1 ;
-(int)defaultTabWidth;
-(CGSize)pageSizeForDevice;
-(CGSize)contentSizeForDevice;
-(float)leftMargin;
-(float)headerMargin;
-(float)bottomMargin;
-(id)documentTitle;
-(void)mapDefaultCssStylesAt:(id)arg1 ;
-(char)hasSessionBreakAtIndex:(unsigned)arg1 ;
-(id)styleMatrix;
-(id)archiver;
-(id)initWithWDom:(id)arg1 archiver:(id)arg2 ;
-(void)mapWithState:(id)arg1 ;
-(void)setFileName:(id)arg1 ;
@end

