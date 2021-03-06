/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLDevice : NSObject  {
}


- (id)description;
- (unsigned long long)maxMRT;
- (void)validateComputeFunction:(id)arg1;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id)arg3;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(id)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id)arg3;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(id)arg3;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)newLibraryWithData:(id)arg1 error:(id*)arg2;
- (id)newLibraryWithFile:(id)arg1 error:(id*)arg2;
- (id)newDefaultLibrary;
- (bool)supportsFeatureSet:(unsigned long long)arg1;

@end
