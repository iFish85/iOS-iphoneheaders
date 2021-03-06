/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLToolsComputeCommandEncoder.h>

@protocol MTLDevice, MTLComputePipelineState;
@class MTLDebugFunctionArgument;

@interface MTLDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder {

	MTLDebugFunctionArgument* _buffers[31];
	MTLDebugFunctionArgument* _textures[31];
	MTLDebugFunctionArgument* _samplers[16];
	MTLDebugFunctionArgument* _threadgroupMemoryLengths[31];
	const SCD_Struct_MT4* _limits;
	BOOL canDealloc;
	BOOL canEndEncoding;
	BOOL canSetComputePipelineState;
	BOOL hasEndEncoding;
	BOOL hasSetComputePipelineState;
	id<MTLDevice> _cachedDevice;
	id<MTLComputePipelineState> _computePipelineState;

}

@property (nonatomic,readonly) id<MTLDevice> cachedDevice;                                           //@synthesize cachedDevice=_cachedDevice - In the implementation block
@property (nonatomic,__weak,readonly) id<MTLComputePipelineState> computePipelineState;              //@synthesize computePipelineState=_computePipelineState - In the implementation block
-(void)_setDefaults;
-(void)_validateAllFunctionArguments;
-(id<MTLDevice>)cachedDevice;
-(id)initWithComputeCommandEncoder:(id)arg1 commandBuffer:(id)arg2 ;
-(void)setComputePipelineState:(id<MTLComputePipelineState>)arg1 ;
-(void)setBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setSamplerStates:(const id*)arg1 lodMinClamps:(const float*)arg2 lodMaxClamps:(const float*)arg3 withRange:(NSRange)arg4 ;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)dispatchThreadgroups:(SCD_Struct_MT11)arg1 threadsPerThreadgroup:(SCD_Struct_MT11)arg2 ;
-(void)executeBarrier;
-(id<MTLComputePipelineState>)computePipelineState;
-(void)endEncoding;
-(void)dealloc;
-(id)description;
@end

