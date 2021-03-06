/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackBoardServices/BKSXPCServerClient.h>

@protocol OS_xpc_object;
@class NSObject;

@interface BKSBasicServerClient : NSObject <BKSXPCServerClient> {

	NSObject<OS_xpc_object>* _connection;

}

@property (nonatomic,retain) NSObject<OS_xpc_object> * connection;              //@synthesize connection=_connection - In the implementation block
+(id)wrapperWithConnection:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id)connection;
-(void)setConnection:(id)arg1 ;
@end

