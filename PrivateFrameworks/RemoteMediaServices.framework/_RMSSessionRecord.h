/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@class RMSPowerAssertion, RMSRunAssertion;

@interface _RMSSessionRecord : NSObject {
    RMSPowerAssertion *_powerAssertion;
    int _refreshCount;
    RMSRunAssertion *_runAssertion;
    id _session;
    int _timeout;
}

@property(retain) RMSPowerAssertion * powerAssertion;
@property int refreshCount;
@property(retain) RMSRunAssertion * runAssertion;
@property(retain) id session;
@property int timeout;

- (void).cxx_destruct;
- (id)powerAssertion;
- (int)refreshCount;
- (id)runAssertion;
- (id)session;
- (void)setPowerAssertion:(id)arg1;
- (void)setRefreshCount:(int)arg1;
- (void)setRunAssertion:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTimeout:(int)arg1;
- (int)timeout;

@end