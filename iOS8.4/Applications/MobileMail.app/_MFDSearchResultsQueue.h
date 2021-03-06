/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFBufferedQueue.h>
#import <MobileMail/MFSearchResultHandler.h>

@protocol OS_dispatch_queue, MSDSearchResultsProtocol, MFMessageIterationFilter;
@class NSObject, MFMessageResultsGenerator;

@interface _MFDSearchResultsQueue : MFBufferedQueue <MFSearchResultHandler> {

	NSObject*<OS_dispatch_queue> _queue;
	id<MSDSearchResultsProtocol> _resultsProxy;
	id<MFMessageIterationFilter> _filter;
	MFMessageResultsGenerator* _generator;

}
-(id)initWithKeys:(id)arg1 resultsProxy:(id)arg2 filter:(id)arg3 ;
-(void)handleMessage:(id)arg1 ;
-(void)dealloc;
-(char)handleItems:(id)arg1 ;
-(void)beginResult:(unsigned)arg1 ;
-(void)setResultSubject:(char*)arg1 ;
-(void)setResultSender:(char*)arg1 ;
-(void)setResultDateRecieved:(double)arg1 ;
-(void)setResultUnread:(char)arg1 ;
-(void)endResult;
-(id)filter;
@end

