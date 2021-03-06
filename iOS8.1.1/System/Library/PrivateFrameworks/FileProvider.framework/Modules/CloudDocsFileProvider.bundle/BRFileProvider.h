/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/FileProvider.framework/Modules/CloudDocsFileProvider.bundle/CloudDocsFileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsFileProvider/FPModule.h>

@class NSString;

@interface BRFileProvider : NSObject <FPModule>

@property (readonly) NSString * bookmarkPrefix; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)bookmarkPrefix;
-(void)FPDocumentURLFromBookmarkableString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)FPBookmarkableStringFromDocumentURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

