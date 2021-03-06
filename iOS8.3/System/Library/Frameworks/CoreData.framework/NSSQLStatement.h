/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:41:05 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSQLEntity, NSMutableArray, NSString, NSCachedFetchRequestInfo;

@interface NSSQLStatement : NSObject {

	NSSQLEntity* _entity;
	NSMutableArray* _bindVariables;
	NSMutableArray* _bindIntarrays;
	NSString* _sqlString;
	char _isImpossibleCondition;
	NSSQLEntity* _fakeEntityForFetch;
	NSCachedFetchRequestInfo* _cachedStatementInfo;

}

@property (nonatomic,retain) NSCachedFetchRequestInfo * cachedStatementInfo;              //@synthesize cachedStatementInfo=_cachedStatementInfo - In the implementation block
-(unsigned)addBindVariable:(id)arg1 ;
-(void)setImpossibleCondition:(char)arg1 ;
-(id)sqlString;
-(id)initWithEntity:(id)arg1 ;
-(id)initWithEntity:(id)arg1 sqlString:(id)arg2 ;
-(void)setSQLString:(id)arg1 ;
-(NSCachedFetchRequestInfo *)cachedStatementInfo;
-(id)bindVariables;
-(id)bindIntarrays;
-(char)isImpossibleCondition;
-(id)fakeEntityForFetch;
-(void)removeAllBindVariables;
-(void)setBindIntarrays:(id)arg1 ;
-(void)setBindVariables:(id)arg1 ;
-(void)cacheFakeEntityForFetch:(id)arg1 ;
-(void)setCachedStatementInfo:(NSCachedFetchRequestInfo *)arg1 ;
-(unsigned)addBindIntarray:(id)arg1 ;
-(void)removeAllBindIntarrays;
-(void)dealloc;
-(id)description;
-(char)isReadOnly;
-(id)entity;
-(void)clearCaches;
@end

