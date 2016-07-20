//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, UIView;

@interface GTPagingSliderView : UIScrollView <UIScrollViewDelegate>
{
    NSArray *_pageViews;
    struct CGRect _currentFrame;
    int _currentIndex;
    int _indexOnDelegate;
    BOOL shouldPreloadViews;
    id <GTPagingSliderDelegate> pagingDelegate;
    Class pageViewClass;
    int scrollDirection;
}

+ (id)sliderWithViewClass:(Class)arg1 frame:(struct CGRect)arg2 delegate:(id)arg3;
@property(nonatomic) int indexOnDelegate; // @synthesize indexOnDelegate=_indexOnDelegate;
@property(nonatomic) int scrollDirection; // @synthesize scrollDirection;
@property(nonatomic) BOOL shouldPreloadViews; // @synthesize shouldPreloadViews;
@property(nonatomic) Class pageViewClass; // @synthesize pageViewClass;
@property(nonatomic) id <GTPagingSliderDelegate> pagingDelegate; // @synthesize pagingDelegate;
- (id).cxx_construct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollWithDeltaIndex:(int)arg1;
- (void)reloadPages;
- (void)jumpToIndex:(int)arg1;
- (void)resetPagesPostion;
- (void)setPagesPosition;
@property(readonly, nonatomic) UIView *nextView;
@property(readonly, nonatomic) UIView *currentView;
@property(readonly, nonatomic) UIView *previousView;
- (void)setFrame:(struct CGRect)arg1;
- (void)adjustViewSize;
- (void)createPages;
- (void)setPageViews:(id)arg1;
- (void)setIndexOnDelegate:(int)arg1 byCallToJumpToIndex:(BOOL)arg2;
- (void)dealloc;
- (void)setupSelf;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

