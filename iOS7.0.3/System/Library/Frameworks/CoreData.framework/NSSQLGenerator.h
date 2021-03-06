/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSSQLCore;

@interface NSSQLGenerator : NSObject {

	NSSQLCore* _persistentStore;

}
+(void)initialize;
-(id)initWithPersistentStore:(id)arg1 ;
-(id)newSQLStatementForFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 countOnly:(BOOL)arg3 nestingLevel:(unsigned)arg4 ;
-(id)_predicateRestrictingSuperentitiesForEntity:(id)arg1 ;
-(id)_predicateRestrictingToSubentitiesForEntity:(id)arg1 ;
-(id)_predicateForSpecificEntity:(id)arg1 ;
-(void)generateWhereIntermediatesInContext:(id)arg1 ;
-(void)generateGroupByIntermediatesForProperties:(id)arg1 inContext:(id)arg2 ;
-(void)generateHavingIntermediateForPredicate:(id)arg1 inContext:(id)arg2 ;
-(void)generateSelectIntermediateInContext:(id)arg1 ;
-(void)generateOrderIntermediateInContext:(id)arg1 ;
-(void)generateIntermediateForLimit:(unsigned)arg1 inContext:(id)arg2 ;
-(void)generateIntermediateForOffset:(unsigned)arg1 inContext:(id)arg2 ;
-(id)predicateForFetchRequestInContext:(id)arg1 ;
-(id)initializeContextForFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 nestingLevel:(unsigned)arg3 ;
-(id)generateIntermediatesForFetchInContext:(id)arg1 countOnly:(BOOL)arg2 ;
@end

