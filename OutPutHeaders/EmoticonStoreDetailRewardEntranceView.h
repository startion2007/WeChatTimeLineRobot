/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIView.h"
#import "ILinkEventExt.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class UILabel, UICollectionView, NSString, UIButton, NSArray, RichTextView;
@protocol EmotionStoreDetailRewardEntranceDelegate;

@interface EmoticonStoreDetailRewardEntranceView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ILinkEventExt> {
	UILabel* m_begWordLabel;
	UIButton* m_redRewardBtn;
	RichTextView* m_donorsCountLabel;
	UICollectionView* m_donorsView;
	NSArray* m_donors;
	id<EmotionStoreDetailRewardEntranceDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<EmotionStoreDetailRewardEntranceDelegate> delegate;
-(void).cxx_destruct;
-(void)collectionView:(id)view didDeselectItemAtIndexPath:(id)indexPath;
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
-(CGSize)collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)indexPath;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInCollectionView:(id)collectionView;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
-(void)onLinkClicked:(id)clicked withRect:(CGRect)rect;
-(void)onRewardButtonClick;
-(float)updateViewWithPid:(id)pid RewardInfo:(id)info;
-(void)configSubviews;
-(id)initWithFrame:(CGRect)frame;
-(id)init;
@end

