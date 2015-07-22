/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKTextMessagePartChatItem.h>

@class NSArray, NSString;

@interface CKAggregateMessagePartChatItem : CKTextMessagePartChatItem {

	NSArray* _subparts;

}

@property (nonatomic,copy) NSArray * subparts;                     //@synthesize subparts=_subparts - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
-(id)composition;
-(NSString *)title;
-(Class)balloonViewClass;
-(id)pasteboardItems;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(void)setSubparts:(NSArray *)arg1 ;
-(NSArray *)subparts;
@end
