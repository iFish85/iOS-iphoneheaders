/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:00:59 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/MTLArgument.h>

@interface MTLTextureArgument : MTLArgument {

	unsigned short _textureType;
	unsigned short _textureDataType;

}
-(unsigned)textureType;
-(unsigned)textureDataType;
-(id)initWithName:(id)arg1 access:(unsigned)arg2 isActive:(char)arg3 locationIndex:(unsigned)arg4 arraySize:(unsigned)arg5 dataType:(unsigned)arg6 textureType:(unsigned)arg7 ;
-(id)description;
@end

