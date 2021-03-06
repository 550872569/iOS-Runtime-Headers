/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface _ML3ValidatableDatabase : NSObject {
    NSString * _databasePath;
    unsigned long  _queueID;
    NSObject<OS_dispatch_queue> * _validationSerialQueue;
    unsigned int  _validationState;
}

@property (nonatomic, copy) NSString *databasePath;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *validationSerialQueue;
@property (nonatomic) unsigned int validationState;

- (void).cxx_destruct;
- (BOOL)currentQueueIsValidationQueue;
- (id)databasePath;
- (id)init;
- (id)initWithDatabasePath:(id)arg1;
- (void)setDatabasePath:(id)arg1;
- (void)setValidationSerialQueue:(id)arg1;
- (void)setValidationState:(unsigned int)arg1;
- (id)validationSerialQueue;
- (unsigned int)validationState;

@end
