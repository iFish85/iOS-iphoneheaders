/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPostTask.h>

@class NSArray, NSString, CalDAVScheduleResponseItem;

@interface CalDAVScheduleTask : CoreDAVPostTask {

	NSArray* _attendees;
	NSString* _originator;
	CalDAVScheduleResponseItem* _scheduleResponse;

}

@property (retain) NSArray * attendees;                                        //@synthesize attendees=_attendees - In the implementation block
@property (retain) CalDAVScheduleResponseItem * scheduleResponse;              //@synthesize scheduleResponse=_scheduleResponse - In the implementation block
@property (retain) NSString * originator;                                      //@synthesize originator=_originator - In the implementation block
-(id)attendees;
-(void)setAttendees:(id)arg1 ;
-(id)originator;
-(void)setOriginator:(id)arg1 ;
-(void)dealloc;
-(id)initWithOriginator:(id)arg1 attendees:(id)arg2 outboxURL:(id)arg3 payload:(id)arg4 ;
-(void)setScheduleResponse:(id)arg1 ;
-(id)scheduleResponse;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)additionalHeaderValues;
@end

