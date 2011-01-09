/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */



@interface SBSRemoteNotificationClient : NSObject 
{
}

+ (BOOL)isSystemwideEnabled;
+ (void)setSystemwideEnabled:(BOOL)arg1;
+ (BOOL)hasRegisteredBundleIdentifiers;
+ (void)getSupportedTypes:(id*)arg1 enabledTypes:(id*)arg2;
+ (void)setEnabledNotificationTypes:(NSInteger)arg1 forBundleIdentifier:(id)arg2;
+ (id)getPendingNotificationUserInfo;
+ (NSInteger)enabledRemoteNotificationTypes;
+ (void)registerForRemoteNotificationTypes:(NSInteger)arg1;


@end