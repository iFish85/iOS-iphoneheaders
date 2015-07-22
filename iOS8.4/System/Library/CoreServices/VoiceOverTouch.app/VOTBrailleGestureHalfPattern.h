/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <vot/vot-Structs.h>
#import <vot/NSCopying.h>

@class NSValue;

@interface VOTBrailleGestureHalfPattern : NSObject <NSCopying> {

	NSValue* _topDot;
	NSValue* _middleDot;
	NSValue* _bottomDot;
	NSValue* _fourthDot;

}

@property (nonatomic,retain) NSValue * topDot;                 //@synthesize topDot=_topDot - In the implementation block
@property (nonatomic,retain) NSValue * middleDot;              //@synthesize middleDot=_middleDot - In the implementation block
@property (nonatomic,retain) NSValue * bottomDot;              //@synthesize bottomDot=_bottomDot - In the implementation block
@property (nonatomic,retain) NSValue * fourthDot;              //@synthesize fourthDot=_fourthDot - In the implementation block
+(id)halfPatternWithTopDot:(id)arg1 middleDot:(id)arg2 bottomDot:(id)arg3 fourthDot:(id)arg4 ;
+(id)halfPatternWithTopDot:(id)arg1 middleDot:(id)arg2 bottomDot:(id)arg3 ;
+(id)halfPatternWithDictionaryRepresentation:(id)arg1 ;
-(void)setTopDot:(NSValue *)arg1 ;
-(void)setMiddleDot:(NSValue *)arg1 ;
-(void)setBottomDot:(NSValue *)arg1 ;
-(void)setFourthDot:(NSValue *)arg1 ;
-(NSValue *)topDot;
-(NSValue *)middleDot;
-(NSValue *)bottomDot;
-(NSValue *)fourthDot;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
