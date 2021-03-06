/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:54:57 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AppleIDAuthAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleIDAuthAgent/AppleIDAuthAgent-Structs.h>
#import <AppleIDAuthAgent/XMLRPCEncoder.h>

@class NSString, NSArray;

@interface XMLRPCDefaultEncoder : NSObject <XMLRPCEncoder> {

	NSString* myMethod;
	NSArray* myParameters;

}
-(id)encodeString:(id)arg1 omitTag:(BOOL)arg2 ;
-(id)encode;
-(void)setMethod:(id)arg1 withParameters:(id)arg2 ;
-(id)encodeArray:(id)arg1 ;
-(id)encodeDictionary:(id)arg1 ;
-(id)encodeBoolean:(CFBooleanRef)arg1 ;
-(id)encodeNumber:(id)arg1 ;
-(id)encodeDate:(id)arg1 ;
-(id)encodeData:(id)arg1 ;
-(id)valueTag:(id)arg1 value:(id)arg2 ;
-(id)replaceTarget:(id)arg1 withValue:(id)arg2 inString:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)method;
-(id)parameters;
-(id)encodeObject:(id)arg1 ;
@end

