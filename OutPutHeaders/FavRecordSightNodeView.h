/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FavSightViewDelegate.h"
#import "FavRecordBaseNodeView.h"
#import "ICdnComMgrExt.h"

@class FavSightView, NSString;

@interface FavRecordSightNodeView : FavRecordBaseNodeView <FavSightViewDelegate, ICdnComMgrExt> {
	FavSightView* m_sightView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)OnCdnDownload:(id)download;
-(void)restartDownload;
-(void)onJumpToViewDetail:(id)viewDetail;
-(void)onExitFullScreen;
-(void)openVideoDetail;
-(void)onClick;
-(void)onTouchCancel;
-(void)onLongTouch;
-(void)onTouchUpInside;
-(void)onTouchDown;
-(void)updateContentSubview;
-(void)addContentSubView;
-(void)dealloc;
@end
