/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSString, NSDate;

@interface PCScheduleSystemWakeOperation : NSOperation  {
    bool_scheduleOrCancel;
    NSDate *_wakeDate;
    NSString *_serviceIdentifier;
    void *_unqiueIdentifier;
}


- (id)initForScheduledWake:(bool)arg1 wakeDate:(id)arg2 serviceIdentifier:(id)arg3 uniqueIdentifier:(void*)arg4;
- (void)main;
- (void)dealloc;

@end
