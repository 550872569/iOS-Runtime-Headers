/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class <CertInfoSheetViewControllerDelegate>, NSArray, NSDate, NSString;

@interface CertInfoSheetViewController : UIViewController {
    <CertInfoSheetViewControllerDelegate> *_delegate;
    NSString *_serviceName;
    NSDate *_trustExpiration;
    NSArray *_trustProperties;
    NSString *_trustPurpose;
    NSString *_trustSubtitle;
    NSString *_trustTitle;
}

@property <CertInfoSheetViewControllerDelegate> * delegate;
@property(retain) NSString * serviceName;
@property(retain) NSDate * trustExpiration;
@property(retain) NSArray * trustProperties;
@property(retain) NSString * trustPurpose;
@property(retain) NSString * trustSubtitle;
@property(retain) NSString * trustTitle;

- (void).cxx_destruct;
- (void)_accept;
- (void)_cancel;
- (void)_dismissWithResult:(int)arg1;
- (void)_pushDetailsView;
- (void)_setupNavItem;
- (id)delegate;
- (void)loadView;
- (id)serviceName;
- (void)setDelegate:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setTrustExpiration:(id)arg1;
- (void)setTrustProperties:(id)arg1;
- (void)setTrustPurpose:(id)arg1;
- (void)setTrustSubtitle:(id)arg1;
- (void)setTrustTitle:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)trustExpiration;
- (id)trustProperties;
- (id)trustPurpose;
- (id)trustSubtitle;
- (id)trustTitle;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end