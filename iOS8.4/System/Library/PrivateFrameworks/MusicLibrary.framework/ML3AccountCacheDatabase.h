/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ML3DatabaseConnection;

@interface ML3AccountCacheDatabase : NSObject {

	ML3DatabaseConnection* _databaseConnection;

}
-(id)init;
-(id)_databasePath;
-(BOOL)_internalSetAppleID:(id)arg1 forDSID:(unsigned long long)arg2 ;
-(BOOL)_clearCacheDatabase;
-(BOOL)_openDatabase;
-(BOOL)_closeDatabase;
-(BOOL)_openDatabaseIsRetry:(BOOL)arg1 ;
-(BOOL)setAppleID:(id)arg1 forDSID:(unsigned long long)arg2 ;
-(id)appleIDForDSID:(unsigned long long)arg1 ;
@end
