/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventRouterManager : BKSHIDEventRouterManagerBase {
    BOOL _needsFlush;
}

@property BOOL needsFlush;

+ (id)sharedInstance;

- (void)_flush;
- (void)_flushTrigger;
- (void)_routerUpdated:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)needsFlush;
- (void)setEventRouters:(id)arg1;
- (void)setNeedsFlush:(BOOL)arg1;

@end