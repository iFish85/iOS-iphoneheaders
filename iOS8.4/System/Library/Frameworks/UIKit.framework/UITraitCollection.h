/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCopying.h>
#import <UIKit/NSSecureCoding.h>

@class NSDictionary;

@interface UITraitCollection : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_UI94 _builtinTraits;
	NSDictionary* _clientDefinedTraits;

}

@property (nonatomic,readonly) BOOL MPU_hasCompactHeight; 
@property (nonatomic,readonly) BOOL MPU_hasCompactWidth; 
@property (nonatomic,readonly) BOOL MPU_hasRegularHeight; 
@property (nonatomic,readonly) BOOL MPU_hasRegularWidth; 
@property (nonatomic,readonly) long long userInterfaceIdiom; 
@property (nonatomic,readonly) double displayScale; 
@property (nonatomic,readonly) long long horizontalSizeClass; 
@property (nonatomic,readonly) long long verticalSizeClass; 
+(BOOL)supportsSecureCoding;
+(id)traitCollectionWithDisplayScale:(double)arg1 ;
+(id)traitCollectionWithHorizontalSizeClass:(long long)arg1 ;
+(id)traitCollectionWithVerticalSizeClass:(long long)arg1 ;
+(id)traitCollectionWithTraitsFromCollections:(id)arg1 ;
+(id)_emptyTraitCollection;
+(id)traitCollectionWithUserInterfaceIdiom:(long long)arg1 ;
+(id)traitCollectionWithInteractionModel:(unsigned long long)arg1 ;
+(id)traitCollectionWithTouchLevel:(long long)arg1 ;
+(id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2 ;
-(BOOL)MPU_hasRegularWidth;
-(BOOL)MPU_hasRegularHeight;
-(BOOL)MPU_hasCompactHeight;
-(BOOL)MPU_hasCompactWidth;
-(BOOL)_maps_isLegacyLandscape;
-(id)_namedImageDescription;
-(void)dealloc;
-(long long)userInterfaceIdiom;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)verticalSizeClass;
-(long long)horizontalSizeClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithBuiltinTraitStorage:(SCD_Struct_UI94*)arg1 clientDefinedTraits:(id)arg2 ;
-(double)displayScale;
-(BOOL)containsTraitsInCollection:(id)arg1 ;
-(unsigned long long)interactionModel;
-(id)_valueForTraitNamed:(id)arg1 ;
-(long long)_compare:(id)arg1 ;
-(BOOL)_matchesIntersectionWithTraitCollection:(id)arg1 ;
-(long long)touchLevel;
@end
