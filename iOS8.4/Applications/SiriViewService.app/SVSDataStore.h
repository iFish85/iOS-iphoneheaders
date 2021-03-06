/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriViewService/AFUIDataStoring.h>

@class NSMutableDictionary, NSString;

@interface SVSDataStore : NSObject <AFUIDataStoring> {

	NSMutableDictionary* _entries;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEntries:(id)arg1 ;
-(id)init;
-(id)imageForKey:(id)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(id)propertyListRepresentation;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
@end

