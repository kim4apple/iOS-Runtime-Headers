/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLComposeImagePickerController : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate> {
    <MSCLComposeImagePickerDelegate> *_delegate;
    UIImagePickerController *_imagePickerController;
    UIPopoverPresentationController *_popoverPresentationController;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _popoverSourceRect;
    UIView *_popoverSourceView;
    int _sourceType;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSCLComposeImagePickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } popoverSourceRect;
@property (nonatomic, retain) UIView *popoverSourceView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_sendImagePickerDidCancel;
- (void)dealloc;
- (id)delegate;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithImagePickerSourceType:(int)arg1;
- (id)popoverPresentationController;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })popoverSourceRect;
- (id)popoverSourceView;
- (void)presentImagePickerAnimated:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPopoverSourceRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPopoverSourceView:(id)arg1;

@end
