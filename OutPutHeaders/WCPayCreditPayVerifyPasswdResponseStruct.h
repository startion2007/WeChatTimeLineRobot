/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface WCPayCreditPayVerifyPasswdResponseStruct : XXUnknownSuperclass {
	NSString* m_nsSessionKey;
	NSString* m_nsNameMask;
	NSString* m_nsIDNumberMask;
	BOOL m_bNeedFillAllInfo;
}
@property(assign, nonatomic) BOOL m_bNeedFillAllInfo;
@property(retain, nonatomic) NSString* m_nsIDNumberMask;
@property(retain, nonatomic) NSString* m_nsNameMask;
@property(retain, nonatomic) NSString* m_nsSessionKey;
-(void).cxx_destruct;
-(void)dealloc;
@end
