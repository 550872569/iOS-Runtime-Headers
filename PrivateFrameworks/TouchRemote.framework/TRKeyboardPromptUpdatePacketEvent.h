/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@class NSString;

@interface TRKeyboardPromptUpdatePacketEvent : TRPacketEvent {
    long long _keyboardType;
    unsigned long long _sessionID;
    NSString *_subtitle;
    NSString *_text;
    NSString *_title;
    long long _updateType;
    bool_secureText;
}

@property(readonly) long long keyboardType;
@property(getter=isSecureText,readonly) bool secureText;
@property(readonly) unsigned long long sessionID;
@property(readonly) NSString * subtitle;
@property(readonly) NSString * text;
@property(readonly) NSString * title;
@property(readonly) long long updateType;

+ (unsigned int)_packetEventType;

- (void).cxx_destruct;
- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (id)description;
- (id)initWithKeyboardType:(long long)arg1 secureText:(bool)arg2 sessionID:(unsigned long long)arg3 subtitle:(id)arg4 text:(id)arg5 title:(id)arg6 updateType:(long long)arg7;
- (bool)isSecureText;
- (long long)keyboardType;
- (unsigned long long)sessionID;
- (id)subtitle;
- (id)text;
- (id)title;
- (long long)updateType;

@end