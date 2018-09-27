/* Generated by RuntimeBrowser.
 */

@protocol SFTrack <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSString *)duration;
- (bool)highlighted;
- (NSData *)jsonData;
- (NSString *)number;
- (SFActionItem *)playAction;
- (NSURL *)preview;
- (void)setDuration:(NSString *)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setNumber:(NSString *)arg1;
- (void)setPlayAction:(SFActionItem *)arg1;
- (void)setPreview:(NSURL *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end