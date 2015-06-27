/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:41:58 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDRoot.h>

@class GQDSLPageMargins, GQDSStylesheet;

@interface GQDSLPublication : GQDRoot {

	CGSize mPageSize;
	GQDSLPageMargins* mPageMargins;
	GQDSStylesheet* mStylesheet;
	char mHasBody;
	char mIsOldTemplateNameMapInitialized;
	CFDictionaryRef mOldTemplateNameMap;
	char mShowOutliner;
	char mHasHeaders;
	char mHasFooters;

}
+(xmlNs*)appNamespace;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(CFURLRef)createUrlToAppBundleResource:(CFStringRef)arg1 processorBundle:(CFBundleRef)arg2 fileUrl:(CFURLRef)arg3 ;
-(void)initializeAppBundleResourcesUrl:(CFURLRef)arg1 ;
-(void)setPageMargins:(id)arg1 ;
-(CFStringRef)createFixedPathForOldAppBundleResourcePath:(CFStringRef)arg1 ;
-(id)pageMargins;
-(char)hasBody;
-(char)showOutliner;
-(char)hasHeaders;
-(char)hasFooters;
-(CFArrayRef)createUpgradedPathComponentsFromOldTemplatePathComponents:(CFArrayRef)arg1 ;
-(CFStringRef)createUpgradedPathForOldAssetPath:(CFStringRef)arg1 ;
-(void)dealloc;
-(id)init;
-(CGSize)pageSize;
-(id)stylesheet;
-(void)setStylesheet:(id)arg1 ;
@end
