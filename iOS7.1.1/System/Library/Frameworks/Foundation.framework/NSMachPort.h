/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSPort.h>

@interface NSMachPort : NSPort {

	id _delegate;
	unsigned long long _flags;
	unsigned _machPort;
	unsigned long long _reserved;

}
+(id)portWithMachPort:(unsigned)arg1 ;
+(bool)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned)arg6 reserved:(unsigned long long)arg7 ;
+(void)resetAllPorts;
+(id)portWithMachPort:(unsigned)arg1 options:(unsigned long long)arg2 ;
+(void)_fixNSMachPortLeak;
+(id)port;
-(unsigned)machPort;
-(unsigned long long)_cfTypeID;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)initWithMachPort:(unsigned)arg1 ;
-(bool)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4 ;
-(bool)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5 ;
-(id)initWithMachPort:(unsigned)arg1 options:(unsigned long long)arg2 ;
-(bool)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned)arg5 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(bool)isKindOfClass:(Class)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(bool)isMemberOfClass:(Class)arg1 ;
-(unsigned long long)retainCount;
-(id)delegate;
-(void)invalidate;
-(bool)isValid;
-(bool)_tryRetain;
-(bool)_isDeallocating;
-(void)finalize;
@end

