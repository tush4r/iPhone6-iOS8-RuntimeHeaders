/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSURL, AVMediaFileType, NSArray;

@interface AVAssetWriterConfigurationState : NSObject  {
    NSURL *_URL;
    AVMediaFileType *_mediaFileType;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _movieFragmentInterval;
    bool_shouldOptimizeForNetworkUse;
    NSURL *_directoryForTemporaryFiles;
    NSArray *_metadataItems;
    int _movieTimeScale;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } _preferredTransform;
    float _preferredVolume;
    float _preferredRate;
    NSArray *_inputs;
    NSArray *_inputGroups;
}

@property(copy) NSURL * URL;
@property(copy) AVMediaFileType * mediaFileType;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;
@property bool shouldOptimizeForNetworkUse;
@property(copy) NSURL * directoryForTemporaryFiles;
@property(copy) NSArray * metadataItems;
@property int movieTimeScale;
@property struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property float preferredVolume;
@property float preferredRate;
@property(copy) NSArray * inputs;
@property(copy) NSArray * inputGroups;


- (void)setShouldOptimizeForNetworkUse:(bool)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (void)setURL:(id)arg1;
- (id)URL;
- (void)dealloc;
- (void)setInputGroups:(id)arg1;
- (id)inputGroups;
- (void)setInputs:(id)arg1;
- (void)setPreferredRate:(float)arg1;
- (void)setMovieTimeScale:(int)arg1;
- (int)movieTimeScale;
- (void)setMetadataItems:(id)arg1;
- (id)metadataItems;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (id)directoryForTemporaryFiles;
- (bool)shouldOptimizeForNetworkUse;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (void)setMediaFileType:(id)arg1;
- (id)mediaFileType;
- (void)setPreferredVolume:(float)arg1;
- (void)setPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (float)preferredVolume;
- (float)preferredRate;
- (id)inputs;

@end