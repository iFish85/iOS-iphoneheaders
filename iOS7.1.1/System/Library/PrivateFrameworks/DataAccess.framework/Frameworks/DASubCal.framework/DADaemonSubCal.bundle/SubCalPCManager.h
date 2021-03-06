/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/PCConnectionManagerDelegate.h>

@protocol SubCalPCManagerDelegate;
@class PCConnectionManager;

@interface SubCalPCManager : NSObject <PCConnectionManagerDelegate> {

	PCConnectionManager* _pcManager;
	<SubCalPCManagerDelegate>* _delegate;

}
-(void)dealloc;
-(void)stop;
-(void)connectionManager:(id)arg1 handleEvent:(int)arg2 ;
-(id)initWithDelegate:(id)arg1 serviceIdentifier:(id)arg2 ;
-(void)restart;
@end

