/* Generated by RuntimeBrowser.
 */

@protocol MFQueryableLibraryAdapter <NSObject>

@required

- (unsigned int)countMessagesMatchingQuery:(unsigned int)arg1 variable:(id)arg2;
- (NSDictionary *)countMessagesMatchingQuery:(unsigned int)arg1 variable:(id)arg2 groupBy:(unsigned int)arg3;
- (NSArray *)mailboxesMatchingQuery:(unsigned int)arg1 variable:(id)arg2;
- (NSArray *)messagesMatchingQuery:(unsigned int)arg1 variable:(id)arg2 limit:(unsigned int)arg3;

@end