/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSRecursiveLock, Protocol, NSString, NSObject<OS_xpc_object>, NSObject<OS_dispatch_queue>;

@interface IMRemoteObjectInternal : NSObject  {
    NSRecursiveLock *_lock;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    long long _deathPostPredicate;
    Protocol *_protocol;
    NSString *_portName;
    bool_willBeTerminated;
    int _pid;
}



@end