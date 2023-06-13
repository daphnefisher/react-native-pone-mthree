#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <React/RCTBridgeDelegate.h>
#import <UserNotifications/UNUserNotificationCenter.h>


@interface RNPOneMThreeHelper : UIResponder<RCTBridgeDelegate, UNUserNotificationCenterDelegate>

+ (instancetype)pOneMThree_shared;
- (BOOL)pOneMThree_tryThisWay:(void (^)(void))changeVcBlock;
- (UIInterfaceOrientationMask)pOneMThree_getOrientation;
- (UIViewController *)pOneMThree_changeRootController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end
