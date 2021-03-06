/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSData, NSString, FairPlayDecryptSession;

@interface FairPlayDecryptFileOperation : ISOperation {

	NSData* _dpInfo;
	double _lastSnapshotTime;
	NSString* _path;
	FairPlayDecryptSession* _fairplayDecryptSession;

}
-(void)_updateProgressWithByteCount:(long long)arg1 ;
-(id)initWithPath:(id)arg1 dpInfo:(id)arg2 ;
-(BOOL)_decryptWithSession:(id)arg1 error:(id*)arg2 ;
-(void)_initializeProgressWithFileHandle:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)run;
@end

