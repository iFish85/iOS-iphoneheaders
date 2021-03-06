/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CLIntersiloServiceProtocol.h>

@class CLSilo, CLIntersiloInterface;

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol> {

	CLSilo* _silo;
	CLIntersiloInterface* _inboundInterface;
	CLIntersiloInterface* _outboundInterface;

}

@property (nonatomic,readonly) CLSilo * silo;                                         //@synthesize silo=_silo - In the implementation block
@property (nonatomic,readonly) CLIntersiloInterface * inboundInterface;               //@synthesize inboundInterface=_inboundInterface - In the implementation block
@property (nonatomic,readonly) CLIntersiloInterface * outboundInterface;              //@synthesize outboundInterface=_outboundInterface - In the implementation block
+(id)getSilo;
-(id)initInSilo:(id)arg1 ;
-(void)heartAttack;
-(id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2 andSilo:(id)arg3 ;
-(id)silo;
-(id)inboundInterface;
-(id)outboundInterface;
-(BOOL)isHydrated;
-(id)init;
-(id)debugDescription;
-(void).cxx_destruct;
@end

