/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMTableViewCell.h"

@class AttributeLabel, MMWebImageView, NSMutableArray, MMBrandHeadImageView, UIImageView, UILabel, FTSBussinessResultItem;

@interface FTSOnlineBrandContactCell : MMTableViewCell {
	FTSBussinessResultItem* _resultItem;
	NSMutableArray* _arrKeyword;
	MMBrandHeadImageView* _brandHeadImageView;
	AttributeLabel* _displayNameLabel;
	AttributeLabel* _descLabel;
	MMWebImageView* _detailIconImageView;
	UILabel* _detailLabel;
	UIImageView* _certImgView;
	UIImageView* _registerImgView;
}
-(void).cxx_destruct;
-(void)updateResultItem:(id)item arrKeyword:(id)keyword;
-(void)updateStatus:(BOOL)status;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)initView;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
