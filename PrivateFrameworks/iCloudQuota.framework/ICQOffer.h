/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface ICQOffer : NSObject {
    NSString * _accountAltDSID;
    _ICQAlertSpecification * _alertSpecification;
    _ICQBannerSpecification * _bannerSpecification;
    NSString * _bundleId;
    _ICQButtonSpecification * _buttonSpecification;
    BOOL  _iTunesAccountExists;
    int  _level;
    NSString * _notificationID;
    NSDate * _retrievalDate;
    NSDictionary * _serverDictionary;
    _ICQUpgradeFlowSpecification * _upgradeFlowSpecification;
}

@property (nonatomic, retain) NSString *accountAltDSID;
@property (nonatomic, retain) _ICQAlertSpecification *alertSpecification;
@property (nonatomic, retain) _ICQBannerSpecification *bannerSpecification;
@property (nonatomic, retain) _ICQButtonSpecification *buttonSpecification;
@property (nonatomic, readonly) BOOL iTunesAccountExists;
@property (nonatomic) BOOL iTunesAccountExists;
@property (nonatomic) int level;
@property (nonatomic, retain) NSString *notificationID;
@property (nonatomic, retain) NSDate *retrievalDate;
@property (nonatomic, retain) _ICQUpgradeFlowSpecification *upgradeFlowSpecification;

+ (id)cachedOffer;
+ (id)sampleOfferForLevel:(int)arg1;

- (void).cxx_destruct;
- (id)accountAltDSID;
- (id)alertSpecification;
- (id)bannerSpecification;
- (id)buttonSpecification;
- (BOOL)iTunesAccountExists;
- (id)initWithServerDictionary:(id)arg1 accountAltDSID:(id)arg2 notificationID:(id)arg3 bundleIdentifier:(id)arg4;
- (id)keybagForBuyStorage;
- (int)level;
- (id)notificationID;
- (id)retrievalDate;
- (void)setAccountAltDSID:(id)arg1;
- (void)setAlertSpecification:(id)arg1;
- (void)setBannerSpecification:(id)arg1;
- (void)setButtonSpecification:(id)arg1;
- (void)setITunesAccountExists:(BOOL)arg1;
- (void)setLevel:(int)arg1;
- (void)setNotificationID:(id)arg1;
- (void)setRetrievalDate:(id)arg1;
- (void)setUpgradeFlowSpecification:(id)arg1;
- (id)upgradeFlowSpecification;

@end
