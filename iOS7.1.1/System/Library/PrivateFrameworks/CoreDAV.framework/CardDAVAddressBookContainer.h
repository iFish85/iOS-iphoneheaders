/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainer.h>

@class NSString, NSURL;

@interface CardDAVAddressBookContainer : CoreDAVContainer {

	NSString* _maxResourceSize;
	NSString* _maxImageSize;
	NSURL* _meCardURL;

}

@property (retain) NSString * maxResourceSize;              //@synthesize maxResourceSize=_maxResourceSize - In the implementation block
@property (retain) NSString * maxImageSize;                 //@synthesize maxImageSize=_maxImageSize - In the implementation block
@property (retain) NSURL * meCardURL;                       //@synthesize meCardURL=_meCardURL - In the implementation block
@property (readonly) bool isAddressBook; 
@property (readonly) bool isSharedAddressBook; 
@property (readonly) bool isSearchAddressBook; 
+(id)copyPropertyMappingsForParser;
-(void)dealloc;
-(id)description;
-(void)applyParsedProperties:(id)arg1 ;
-(id)maxResourceSize;
-(void)setMaxResourceSize:(id)arg1 ;
-(void)setMeCardURL:(id)arg1 ;
-(bool)isAddressBook;
-(bool)isSearchAddressBook;
-(bool)isSharedAddressBook;
-(id)meCardURL;
-(void)setMaxImageSize:(id)arg1 ;
-(id)maxImageSize;
@end

