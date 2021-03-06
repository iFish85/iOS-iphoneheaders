/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/DataClassMigrators/SocialDataMigrator.migrator/SocialDataMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface SLDataMigrator : DataClassMigrator
-(void)_migrateTencentWeiboData;
-(id)_socialDirectory;
-(void)_migrateWeiboData;
-(void)_migrateTwitterData;
-(void)_createSocialDataDirectoryIfNecessary;
-(id)_oldTwitterImagesFolderPath;
-(id)_newTwitterImagesFolderPath;
-(id)_oldTwitterFolderPath;
-(BOOL)_needsFileProtectionUpgradeForProfileImagesAtPath:(id)arg1 service:(id)arg2 ;
-(id)_oldTwitterDatabasePath;
-(id)_newTwitterDatabasePath;
-(id)_twitterDatabaseFileName;
-(void)_removeAncillarySocialDatabaseFilesWithPrefix:(id)arg1 service:(id)arg2 ;
-(id)_oldWeiboDatabasePath;
-(id)_newWeiboDatabasePath;
-(id)_oldWeiboImagesFolderPath;
-(id)_newWeiboImagesFolderPath;
-(id)_oldWeiboFolderPath;
-(id)_weiboDatabaseFileName;
-(id)_tencentWeiboImagesFolderPath;
-(id)_tencentWeiboDatabasePath;
-(id)_tencentWeiboDatabaseFileName;
-(id)dataClassName;
-(BOOL)performMigration;
-(float)estimatedDuration;
-(float)migrationProgress;
@end

