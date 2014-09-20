/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class WKGeolocationProviderIOS, <WKProcessGroupDelegate>;

@interface WKProcessGroup : NSObject  {
    struct RefPtr<WebKit::WebContext> { 
        struct WebContext {} *m_ptr; 
    } _context;
    struct WeakObjCPtr<id<WKProcessGroupDelegate> > { 
        id m_weakReference; 
    } _delegate;
    struct RetainPtr<WKGeolocationProviderIOS> { 
        void *m_ptr; 
    } _geolocationProvider;
}

@property(readonly) struct OpaqueWKContext { }* _contextRef;
@property(readonly) WKGeolocationProviderIOS * _geolocationProvider;
@property <WKProcessGroupDelegate> * delegate;


- (id)initWithInjectedBundleURL:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)_setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
- (id)_geolocationProvider;
- (struct OpaqueWKContext { }*)_contextRef;

@end