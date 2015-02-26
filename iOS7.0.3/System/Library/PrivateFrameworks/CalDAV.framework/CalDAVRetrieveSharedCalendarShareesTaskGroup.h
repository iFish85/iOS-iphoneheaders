/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate.h>

@class NSURL, NSSet;

@interface CalDAVRetrieveSharedCalendarShareesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {

	NSURL* _url;
	NSSet* _sharees;

}

@property (retain) NSSet * sharees;              //@synthesize sharees=_sharees - In the implementation block
@property (retain) NSURL * url;                  //@synthesize url=_url - In the implementation block
-(id)sharees;
-(void)setSharees:(id)arg1 ;
-(void)dealloc;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(id)initWithCalendarURL:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
@end
