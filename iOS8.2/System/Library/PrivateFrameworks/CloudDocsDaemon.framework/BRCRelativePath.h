/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/NSSecureCoding.h>

@class NSString, NSNumber, BRCBookmark, BRCGenerationID, BRCLocalContainer, NSDirectoryEnumerator, BRCAccountSession, NSData, NSURL;

@interface BRCRelativePath : NSObject <NSSecureCoding> {

	NSString* _absolutePath;
	NSString* _relativePath;
	BRCRelativePath* _basePath;
	NSNumber* _volumeID;
	BRCBookmark* _bookmark;
	NSString* _symlinkContent;
	BRCGenerationID* _generationID;
	int _deviceID;
	BRCLocalContainer* _container;
	unsigned _componentsCountToRoot;
	unsigned char _finderInfo[32];
	unsigned long long _fileID;
	unsigned short _mode;
	unsigned _nlink;
	timespec _birthtime;
	timespec _mtime;
	long long _size;
	unsigned long long _parentFileID;
	unsigned _documentID;
	unsigned _fsGenerationID;
	unsigned _flags;
	unsigned _isExcluded : 1;
	unsigned _isInPackage : 1;
	unsigned _isPackageRoot : 1;
	unsigned _readFault : 1;
	unsigned _hasFinderTags : 1;
	unsigned _isBusy : 1;
	unsigned _isAlias : 1;
	unsigned _qtnResolved : 1;
	int _fd;
	Ai _openRefCount;
	opaque_pthread_rwlock_t _mutex;
	SCD_Struct_BR12* _dir;
	NSDirectoryEnumerator* _descendantsEnumerator;
	BRCAccountSession* _accountSession;
	NSData* _quarantineInfo;

}

