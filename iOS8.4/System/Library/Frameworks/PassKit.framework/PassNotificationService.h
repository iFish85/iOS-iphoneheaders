/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface PassNotificationService : SQLiteEntity
+(id)insertPassNotificationServiceWithNotificationService:(id)arg1 inDatabase:(id)arg2 ;
+(id)_predicateForNotificationServicePID:(id)arg1 ;
+(id)queryWithDatabase:(id)arg1 transactionServicePID:(unsigned long long)arg2 ;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(id)databaseTable;
-(id)notificationService;
-(void)updateWithNotificationService:(id)arg1 ;
-(id)lastUpdatedTagDate;
-(void)updateWithLastUpdatedDate:(id)arg1 ;
-(void)updateWithLastUpdatedTag:(id)arg1 ;
-(void)updateWithRegistrationStatus:(long long)arg1 ;
-(id)initWithNotificationServicePID:(unsigned long long)arg1 inDatabase:(id)arg2 ;
-(id)lastUpdatedTag;
-(long long)registrationStatus;
-(id)lastUpdatedDate;
@end

