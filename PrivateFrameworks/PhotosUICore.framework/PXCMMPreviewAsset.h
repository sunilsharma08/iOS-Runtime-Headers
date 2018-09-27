/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPreviewAsset : NSObject <PXDisplayAsset> {
    UIImage * _cachedImage;
    PHMomentShare * _momentShare;
    PHAsset * _underlyingAsset;
}

@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (getter=isFavorite, nonatomic, readonly) bool favorite;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float hdrGain;
@property (nonatomic, readonly) bool isInCloud;
@property (nonatomic, readonly) bool isPreviewImageDataAvailable;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) PHMomentShare *momentShare;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) long long playbackVariation;
@property (nonatomic, readonly) UIImage *previewImage;
@property (nonatomic, readonly) NSData *previewImageData;
@property (nonatomic, readonly) bool representsBurst;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PHAsset *underlyingAsset;

- (void).cxx_destruct;
- (double)aspectRatio;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestCropRectForAspectRatio:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)init;
- (id)initWithMomentShare:(id)arg1 underlyingAsset:(id)arg2;
- (long long)isContentEqualTo:(id)arg1;
- (bool)isFavorite;
- (bool)isInCloud;
- (bool)isPreviewImageDataAvailable;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (id)momentShare;
- (long long)playbackStyle;
- (long long)playbackVariation;
- (id)previewImage;
- (id)previewImageData;
- (bool)representsBurst;
- (struct CGSize { double x1; double x2; })size;
- (id)underlyingAsset;

@end