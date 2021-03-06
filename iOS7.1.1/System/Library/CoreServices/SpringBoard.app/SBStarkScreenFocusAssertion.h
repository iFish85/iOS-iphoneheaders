/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, UIWindow;

@interface SBStarkScreenFocusAssertion : NSObject {

	NSString* _name;
	int _type;
	float _priority;
	UIWindow* _window;
	NSString* _bundleID;

}

@property (nonatomic,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) float priority;                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) UIWindow * window;                //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
-(id)initWithName:(id)arg1 type:(int)arg2 priority:(float)arg3 window:(id)arg4 application:(id)arg5 ;
-(id)bundleID;
-(void)dealloc;
-(id)window;
-(id)description;
-(int)type;
-(id)name;
-(float)priority;
@end

