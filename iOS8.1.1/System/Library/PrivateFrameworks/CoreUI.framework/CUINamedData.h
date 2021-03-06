/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CUIRenditionKey, NSString, NSData;

@interface CUINamedData : NSObject {

	CUIRenditionKey* _key;
	unsigned long long _storageRef;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * utiType; 
@property (nonatomic,readonly) NSData * data; 
-(void)dealloc;
-(id)description;
-(NSData *)data;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)utiType;
-(id)_rendition;
-(id)_themeStore;
-(id)_renditionForSpecificKey:(id)arg1 ;
-(id)_renditionName;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
@end

