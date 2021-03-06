/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:49:51 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@protocol CalDAVCalendar, CalDAVPrincipal;
@class CalDAVBulkUploadTaskGroup;

@interface CalDAVMergeUploadTaskGroup : CoreDAVTaskGroup {

	id<CalDAVCalendar> _calendar;
	id<CalDAVPrincipal> _principal;
	CalDAVBulkUploadTaskGroup* _uploadTaskGroup;
	char _shouldTrySyncTokenForBulkUpload;

}
-(void)dealloc;
-(id)initWithCalendar:(id)arg1 principal:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4 ;
-(void)_performBulkUpload;
-(void)_performRegularUpload;
-(void)startTaskGroup;
-(void)cancelTaskGroup;
-(id)dataContentType;
@end

