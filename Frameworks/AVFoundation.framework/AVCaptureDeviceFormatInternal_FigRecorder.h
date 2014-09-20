/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, NSDictionary, NSArray;

@interface AVCaptureDeviceFormatInternal_FigRecorder : NSObject  {
    NSString *mediaType;
    NSDictionary *formatDictionary;
    struct opaqueCMFormatDescription { } *formatDescription;
    NSArray *videoSupportedFrameRateRanges;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } defaultActiveMinFrameDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } defaultActiveMaxFrameDuration;
}



@end