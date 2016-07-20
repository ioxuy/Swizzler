//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class GDStatusBarOverlay, GDTimer, NSMutableArray, NSMutableSet, UINavigationController;

@interface GDWindow : UIWindow
{
    long long lastActivityTime;
    BOOL lockedByTimeout;
    BOOL lockedByStartupPolicy;
    BOOL _isPaused;
    BOOL _isControllingUI;
    BOOL _hasEverPassedControl;
    GDTimer *_idleTimer;
    UINavigationController *_navController;
    NSMutableArray *_libViewControllers;
    UIWindow *_bgWindow;
    UIWindow *_appWindow;
    NSMutableSet *_clearDataSubscribers;
    GDStatusBarOverlay *_statusBarOverlay;
    double _idleTimeInterval;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) GDStatusBarOverlay *statusBarOverlay; // @synthesize statusBarOverlay=_statusBarOverlay;
@property(retain, nonatomic) NSMutableSet *clearDataSubscribers; // @synthesize clearDataSubscribers=_clearDataSubscribers;
@property(nonatomic) BOOL hasEverPassedControl; // @synthesize hasEverPassedControl=_hasEverPassedControl;
@property(nonatomic) BOOL isControllingUI; // @synthesize isControllingUI=_isControllingUI;
@property(retain, nonatomic) UIWindow *appWindow; // @synthesize appWindow=_appWindow;
@property(retain, nonatomic) UIWindow *bgWindow; // @synthesize bgWindow=_bgWindow;
@property(nonatomic) BOOL isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) double idleTimeInterval; // @synthesize idleTimeInterval=_idleTimeInterval;
@property(retain, nonatomic) NSMutableArray *libViewControllers; // @synthesize libViewControllers=_libViewControllers;
@property(retain, nonatomic) UINavigationController *navController; // @synthesize navController=_navController;
@property(retain, nonatomic) GDTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(nonatomic) BOOL lockedByStartupPolicy; // @synthesize lockedByStartupPolicy;
@property(nonatomic) BOOL lockedByTimeout; // @synthesize lockedByTimeout;
- (void)clearSensitiveData;
- (void)unregisterClearDataSubcriber:(id)arg1;
- (void)registerClearDataSubcriber:(id)arg1;
- (void)hideDimWindow;
@property(readonly, nonatomic) UIWindow *dimmingWindow;
- (void)showDimWindow;
- (id)iPhoneLandscapeSplashImage;
- (id)iPhonePortraitSplashImage;
- (void)dealloc;
- (unsigned int)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)takeoverUI;
- (void)relinquishUIPart2;
- (void)relinquishUIPart1;
- (void)removeSplashScreen;
- (void)removeSplashScreenIfGDViewDisplayed;
- (void)redrawSplash;
- (BOOL)isTouchIdStarted;
- (void)updateSplashScreen;
- (BOOL)isActionSheetDetectedInView:(id)arg1;
- (void)removeActionSheet;
- (void)showSplashScreen;
- (void)initProperties;
- (void)forcedUnlock;
- (id)getTopLibraryViewController;
- (void)removeLibViewController:(id)arg1;
- (void)addLibViewControllerOnTop:(id)arg1;
- (void)idleTimerDidExceed;
- (void)idleTimerWillExceed;
- (void)handleEvent:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)enteringBackground;
- (void)enteringForeground;
- (void)setLastActivityTime:(long long)arg1;
- (long long)getLastActivityTime;
- (void)resetIdleTimer;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)modifyIdleTimeInterval:(double)arg1;
- (void)keyboardDidHideNotification:(id)arg1;
- (void)keyboardDidShowNotification:(id)arg1;

@end

