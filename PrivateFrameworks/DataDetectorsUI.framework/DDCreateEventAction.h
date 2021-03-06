/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDCreateEventAction : DDAction <EKEventEditViewDelegate> {
    DDRemoteActionViewController *viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) DDRemoteActionViewController *viewController;

- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (int)interactionType;
- (void)invalidate;
- (id)localizedName;
- (void)prepareViewControllerForActionController:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end
