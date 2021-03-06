/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:35:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSHashTable, NSMapTable, NSArray;

@interface SBUIBannerTargetManager : NSObject {

	NSHashTable* _proxies;
	NSMapTable* _implementationToProxyMap;
	NSHashTable* _observers;

}

@property (nonatomic,retain,readonly) NSArray * targets; 
+(id)sharedInstance;
-(NSArray *)targets;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_notifyObservers:(/*^block*/id)arg1 ;
-(void)_registerTargetImplementation:(id)arg1 ;
-(void)_unregisterTargetImplementation:(id)arg1 ;
-(id)_proxyForTargetImplementation:(id)arg1 ;
@end