@property (nonatomic,readonly) char isDocument; 
@property (nonatomic,readonly) char isFault; 
@property (nonatomic,readonly) char isFile; 
@property (nonatomic,readonly) char isPackageRoot; 
@property (nonatomic,readonly) char isInPackage; 
@property (nonatomic,readonly) char isRoot; 
@property (nonatomic,readonly) char isContainer; 
@property (nonatomic,readonly) char isParentedToContainer; 
@property (nonatomic,readonly) char isUnixDir; 
@property (nonatomic,readonly) char exists; 
@property (nonatomic,readonly) char isWritable; 
@property (nonatomic,readonly) char isExecutable; 
@property (nonatomic,readonly) char isHiddenExtension; 
@property (nonatomic,readonly) char isHiddenFile; 
@property (nonatomic,readonly) char isBusy; 
@property (nonatomic,readonly) char isSymLink; 
@property (nonatomic,readonly) char isExcluded; 
@property (nonatomic,readonly) char hasFinderTags; 
@property (nonatomic,readonly) char isAlias; 
@property (nonatomic,readonly) unsigned long fileType; 
@property (nonatomic,readonly) unsigned long long fileID; 
@property (nonatomic,readonly) unsigned long long parentFileID; 
@property (nonatomic,readonly) unsigned hardlinkCount; 
@property (nonatomic,readonly) unsigned documentID; 
@property (nonatomic,readonly) NSNumber * fileObjectID; 
@property (nonatomic,readonly) int deviceID; 
@property (nonatomic,readonly) NSNumber * volumeID; 
@property (nonatomic,readonly) long long size; 
@property (nonatomic,readonly) long modificationTime; 
@property (nonatomic,readonly) long birthTime; 
@property (nonatomic,readonly) unsigned fsGenerationID; 
@property (nonatomic,readonly) BRCGenerationID * generationID; 
@property (nonatomic,readonly) BRCAccountSession * accountSession;                //@synthesize accountSession=_accountSession - In the implementation block
@property (nonatomic,readonly) BRCLocalContainer * container; 
@property (nonatomic,readonly) NSString * absolutePath; 
@property (nonatomic,readonly) NSString * pathRelativeToRoot; 
@property (nonatomic,readonly) NSString * pathRelativeToContainer; 
@property (nonatomic,readonly) NSString * pathRelativeToPackageRoot; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * symlinkContent; 
@property (nonatomic,readonly) BRCRelativePath * root; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSString * faultDisplayName; 
@property (nonatomic,readonly) BRCBookmark * bookmark; 
@property (nonatomic,readonly) NSData * quarantineInfo;                           //@synthesize quarantineInfo=_quarantineInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) unsigned parentHash; 
+(char)supportsSecureCoding;
+(int)locateByFileID:(unsigned long long)arg1 inContainer:(id)arg2 ;
-(void)dealloc;
-(long long)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSURL *)url;
-(BRCLocalContainer *)container;
-(void)close;
-(char)isContainer;
-(unsigned long)fileType;
-(BRCAccountSession *)accountSession;
-(char)exists;
-(char)isDocument;
-(NSString *)faultDisplayName;
-(NSString *)absolutePath;
-(NSNumber *)fileObjectID;
-(char)isFile;
-(long)modificationTime;
-(char)isAlias;
-(BRCRelativePath *)root;
-(int)deviceID;
-(unsigned long long)parentFileID;
-(char)isRoot;
-(void)_close;
-(char)isInPackage;
-(id)pathOfPackageRoot;
-(unsigned long long)fileID;
-(unsigned)documentID;
-(id)initWithFileID:(unsigned long long)arg1 inContainer:(id)arg2 ;
-(char)resolveAndKeepOpenMustExist:(char)arg1 error:(int*)arg2 ;
-(id)pathWithChildAtPath:(id)arg1 ;
-(id)_initWithPath:(id)arg1 relativeToRoot:(id)arg2 ;
-(id)refreshFromPathMustExist:(char)arg1 ;
-(char)isExecutable;
-(char)isWritable;
-(NSData *)quarantineInfo;
-(NSString *)symlinkContent;
-(char)isResolved;
-(char)resolveMustExist:(char)arg1 error:(int*)arg2 ;
-(char)isUnixDir;
-(char)isPackageRoot;
-(NSString *)pathRelativeToRoot;
-(char)isSymLink;
-(NSNumber *)volumeID;
-(char)_fixupRelativePath;
-(int)_resolveContainer;
-(char)_shouldKeepBasePathOpen;
-(int)_resolveBasePath;
-(int)_resolveWhenExists;
-(int)_resolveWhenDoesntExist;
-(NSString *)pathRelativeToPackageRoot;
-(int)_resolveSymlinkRelativeTo:(int)arg1 path:(id)arg2 ;
-(char)performOnOpenFileDescriptor:(/*^block*/id)arg1 error:(int*)arg2 ;
-(char)_resolveAndKeepOpenMustExist:(char)arg1 error:(int*)arg2 ;
-(char)isEqualToRelativePath:(id)arg1 ;
-(id)initWithRootPath:(id)arg1 accountSession:(id)arg2 ;
-(id)initWithPath:(id)arg1 inContainer:(id)arg2 ;
-(id)pathOfParent;
-(id)logicalURLWithLogicalName:(id)arg1 ;
-(char)isParentedToContainer;
-(char)isExcluded;
-(NSString *)pathRelativeToContainer;
-(unsigned)hardlinkCount;
-(long)birthTime;
-(unsigned)fsGenerationID;
-(BRCGenerationID *)generationID;
-(char)isHiddenExtension;
-(char)isHiddenFile;
-(char)hasFinderTags;
-(char)flock:(int)arg1 ;
-(char)performOnOpenParentFileDescriptor:(/*^block*/id)arg1 error:(int*)arg2 ;
-(char)openDirectoryForScanWithError:(int*)arg1 ;
-(id)nextChild;
-(char)openDirectoryForRecursiveScan;
-(id)nextDescendant;
-(void)closeDirectoryScan;
-(BRCBookmark *)bookmark;
-(unsigned)parentHash;
-(NSString *)filename;
-(char)isFault;
-(char)isBusy;
@end

