/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "FriendAsistSessionExt.h"

@class NSString, CPushContact;

@interface MMSayHelloButton : XXUnknownSuperclass <FriendAsistSessionExt> {
	CPushContact* m_oLastVerifyContact;
	NSString* m_nsUsrName;
	unsigned long m_uiUnReadCount;
	float m_fHeight;
}
-(void).cxx_destruct;
-(void)onFriendAssistUnreadCountChanged;
-(unsigned long)GetUnReadCount;
-(void)UpdateView;
-(void)dealloc;
-(id)initWithUsrName:(id)usrName Height:(float)height;
@end
