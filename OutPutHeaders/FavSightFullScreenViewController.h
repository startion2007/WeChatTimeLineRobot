/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "FavForwardLogicDelegate.h"

@class FavForwardLogicController, NSString;

@interface FavSightFullScreenViewController : XXUnknownSuperclass <FavForwardLogicDelegate> {
	FavForwardLogicController* m_favForwardController;
	BOOL _supportLandscape;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL supportLandscape;
-(void).cxx_destruct;
-(void)forwardSight:(id)sight;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)getFavForawrdViewController;
-(void)viewWillAppear:(BOOL)view;
@end

