/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PHObject;

@interface PHObjectChangeDetails : NSObject {

	PHObject* _objectBeforeChanges;
	PHObject* _objectAfterChanges;
	BOOL _assetContentChanged;

}

@property (readonly) id objectBeforeChanges; 
@property (readonly) id objectAfterChanges; 
@property (readonly) BOOL assetContentChanged; 
@property (readonly) BOOL objectWasDeleted; 
-(id)objectBeforeChanges;
-(id)initWithPHObject:(id)arg1 assetContentChanged:(BOOL)arg2 ;
-(BOOL)assetContentChanged;
-(BOOL)objectWasDeleted;
-(id)objectAfterChanges;
-(id)description;
-(void)_calculateDiffs;
@end

