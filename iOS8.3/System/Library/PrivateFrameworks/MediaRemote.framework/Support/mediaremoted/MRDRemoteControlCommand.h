/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:26:33 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <mediaremoted/mediaremoted-Structs.h>
@class NSString, NSData;

@interface MRDRemoteControlCommand : NSObject {

	NSString* _cachedRouteUID;
	/*^block*/id _completionHandler;
	unsigned _commandType;
	NSData* _optionsData;
	MROriginRef _origin;
	NSString* _destinationAppDisplayID;
	unsigned _appOptions;

}

@property (nonatomic,readonly) unsigned commandType;                            //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,readonly) NSData * optionsData;                            //@synthesize optionsData=_optionsData - In the implementation block
@property (nonatomic,readonly) MROriginRef origin;                              //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) NSString * destinationAppDisplayID;              //@synthesize destinationAppDisplayID=_destinationAppDisplayID - In the implementation block
@property (nonatomic,readonly) unsigned appOptions;                             //@synthesize appOptions=_appOptions - In the implementation block
@property (nonatomic,readonly) NSString * routeUID; 
-(void)setCommandType:(unsigned)arg1 ;
-(unsigned)appOptions;
-(NSString *)destinationAppDisplayID;
-(id)initWithCommandType:(unsigned)arg1 optionsData:(id)arg2 ;
-(void)setDestinationAppDisplayID:(NSString *)arg1 ;
-(void)setAppOptions:(unsigned)arg1 ;
-(NSString *)routeUID;
-(void)dealloc;
-(id)description;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(MROriginRef)origin;
-(void)setOrigin:(MROriginRef)arg1 ;
-(/*^block*/id)_completionHandler;
-(NSData *)optionsData;
-(unsigned)commandType;
@end

