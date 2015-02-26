/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@interface CPMemoryPoolFile : NSObject {

	opaque_pthread_mutex_t _mutex;
	int _fd;
	char* _slots;
	unsigned long long _slotCount;
	unsigned long long _slotLength;
	CFBitVectorRef _usedSlots;
	CFAllocatorRef _deallocator;

}
-(void)dealloc;
-(id)initWithLabel:(const char*)arg1 slotCount:(unsigned long long)arg2 slotLength:(unsigned long long)arg3 ;
-(id)nextSlotWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)returnSlot:(void*)arg1 ;
@end
