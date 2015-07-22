/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/NSSecureCoding.h>
#import <AccessibilityUtilities/NSCopying.h>

@class NSString, NSSet, NSUUID;

@interface AXVoiceOverUserSubstitution : NSObject <NSSecureCoding, NSCopying> {

	BOOL _active;
	BOOL _ignoreCase;
	BOOL _appliesToAllApps;
	BOOL _isReplacementTextAllPunctuation;
	BOOL _isReplacementTextSurroundedByPunctuation;
	NSString* _originalString;
	NSString* _replacementString;
	NSSet* _bundleIdentifiers;
	NSUUID* _uuid;

}

@property (nonatomic,copy) NSString * originalString;                                      //@synthesize originalString=_originalString - In the implementation block
@property (nonatomic,copy) NSString * replacementString;                                   //@synthesize replacementString=_replacementString - In the implementation block
@property (assign,nonatomic) BOOL active;                                                  //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL ignoreCase;                                              //@synthesize ignoreCase=_ignoreCase - In the implementation block
@property (assign,nonatomic) BOOL appliesToAllApps;                                        //@synthesize appliesToAllApps=_appliesToAllApps - In the implementation block
@property (nonatomic,copy) NSSet * bundleIdentifiers;                                      //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL isReplacementTextAllPunctuation;                       //@synthesize isReplacementTextAllPunctuation=_isReplacementTextAllPunctuation - In the implementation block
@property (nonatomic,readonly) BOOL isReplacementTextSurroundedByPunctuation;              //@synthesize isReplacementTextSurroundedByPunctuation=_isReplacementTextSurroundedByPunctuation - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                //@synthesize uuid=_uuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)replacementString;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(NSUUID *)uuid;
-(void)setIgnoreCase:(BOOL)arg1 ;
-(void)setAppliesToAllApps:(BOOL)arg1 ;
-(void)setOriginalString:(NSString *)arg1 ;
-(void)setReplacementString:(NSString *)arg1 ;
-(NSString *)originalString;
-(BOOL)ignoreCase;
-(BOOL)appliesToAllApps;
-(BOOL)isReplacementTextAllPunctuation;
-(BOOL)isReplacementTextSurroundedByPunctuation;
-(NSSet *)bundleIdentifiers;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setBundleIdentifiers:(NSSet *)arg1 ;
@end
