/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:34:23 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileBackup/NSFileManagerDelegate.h>

@class NSString;

@interface MBFileManagerDelegate : NSObject <NSFileManagerDelegate> {

	/*^block*/id _shouldCopyItemAtPathToPath;

}

@property (nonatomic,copy) id shouldCopyItemAtPathToPath;              //@synthesize shouldCopyItemAtPathToPath=_shouldCopyItemAtPathToPath - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)fileManager:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(id)shouldCopyItemAtPathToPath;
-(void)setShouldCopyItemAtPathToPath:(id)arg1 ;
@end

