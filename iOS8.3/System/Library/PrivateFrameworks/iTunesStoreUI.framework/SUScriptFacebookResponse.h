/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:40:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptError;

@interface SUScriptFacebookResponse : SUScriptObject {

	NSString* _bodyData;
	SUScriptError* _error;
	int _statusCode;

}

@property (readonly) NSString * bodyData; 
@property (readonly) SUScriptError * error; 
@property (readonly) int HTTPStatusCode; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)bodyData;
-(void)dealloc;
-(SUScriptError *)error;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)attributeKeys;
-(id)initWithData:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(int)HTTPStatusCode;
@end

