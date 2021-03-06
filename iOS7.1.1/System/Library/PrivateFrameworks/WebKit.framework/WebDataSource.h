/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WebDataSource : NSObject {

	void* _private;

}
+(id)_repTypesAllowImageTypeOmission:(bool)arg1 ;
+(void)initialize;
+(Class)_representationClassForMIMEType:(id)arg1 allowingPlugins:(bool)arg2 ;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(id)_URL;
-(id)_documentFragmentWithArchive:(id)arg1 ;
-(id)_documentFragmentWithImageResource:(id)arg1 ;
-(id)_imageElementWithImageResource:(id)arg1 ;
-(void)_finishedLoading;
-(void)_receivedData:(id)arg1 ;
-(void)_setMainDocumentError:(id)arg1 ;
-(void)_revertToProvisionalState;
-(void)_replaceSelectionWithArchive:(id)arg1 selectReplacement:(bool)arg2 ;
-(bool)_isDocumentHTML;
-(void)_makeRepresentation;
-(DocumentLoader*)_documentLoader;
-(id)_initWithDocumentLoader:(PassRefPtr<WebDocumentLoaderMac>*)arg1 ;
-(id)_webView;
-(id)_responseMIMEType;
-(id)dataSourceDelegate;
-(id)_mainDocumentError;
-(void)_addSubframeArchives:(id)arg1 ;
-(bool)_transferApplicationCache:(id)arg1 ;
-(void)_setDeferMainResourceDataLoad:(bool)arg1 ;
-(void)_setOverrideTextEncodingName:(id)arg1 ;
-(void)_setAllowToBeMemoryMapped;
-(void)setDataSourceDelegate:(id)arg1 ;
-(void)_setRepresentation:(id)arg1 ;
-(id)textEncodingName;
-(void)dealloc;
-(id)representation;
-(id)data;
-(id)initWithRequest:(id)arg1 ;
-(id)response;
-(id)webFrame;
-(id)request;
-(bool)isLoading;
-(id)webArchive;
-(id)pageTitle;
-(void)finalize;
-(id)unreachableURL;
-(id)subresourceForURL:(id)arg1 ;
-(id)mainResource;
-(void)addSubresource:(id)arg1 ;
-(id)initialRequest;
-(id)subresources;
@end

