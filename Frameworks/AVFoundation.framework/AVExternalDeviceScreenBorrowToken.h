/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVExternalDevice, NSString;

@interface AVExternalDeviceScreenBorrowToken : NSObject  {
    AVExternalDevice *_externalDevice;
    NSString *_client;
    NSString *_reason;
}

@property(readonly) NSString * client;
@property(readonly) NSString * reason;


- (void)finalize;
- (id)client;
- (id)reason;
- (id)init;
- (void)dealloc;
- (id)initWithExternalDevice:(id)arg1 client:(id)arg2 reason:(id)arg3;

@end