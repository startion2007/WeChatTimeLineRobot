/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"

@class UIImage, NSString, UIImageView, UILabel;
@protocol MMBezelTipsViewControllerDelegate;

@interface MMBezelTipsViewController : MMUIViewController {
	NSString* _tipsString;
	UIImage* _icon;
	id<MMBezelTipsViewControllerDelegate> _delegate;
	UIImageView* _iconImaageView;
	UILabel* _tipsLabel;
}
@property(retain, nonatomic) UILabel* tipsLabel;
@property(retain, nonatomic) UIImageView* iconImaageView;
@property(assign, nonatomic) __weak id<MMBezelTipsViewControllerDelegate> delegate;
@property(retain, nonatomic) UIImage* icon;
@property(retain, nonatomic) NSString* tipsString;
-(void).cxx_destruct;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)initWithTips:(id)tips icon:(id)icon;
@end
