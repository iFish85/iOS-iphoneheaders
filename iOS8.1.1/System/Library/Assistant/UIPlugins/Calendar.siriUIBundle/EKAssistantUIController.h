/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/Calendar.siriUIBundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <Calendar/EKDayViewDelegate.h>
#import <Calendar/EKDayViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class EKEventStore, UIGestureRecognizer, EKCalendarDate, NSMutableArray, NSString;

@interface EKAssistantUIController : SiriUISnippetViewController <EKDayViewDelegate, EKDayViewDataSource, UITableViewDelegate, UITableViewDataSource> {

	BOOL _isDraft;
	EKEventStore* _eventStore;
	UIGestureRecognizer* _eventTapRecognizer;
	EKCalendarDate* _date;
	NSMutableArray* _events;
	NSMutableArray* _sections;
	unsigned long long _hiddenEventCount;

}

@property (assign,nonatomic) EKEventStore * eventStore;                             //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * eventTapRecognizer;              //@synthesize eventTapRecognizer=_eventTapRecognizer - In the implementation block
@property (nonatomic,retain) EKCalendarDate * date;                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;                               //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;                             //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL isDraft;                                          //@synthesize isDraft=_isDraft - In the implementation block
@property (assign,nonatomic) unsigned long long hiddenEventCount;                   //@synthesize hiddenEventCount=_hiddenEventCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)openEventStore;
+(void)closeEventStore;
-(unsigned long long)hiddenEventCount;
-(void)setHiddenEventCount:(unsigned long long)arg1 ;
-(BOOL)_crossesMultipleDays;
-(void)setIsDraft:(BOOL)arg1 ;
-(BOOL)_buildEvents;
-(void)_buildSections;
-(UIGestureRecognizer *)eventTapRecognizer;
-(void)_openEvent:(id)arg1 ;
-(void)setEventTapRecognizer:(UIGestureRecognizer *)arg1 ;
-(id)_eventFromAceEvent:(id)arg1 ;
-(void)tappedSingleEventGesture:(id)arg1 ;
-(BOOL)isDraft;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3 ;
-(void)dayView:(id)arg1 didSelectEvent:(id)arg2 ;
-(NSMutableArray *)events;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(EKCalendarDate *)date;
-(BOOL)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2 ;
-(void)loadView;
-(void)setDate:(EKCalendarDate *)arg1 ;
-(void)setSections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sections;
-(id)initWithAceObject:(id)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(double)desiredHeight;
@end

