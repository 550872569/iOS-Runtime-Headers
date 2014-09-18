/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSMutableDictionary, UIKeyboardEmojiCategory;

@interface UIKeyboardEmojiInputController : NSObject {
    int _currentSequence;
    UIKeyboardEmojiCategory *_lastCategory;
    NSMutableArray *_recents;
    NSMutableDictionary *_usageHistory;
}

@property(retain) UIKeyboardEmojiCategory * lastViewedCategory;

+ (id)activeInputView;
+ (Class)classForInputView;
+ (void)writeEmojiDefaults;
+ (void)writeEmojiDefaultsAndReleaseActiveInputView;

- (void)clearAncientHistory;
- (void)dealloc;
- (id)defaultsDictionary;
- (void)emojiUsed:(id)arg1;
- (id)initWithInputView:(id)arg1;
- (bool)isAncientSequence:(int)arg1;
- (id)lastCategory;
- (id)lastViewedCategory;
- (id)recents;
- (double)scoreForEmoji:(id)arg1;
- (double)scoreForSequence:(int)arg1;
- (void)setLastViewedCategory:(id)arg1;

@end