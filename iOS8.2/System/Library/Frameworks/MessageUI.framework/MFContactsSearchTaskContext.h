/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFContactsSearchConsumer;
@class NSString, NSMutableSet;

@interface MFContactsSearchTaskContext : NSObject {

	id<MFContactsSearchConsumer> _consumer;
	NSString* _text;
	NSMutableSet* _operations;
	NSMutableSet* _searchQueries;

}

@property (nonatomic,readonly) id<MFContactsSearchConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,readonly) NSString * text;                                    //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSMutableSet * operations;                          //@synthesize operations=_operations - In the implementation block
@property (nonatomic,readonly) NSMutableSet * searchQueries;                       //@synthesize searchQueries=_searchQueries - In the implementation block
+(id)contextWithConsumer:(id)arg1 text:(id)arg2 operations:(id)arg3 searchQueries:(id)arg4 ;
-(NSMutableSet *)searchQueries;
-(void)dealloc;
-(NSString *)text;
-(char)done;
-(NSMutableSet *)operations;
-(id<MFContactsSearchConsumer>)consumer;
@end

