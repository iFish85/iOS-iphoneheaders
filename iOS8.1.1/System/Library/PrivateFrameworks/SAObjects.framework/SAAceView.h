/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SAAceView : AceObject <SAAceSerializable>

@property (nonatomic,retain) id<SAAceSerializable> context; 
@property (assign,nonatomic) BOOL deferredRendering; 
@property (nonatomic,copy) NSNumber * listenAfterSpeaking; 
@property (nonatomic,copy) NSString * speakableText; 
@property (nonatomic,copy) NSString * viewId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceView;
+(id)aceViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id<SAAceSerializable>)context;
-(void)setContext:(id<SAAceSerializable>)arg1 ;
-(id)encodedClassName;
-(NSNumber *)listenAfterSpeaking;
-(void)setListenAfterSpeaking:(NSNumber *)arg1 ;
-(NSString *)speakableText;
-(void)setSpeakableText:(NSString *)arg1 ;
-(BOOL)deferredRendering;
-(void)setDeferredRendering:(BOOL)arg1 ;
-(NSString *)viewId;
-(void)setViewId:(NSString *)arg1 ;
@end
