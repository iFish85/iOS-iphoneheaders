/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Movie.qldisplay/Movie
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface QLAVStateController : NSObject {

	NSMutableDictionary* _clientsForPID;
	long long _currentPID;

}
+(id)sharedController;
-(id)_clientsForPID:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
@end

