/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNotificationRemitter : NSObject {
    NSDictionary * _mapping;
    NSNotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _userInfoTransform;
}

- (void)_handleNotification:(id)arg1;
- (void)dealloc;
- (id)initWithNotificationCenter:(id)arg1 queue:(id)arg2 mappings:(id)arg3 createUserInfoTransform:(id /* block */)arg4;

@end
