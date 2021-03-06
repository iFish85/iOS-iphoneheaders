/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObject.h>

@class PLManagedAsset, NSString;

@interface PLManagedFace : PLManagedObject

@property (nonatomic,@dynamic,retain) PLManagedAsset * asset; 
@property (assign,nonatomic) CGRect relativeRect; 
@property (assign,nonatomic) short identifier; 
@property (nonatomic,@dynamic,retain) NSString * albumUUID; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)entityName;
+(id)insertInManagedObjectContext:(id)arg1 ;
-(short)identifier;
-(void)setIdentifier:(short)arg1 ;
-(void)delete;
-(void)setRelativeRect:(CGRect)arg1 ;
-(CGRect)relativeRect;
@end

