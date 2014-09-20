/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@class CDDebug;

@interface CDDPluginResponder : NSObject  {
    CDDebug *_debug;
}

@property(readonly) CDDebug * debug;


- (bool)respondToAdmissionCheckAndStartedOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 status:(bool)arg4 reasons:(id)arg5 error:(id*)arg6;
- (bool)respondToTriggerOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 info:(id)arg4 error:(id*)arg5;
- (bool)respondToAdmissionSignoffOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 status:(bool)arg4 reasons:(id)arg5 error:(id*)arg6;
- (bool)respondToInitOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 info:(id)arg4 error:(id*)arg5;
- (bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 error:(id*)arg5;
- (id)makeStashWithId:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)debug;

@end