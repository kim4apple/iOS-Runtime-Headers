/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDNanoSyncSession : HDSyncSession {
    id /* block */ _completion;
    <HDNanoSyncSessionDelegate> *_delegate;
    unsigned int _messageCount;
    BOOL _pullRequest;
    BOOL _requestedByRemote;
}

@property (nonatomic, readonly, copy) id /* block */ completion;
@property (nonatomic, readonly) <HDNanoSyncSessionDelegate> *delegate;
@property (nonatomic, readonly) unsigned int messageCount;
@property (nonatomic, readonly) HDNanoSyncStore *nanoSyncStore;
@property (getter=isPullRequest, nonatomic, readonly) BOOL pullRequest;
@property (getter=isRequestedByRemote, nonatomic, readonly) BOOL requestedByRemote;

- (void).cxx_destruct;
- (id)changeSetWithChanges:(id)arg1 statusCode:(int)arg2 error:(id)arg3;
- (id /* block */)completion;
- (id)delegate;
- (void)incrementMessageCount;
- (id)initWithDaemon:(id)arg1 syncStore:(id)arg2 attemptWhileLocking:(BOOL)arg3 pullRequest:(BOOL)arg4 requestedByRemote:(BOOL)arg5 reason:(id)arg6 delegate:(id)arg7 completion:(id /* block */)arg8;
- (void)invokeCompletionWithSuccess:(BOOL)arg1 error:(id)arg2;
- (BOOL)isPullRequest;
- (BOOL)isRequestedByRemote;
- (unsigned int)messageCount;
- (id)nanoSyncStore;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (id)predicateForSyncEntityClass:(Class)arg1;
- (void)sendChanges:(id)arg1 completion:(id /* block */)arg2;
- (void)syncDidFinishWithSuccess:(BOOL)arg1 error:(id)arg2;
- (unsigned int)syncObjectLimitForEntityClass:(Class)arg1;

@end