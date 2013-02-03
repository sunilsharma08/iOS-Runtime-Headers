/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIImage, UIImageView, MKRouteStep;

@interface MKTransitCalloutView : MKAnnotationView <MKOrientable> {
    UIImageView *_iconView;
    int _orientation;
}

@property int _orientation;
@property(retain) UIImage * icon;
@property(readonly) MKRouteStep * step;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_bubbleFrameForType:(int)arg1;
+ (id)_imageForType:(int)arg1;

- (int)_annotationViewType;
- (void)_layoutIcon;
- (int)_orientation;
- (unsigned int)_orientationCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantBounds;
- (void)_updateAnchorPoint;
- (void)_updateCalloutOffset;
- (void)dealloc;
- (id)icon;
- (id)initWithStep:(id)arg1;
- (id)rightCalloutAccessoryView;
- (void)setIcon:(id)arg1;
- (void)set_orientation:(int)arg1;
- (id)step;

@end