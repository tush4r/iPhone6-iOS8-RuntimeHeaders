/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVOutputSettingsAssistantBaseSettingsProvider>, <AVOutputSettingsAssistantVideoSettingsAdjuster>;

@interface AVOutputSettingsAssistantInternal : NSObject  {
    <AVOutputSettingsAssistantBaseSettingsProvider> *baseSettingsProvider;
    <AVOutputSettingsAssistantVideoSettingsAdjuster> *videoSettingsAdjuster;
    struct opaqueCMFormatDescription { } *sourceVideoFormat;
    struct opaqueCMFormatDescription { } *sourceAudioFormat;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } sourceVideoAverageFrameDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } sourceVideoMinFrameDuration;
}



@end
