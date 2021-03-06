/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSString;

@interface WKUserScript : NSObject <NSCopying> {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    } _source;
    long long _injectionTime;
    bool_forMainFrameOnly;
}

@property(copy,readonly) NSString * source;
@property(readonly) long long injectionTime;
@property(getter=isForMainFrameOnly,readonly) bool forMainFrameOnly;


- (bool)isForMainFrameOnly;
- (long long)injectionTime;
- (id)initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(bool)arg3;
- (void).cxx_destruct;
- (id)source;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
