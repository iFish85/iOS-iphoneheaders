/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:55 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TabDocumentWK2, _WKRemoteObjectInterface;

@interface PageLoadTestWK2 : NSObject {

	TabDocumentWK2* _tabDocument;
	_WKRemoteObjectInterface* _eventsListenerInterface;

}
-(id)initWithTabDocument:(id)arg1 ;
-(void)_setUpPageLoadTestEventsListener;
-(void)_enablePageLoadMeasurementCollection;
-(void)didFinishPageLoadWithLoadData:(id)arg1 ;
-(void)dealloc;
@end
