/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BBObserverServerInterface
@required
-(void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned long long)arg3;
-(void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(id)arg2;
-(void)getSectionOrderRuleWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForCategory:(long long)arg1 withHandler:(/*^block*/id)arg2;
-(void)requestNoticesBulletinsForSectionID:(id)arg1;
-(void)requestTodayBulletinsForSectionID:(id)arg1;
-(void)requestFutureBulletinsForSectionID:(id)arg1;
-(void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getActiveAlertBehaviorOverridesWithHandler:(/*^block*/id)arg1;
-(void)getPrivilegedSenderTypesWithHandler:(/*^block*/id)arg1;
-(void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(/*^block*/id)arg1;
-(void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getBulletinsForPublisherBulletinIDs:(id)arg1 sectionID:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)handleResponse:(id)arg1;
-(void)clearSection:(id)arg1;
-(void)clearBulletinIDs:(id)arg1 inSection:(id)arg2;
-(void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned long long)arg3;
-(void)getSectionParametersForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getAttachmentPNGDataForBulletinID:(id)arg1 sizeConstraints:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)getAttachmentAspectRatioForBulletinID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned long long)arg2;

@end

