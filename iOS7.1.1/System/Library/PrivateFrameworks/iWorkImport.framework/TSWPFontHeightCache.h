/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPFontHeightCache : NSObject {

	list<unsigned long, std::__1::allocator<unsigned long> >* _fontHashList;
	map<unsigned long, TSWPFontHeightCacheEntry, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TSWPFontHeightCacheEntry> > >* _fontHashToInfoMap;
	unsigned _cacheSize;
	unsigned _maxCacheSize;
	opaque_pthread_rwlock_t _lock;

}
+(id)sharedCache;
+(id)allocWithZone:(NSZone)arg1 ;
+(id)_singletonAlloc;
-(SCD_Struct_TS610)fontHeightInfoForFont:(CTFontRef)arg1 ;
-(bool)p_findEntryForFont:(CTFontRef)arg1 outHeightInfo:(SCD_Struct_TS610*)arg2 collision:(bool*)arg3 ;
-(void)p_addEntryForFont:(CTFontRef)arg1 heightInfo:(const SCD_Struct_TS610*)arg2 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone)arg1 ;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

