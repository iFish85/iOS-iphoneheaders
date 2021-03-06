/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:49:51 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <CalendarFoundation/CalLogWriter.h>

@interface CalLogASLWriter : CalLogWriter {

	asl_object_sRef log_client;

}
+(id)aslNamespaces;
-(void)dealloc;
-(void)_configureASLClient;
-(void)_configureASLNamespaces;
-(int)aslLevelForLogLevel:(int)arg1 ;
-(void)write:(id)arg1 ;
-(id)initWithParameters:(id)arg1 ;
@end

