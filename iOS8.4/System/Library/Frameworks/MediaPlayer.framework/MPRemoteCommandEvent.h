/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, MPRemoteCommand;

@interface MPRemoteCommandEvent : NSObject {

	NSDictionary* _mediaRemoteOptions;
	NSString* _contextID;
	MPRemoteCommand* _command;
	double _timestamp;

}

@property (nonatomic,readonly) MPRemoteCommand * command;              //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
+(id)eventWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(id)mediaRemoteOptions;
-(MPRemoteCommand *)command;
-(id)init;
-(double)timestamp;
-(id)contextID;
@end

