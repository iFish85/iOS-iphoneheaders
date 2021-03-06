/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:02 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSPFileCoordinatorDelegate;
@class TSPPackage, NSURL;

@interface TSPPackageConverter : NSObject {

	id<TSPFileCoordinatorDelegate> _fileCoordinatorDelegate;
	char _isCancelled;
	TSPPackage* _package;
	NSURL* _URL;

}

@property (nonatomic,readonly) int packageType; 
@property (nonatomic,readonly) char isValid; 
@property (nonatomic,readonly) char isPasswordProtected; 
@property (nonatomic,readonly) TSPPackage * package;                  //@synthesize package=_package - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) char isCancelled;                      //@synthesize isCancelled=_isCancelled - In the implementation block
+(id)newPackageConverterWithURL:(id)arg1 ;
+(char)convertDocumentAtURL:(id)arg1 toPackageType:(int)arg2 error:(id*)arg3 ;
-(int)packageType;
-(char)checkPassword:(id)arg1 ;
-(char)writeToURL:(id)arg1 packageType:(int)arg2 error:(id*)arg3 ;
-(id)initWithURL:(id)arg1 package:(id)arg2 fileCoordinatorDelegate:(id)arg3 ;
-(unsigned long long)progressTotalUnitCountWithZipArchive:(id)arg1 ;
-(id)newWriteChannelAtPath:(id)arg1 size:(unsigned long long)arg2 CRC:(unsigned)arg3 packageWriter:(id)arg4 error:(id*)arg5 ;
-(char)enumeratePackageEntriesWithZipArchive:(id)arg1 accessor:(/*^block*/id)arg2 ;
-(char)isDocumentPropertiesPath:(id)arg1 ;
-(char)isObjectArchivePath:(id)arg1 ;
-(id)init;
-(char)isValid;
-(char)isCancelled;
-(NSURL *)URL;
-(TSPPackage *)package;
-(char)isPasswordProtected;
@end

