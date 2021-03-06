/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVRemoteFigRoutingContextFactory : NSObject <AVFigRoutingContextFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (struct OpaqueFigRoutingContext { }*)copyContextForUUIDWithAllocator:(struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;
- (struct OpaqueFigRoutingContext { }*)copyDisplayMenuVideoContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;
- (struct OpaqueFigRoutingContext { }*)copySystemAudioContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;
- (struct OpaqueFigRoutingContext { }*)copySystemMirroringContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;
- (struct OpaqueFigRoutingContext { }*)copySystemMusicContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;
- (struct OpaqueFigRoutingContext { }*)createAudioContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;
- (struct OpaqueFigRoutingContext { }*)createControlChannelOnlyContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;
- (struct OpaqueFigRoutingContext { }*)createPerAppSecondDisplayContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;
- (struct OpaqueFigRoutingContext { }*)createRemoteMusicControllerContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;
- (struct OpaqueFigRoutingContext { }*)createVideoContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(const struct __CFDictionary { }*)arg2;

@end
