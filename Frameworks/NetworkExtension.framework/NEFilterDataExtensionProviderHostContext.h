/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterDataExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterDataExtensionProviderHostProtocol, NEFilterDataExtensionProviderProtocol> {
    <NEFilterDataExtensionProviderHostDelegate> *_data_delegate;
}

@property <NEFilterDataExtensionProviderHostDelegate> *data_delegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)data_delegate;
- (void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchProviderConnectionWithCompletionHandler:(id /* block */)arg1;
- (void)handleRulesChanged;
- (void)provideRemediationMap:(id)arg1;
- (void)provideURLAppendStringMap:(id)arg1;
- (void)providerControlSocketFileHandle:(id)arg1;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendSocketContentFilterRequest;
- (void)setData_delegate:(id)arg1;
- (void)startedWithError:(id)arg1;

@end
