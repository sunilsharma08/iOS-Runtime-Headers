/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImage, SUScriptCanvasContext, NSString;



@interface SUScriptSegmentedControlItem : SUScriptObject 
{
    SUScriptCanvasContext *_canvas;
    NSString *_identifier;
    UIImage *_image;
    NSString *_imageURLString;
    NSString *_title;
    id _userInfo;
}

@property(retain) SUScriptCanvasContext *canvas;
@property(retain) NSString *identifier;
@property(retain) NSString *imageURL;
@property(retain) NSString *title;
@property(retain) id userInfo;
@property(readonly) UIImage *image;

+ (id)webScriptNameForKey:(const char *)arg1;

- (id)attributeKeys;
- (void)setUserInfo:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)title;
- (id)image;
- (id)userInfo;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (void)_setImage:(id)arg1;
- (void)_setImageFromURL:(id)arg1;
- (void)_reloadUserInterface;
- (id)_segmentedControl;
- (id)newPageSection;
- (id)initWithPageSection:(id)arg1;
- (id)canvas;
- (void)setCanvas:(id)arg1;
- (id)_copyTitle;
- (void)_setTitle:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;

@end