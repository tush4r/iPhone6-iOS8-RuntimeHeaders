/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPrinterSetupConnectingView, UIPrinterSetupPINView, UIScrollView, PKPrinter;

@interface UIPrinterSetupPINViewController : UIViewController  {
    PKPrinter *_printer;
    UIPrinterSetupConnectingView *_connectingView;
    UIPrinterSetupPINView *_PINView;
    UIScrollView *_scrollView;
}

@property(retain) PKPrinter * printer;
@property(retain) UIPrinterSetupConnectingView * connectingView;
@property(retain) UIPrinterSetupPINView * PINView;
@property(retain) UIScrollView * scrollView;


- (id)PINView;
- (id)connectingView;
- (void)connected:(bool)arg1;
- (void)showFailure;
- (void)showSetup;
- (void)connectToPrinter;
- (void)setPINView:(id)arg1;
- (void)setConnectingView:(id)arg1;
- (id)initWithPrinter:(id)arg1;
- (void)setPrinter:(id)arg1;
- (id)printer;
- (id)scrollView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)loadView;
- (void)setScrollView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;

@end