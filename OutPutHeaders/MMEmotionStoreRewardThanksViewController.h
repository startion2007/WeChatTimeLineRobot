/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "MMWebImageViewDelegate.h"

@class MMUILabel, MMGifView, EmotionRewardResponseInfo, NSString, MMWebImageView, StoreEmotionRewardLogicObject, EmoticonStoreItem, MMUIScrollView;

@interface MMEmotionStoreRewardThanksViewController : MMUIViewController <MMWebImageViewDelegate> {
	EmoticonStoreItem* m_storeItem;
	EmotionRewardResponseInfo* m_rewardInfo;
	StoreEmotionRewardLogicObject* m_rewardLogic;
	MMUIScrollView* m_scrollView;
	MMWebImageView* m_thanksRewardImage;
	MMGifView* m_loadingGif;
	MMUILabel* m_thanksTips;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onLoadImageOK:(id)ok;
-(void)onClose;
-(float)updateColorEggTipsViewFromMarginTop:(float)marginTop;
-(void)initColorEggTipsView;
-(float)updateThanksRewardImageFromMarginTop:(float)marginTop;
-(void)initThanksRewardImage;
-(void)updateScrollView;
-(void)initScrollView;
-(void)initView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)initWithStoreItem:(id)storeItem RewardInfo:(id)info RewardLogic:(id)logic;
@end
