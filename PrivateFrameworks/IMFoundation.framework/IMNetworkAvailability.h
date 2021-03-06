/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSTimer;

@interface IMNetworkAvailability : NSObject  {
    NSString *_guid;
    NSTimer *_timer;
    void *_context;
    double _timeout;
    double _wifiTimeout;
    double _startTime;
    unsigned long long _flags;
    unsigned long long _options;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

}

@property void* context;


- (id)initWithFlags:(unsigned long long)arg1 timeout:(double)arg2 wifiTimeout:(double)arg3 completionBlock:(id)arg4;
- (void)_timerHit:(id)arg1;
- (void)_setTimer;
- (id)initWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 timeout:(double)arg3 wifiTimeout:(double)arg4 completionBlock:(id)arg5;
- (void)_cancel;
- (void)start;
- (void)setContext:(void*)arg1;
- (void*)context;
- (void)dealloc;
- (void)cancel;

@end
