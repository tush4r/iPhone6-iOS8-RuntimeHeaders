/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSMapTable, <FigCameraViewfinderRemoteObject>, NSString, NSObject<OS_dispatch_queue>, FigStateMachine, FigNSXPCConnection;

@interface FigCameraViewfinderRemote : FigCameraViewfinder <FigCameraViewfinderRemoteObjectCallbacks> {
    NSMapTable *_weakSessionTable;
    FigStateMachine *_stateMachine;
    FigNSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionManagementQueue;
    <FigCameraViewfinderRemoteObject> *_remoteViewfinder;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)remoteObjectCallbacksInterface;
+ (id)cameraViewfinder;
+ (void)initialize;

- (void)_handleServerDeathWithOptions:(id)arg1 reconnect:(bool)arg2;
- (void)_teardownXPCConnectionAndRemoteViewfinder;
- (void)_bringupXPCConnectionAndStartRemoteViewfinderWithOptions:(id)arg1;
- (void)viewfinderSession:(long long)arg1 previewStreamDidCloseWithStatus:(int)arg2;
- (void)viewfinderSessionPreviewStreamDidOpen:(long long)arg1;
- (void)viewfinderSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)viewfinderSessionDidEnd;
- (void)viewfinderSessionDidBegin:(id)arg1 withIdentifier:(long long)arg2;
- (void)startWithOptions:(id)arg1;
- (void)_setupStateMachine;
- (void)stop;
- (id)init;
- (void)dealloc;

@end