/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:13 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <ExternalAccessory/WACUIHostProtocol.h>

@class EAWiFiUnconfiguredAccessoryBrowserManager, NSString;

@interface WACUIRemoteViewController : _UIRemoteViewController <WACUIHostProtocol> {

	EAWiFiUnconfiguredAccessoryBrowserManager* _parent;

}

@property (__weak) EAWiFiUnconfiguredAccessoryBrowserManager * parent;              //@synthesize parent=_parent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)dismissWithStatus:(int)arg1 ;
-(void)updateState:(long long)arg1 ;
-(void)backendDidStartSearchWithError:(id)arg1 ;
-(void)backendDidStopSearchWithError:(id)arg1 ;
-(void)backendFoundNewWACDevices:(id)arg1 andRemovedWACDevices:(id)arg2 ;
-(void)_signalPresentationComplete;
-(void)wifiDidShutdown;
-(void)setParent:(EAWiFiUnconfiguredAccessoryBrowserManager *)arg1 ;
-(EAWiFiUnconfiguredAccessoryBrowserManager *)parent;
@end

