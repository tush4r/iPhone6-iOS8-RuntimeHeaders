/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class FBSContext;

@interface FBSWorkspaceSceneContextEvent : FBSWorkspaceSceneEvent  {
    FBSContext *_context;
    bool_orderOut;
}

@property(retain) FBSContext * context;
@property bool orderOut;


- (void)setOrderOut:(bool)arg1;
- (bool)orderOut;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setContext:(id)arg1;
- (id)context;
- (id)description;
- (void)dealloc;

@end