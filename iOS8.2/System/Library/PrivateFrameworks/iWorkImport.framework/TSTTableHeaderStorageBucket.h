/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSTTableHeaderStorage.h>

@class NSString;

@interface TSTTableHeaderStorageBucket : TSPObject <TSTTableHeaderStorage> {

	map<unsigned long, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, SFUtility::ObjcSharedPtr<NSObject> > > >* mMap;
	float mHorizontalScaleFactor;

}

@property (assign,nonatomic) float horizontalScaleFactor; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(unsigned long)flushableSize;
-(id)headerForKey:(unsigned long)arg1 willModify:(char)arg2 createIfNotThere:(char)arg3 ;
-(void)shiftKeysAtIndex:(unsigned long)arg1 amount:(long)arg2 ;
-(void)applyFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 willModify:(char)arg3 ;
-(id)headerForKey:(unsigned long)arg1 willModify:(char)arg2 ;
-(void)removeAllHeaders;
-(void)makeHeadersPerformSelector:(SEL)arg1 willModify:(char)arg2 ;
-(unsigned long)minKey;
-(unsigned long)maxKey;
-(unsigned long)upperBound:(unsigned long)arg1 ;
-(unsigned long)lowerBound:(unsigned long)arg1 ;
-(float)horizontalScaleFactor;
-(void)setHorizontalScaleFactor:(float)arg1 ;
-(void)dealloc;
-(int)count;
-(id)initWithContext:(id)arg1 ;
-(void)setHeader:(id)arg1 forKey:(unsigned long)arg2 ;
-(void)removeHeaderForKey:(unsigned long)arg1 ;
@end

