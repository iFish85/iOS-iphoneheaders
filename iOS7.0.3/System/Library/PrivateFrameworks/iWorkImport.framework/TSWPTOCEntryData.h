/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class NSString, TSWPParagraphStyle;

@interface TSWPTOCEntryData : TSPObject {

	unsigned _paragraphIndex;
	unsigned _pageNumber;
	int _numberFormat;
	NSString* _heading;
	TSWPParagraphStyle* _indexedStyle;

}

@property (nonatomic,readonly) unsigned paragraphIndex;                        //@synthesize paragraphIndex=_paragraphIndex - In the implementation block
@property (nonatomic,readonly) unsigned pageNumber;                            //@synthesize pageNumber=_pageNumber - In the implementation block
@property (nonatomic,readonly) int numberFormat;                               //@synthesize numberFormat=_numberFormat - In the implementation block
@property (nonatomic,readonly) NSString * heading;                             //@synthesize heading=_heading - In the implementation block
@property (nonatomic,readonly) TSWPParagraphStyle * indexedStyle;              //@synthesize indexedStyle=_indexedStyle - In the implementation block
+(id)tocEntryDataWithParagraphIndex:(unsigned)arg1 pageNumber:(unsigned)arg2 numberFormat:(int)arg3 heading:(id)arg4 indexedStyle:(id)arg5 ;
-(unsigned)paragraphIndex;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(TOCEntryInstanceArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const TOCEntryInstanceArchive*)arg1 unarchiver:(id)arg2 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(id)indexedStyle;
-(id)initWithParagraphIndex:(unsigned)arg1 pageNumber:(unsigned)arg2 numberFormat:(int)arg3 heading:(id)arg4 indexedStyle:(id)arg5 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned)pageNumber;
-(int)numberFormat;
-(id)heading;
@end

