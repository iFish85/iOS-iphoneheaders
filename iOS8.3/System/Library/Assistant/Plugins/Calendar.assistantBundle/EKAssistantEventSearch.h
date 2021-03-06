/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:00:32 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/Plugins/Calendar.assistantBundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <SAObjects/SACalendarEventSearch.h>
#import <Calendar/EKAssistantCommand.h>

@class EKEventStore, NSString;

@interface EKAssistantEventSearch : SACalendarEventSearch <EKAssistantCommand> {

	CalDatabaseRef _database;
	EKEventStore* _eventStore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) EKEventStore * eventStore; 
@property (assign,nonatomic) CalDatabaseRef database; 
-(void)_addOccurrences:(CFArrayRef)arg1 toArray:(id)arg2 timeZone:(id)arg3 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)_perform;
-(id)_gregorianDateToString:(SCD_Struct_EK2)arg1 ;
-(EKEventStore *)eventStore;
-(CalDatabaseRef)database;
-(void)setDatabase:(CalDatabaseRef)arg1 ;
-(void)dealloc;
-(id)_validate;
-(void)setEventStore:(EKEventStore *)arg1 ;
@end

