/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class NSArray;

@interface ABModelRecord : NSObject {

	int _recordID;
	CFStringRef _sortKey;
	long long _highlightIndex;
	BOOL _isGroup;
	NSArray* _namePieces;

}
-(id)initWithRecordID:(int)arg1 highlightIndex:(long long)arg2 group:(BOOL)arg3 namePieces:(id)arg4 sortKey:(CFStringRef)arg5 ;
-(long long)highlightIndex;
-(id)namePieces;
-(CFStringRef)sortKey;
-(void)dealloc;
-(BOOL)isGroup;
-(int)recordID;
@end

