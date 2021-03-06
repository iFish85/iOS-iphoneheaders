/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <MobileCoreServices/MobileCoreServices-Structs.h>
@class NSString, NSURL, NSDictionary, NSArray, LSApplicationProxy;

@interface LSResourceProxy : NSObject {

	NSString* _localizedName;
	NSString* _boundApplicationIdentifier;
	NSURL* _boundContainerURL;
	NSURL* _boundResourcesDirURL;
	NSDictionary* _boundIconsDictionary;
	NSString* _boundIconCacheKey;
	NSArray* _boundIconFileNames;
	LSApplicationProxy* _typeOwner;
	BOOL _boundIconIsPrerendered;
	BOOL _boundIconIsBadge;

}

@property (nonatomic,readonly) NSString * localizedName;                    //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) BOOL boundIconIsBadge; 
@property (nonatomic,readonly) NSDictionary * iconsDictionary; 
+(int)_compareApplicationIconCanvasSize:(CGSize)arg1 withSize:(CGSize)arg2 ;
+(CGSize)_applicationIconCanvasSize;
-(SCD_Struct_LS0*)_iconDefinitionForSize:(CGSize)arg1 style:(id)arg2 ;
-(SCD_Struct_LS0*)_iconVariantDefinitions:(id)arg1 ;
-(CGSize)_largestImageSize:(id)arg1 ;
-(CGSize)_defaultStyleSize:(id)arg1 ;
-(id)_iconForStyle:(id)arg1 size:(CGSize)arg2 ;
-(id)_iconForStyle:(id)arg1 ;
-(void)setBoundApplicationIdentifier:(id)arg1 ;
-(void)setBoundContainerURL:(id)arg1 ;
-(void)setBoundResourcesDirectoryURL:(id)arg1 ;
-(void)setBoundIconsDictionary:(id)arg1 ;
-(void)setBoundIconCacheKey:(id)arg1 ;
-(void)setBoundIconFileNames:(id)arg1 ;
-(void)setTypeOwner:(id)arg1 ;
-(void)setBoundIconIsPrerendered:(BOOL)arg1 ;
-(void)setBoundIconIsBadge:(BOOL)arg1 ;
-(id)_initWithLocalizedName:(id)arg1 boundApplicationIdentifier:(id)arg2 boundContainerURL:(id)arg3 boundResourcesDirectoryURL:(id)arg4 boundIconsDictionary:(id)arg5 boundIconCacheKey:(id)arg6 boundIconFileNames:(id)arg7 typeOwner:(id)arg8 boundIconIsPrerendered:(BOOL)arg9 boundIconIsBadge:(BOOL)arg10 ;
-(id)boundIconsDictionary;
-(id)typeOwner;
-(id)boundResourcesDirectoryURL;
-(id)boundApplicationIdentifier;
-(id)boundContainerURL;
-(id)iconStyleDomain;
-(id)boundIconCacheKey;
-(BOOL)boundIconIsPrerendered;
-(id)boundIconFileNames;
-(id)_initWithLocalizedName:(id)arg1 ;
-(id)iconsDictionary;
-(void)dealloc;
-(id)iconDataForVariant:(int)arg1 ;
-(id)localizedName;
-(BOOL)boundIconIsBadge;
-(id)iconDataForStyle:(id)arg1 width:(int)arg2 height:(int)arg3 options:(unsigned)arg4 ;
-(void)setLocalizedName:(id)arg1 ;
@end

