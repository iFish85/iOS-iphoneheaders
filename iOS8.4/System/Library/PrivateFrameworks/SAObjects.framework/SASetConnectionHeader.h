/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SAConnectionPolicy;

@interface SASetConnectionHeader : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * aceHostHeader; 
@property (nonatomic,retain) SAConnectionPolicy * connectionPolicy; 
@property (assign,nonatomic) BOOL reconnectNow; 
+(id)setConnectionHeader;
+(id)setConnectionHeaderWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAConnectionPolicy *)connectionPolicy;
-(NSString *)aceHostHeader;
-(void)setAceHostHeader:(NSString *)arg1 ;
-(void)setConnectionPolicy:(SAConnectionPolicy *)arg1 ;
-(BOOL)reconnectNow;
-(void)setReconnectNow:(BOOL)arg1 ;
@end

