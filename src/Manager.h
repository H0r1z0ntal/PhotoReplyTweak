#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BHIManager : NSObject

+ (BOOL)hideAds;
+ (BOOL)hideStoriesTray;
+ (BOOL)downloadMedia;
+ (BOOL)profileImageSave;
+ (BOOL)removeSuggestedPost;
+ (BOOL)removeSuggestedAccounts;
+ (BOOL)removeSuggestedReels;
+ (BOOL)removeSuggestedThreads;
+ (BOOL)postLikeConfirmation;
+ (BOOL)reelsLikeConfirmation;
+ (BOOL)followConfirmation;
+ (BOOL)callConfirmation;
+ (BOOL)voiceMessageConfirmation;
+ (BOOL)stickerInteractConfirmation;
+ (BOOL)postCommentConfirmation;
+ (BOOL)copyDecription;
+ (BOOL)hideReelsTab;
+ (BOOL)noRecentSearches;
+ (BOOL)hideExploreGrid;
+ (BOOL)hideTrendingSearches;
+ (BOOL)noSuggestedChats;
+ (BOOL)Padlock;
+ (BOOL)keepDeletedMessage;
+ (BOOL)hideLastSeen;
+ (BOOL)noScreenShotAlert;
+ (BOOL)unlimitedReplay;
+ (BOOL)noTypingStatus;
+ (BOOL)noSeenReceipt;
+ (BOOL)FLEX;

+ (void)showSaveVC:(id)item;
+ (void)cleanCache;
+ (BOOL)isEmpty:(NSURL *)url;
+ (NSString *)getDownloadingPersent:(float)per;

@end