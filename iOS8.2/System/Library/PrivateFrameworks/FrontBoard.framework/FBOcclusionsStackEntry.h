/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:02 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSSet, NSOrderedSet;

@interface FBOcclusionsStackEntry : NSObject {

	NSString* _key;
	float _level;
	NSSet* _occlusions;
	NSOrderedSet* _orderedOcclusions;

}

@property (nonatomic,copy,readonly) NSString * key;                                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) float level;                                          //@synthesize level=_level - In the implementation block
@property (nonatomic,copy) NSSet * occlusions; 
@property (nonatomic,copy,readonly) NSOrderedSet * orderedOcclusions;              //@synthesize orderedOcclusions=_orderedOcclusions - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setLevel:(float)arg1 ;
-(float)level;
-(NSString *)key;
-(NSSet *)occlusions;
-(void)setOcclusions:(NSSet *)arg1 ;
-(NSOrderedSet *)orderedOcclusions;
-(id)initWithKey:(id)arg1 ;
@end

