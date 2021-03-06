/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSADocumentRootDelegate.h>
#import <iWorkImport/TSPObjectContextDelegate.h>

@class NSString, TSUTemporaryDirectory, TSPObjectContext, NSURL, TSADocumentRoot;

@interface TSACirrusDocument : NSObject <TSADocumentRootDelegate, TSPObjectContextDelegate> {

	BOOL _isClosed;
	TSUTemporaryDirectory* _tempDirForSupport;
	TSPObjectContext* _context;
	NSURL* _URL;

}

@property (nonatomic,readonly) TSADocumentRoot * documentRoot; 
@property (nonatomic,retain) TSPObjectContext * context;                                //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                                 //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * defaultDraftName; 
@property (nonatomic,readonly) NSString * documentCachePath; 
@property (nonatomic,readonly) <NSFilePresenter> * filePresenter; 
@property (nonatomic,readonly) BOOL ignoreDocumentSupport; 
@property (nonatomic,readonly) BOOL isDocumentSupportTemporary; 
@property (nonatomic,readonly) BOOL areNewExternalReferencesToDataAllowed; 
-(id)supportDirectoryURL;
-(void)presentPersistenceError:(id)arg1 ;
-(void)documentDidLoad;
-(id)documentCachePath;
-(id)initWithURL:(id)arg1 error:(id*)arg2 passphrase:(id)arg3 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)context;
-(id)name;
-(void)setContext:(id)arg1 ;
-(id)URL;
-(void)close;
-(void)setURL:(id)arg1 ;
-(id)documentRoot;
@end

