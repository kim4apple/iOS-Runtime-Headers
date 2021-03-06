/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPrintPageRenderer : UIPrintPageRenderer {
    int _cachedNumberOfPages;
    <QLPrintPageRendererDataSource> *_dataSource;
    int _numberOfPrintedPages;
    BOOL _printingDone;
    struct CGSize { 
        float width; 
        float height; 
    } _sizeWhenNumberOfPagesWasCached;
}

@property <QLPrintPageRendererDataSource> *dataSource;

- (id)dataSource;
- (void)drawPageAtIndex:(int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)init;
- (int)numberOfPages;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)prepareForPrinting;
- (void)setDataSource:(id)arg1;

@end
