/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:22:03 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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
-(unsigned)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

