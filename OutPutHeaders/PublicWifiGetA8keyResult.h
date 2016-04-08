/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSString;

@interface PublicWifiGetA8keyResult : MMObject {
	NSString* _ssid;
	NSString* _qrCode;
	NSString* _mpUrl;
	NSString* _mid;
	NSString* _sessionKey;
	NSString* _ticket;
	NSString* _appId;
	NSString* _shopId;
	NSString* _authUrl;
	NSString* _extend;
	NSString* _timestamp;
	NSString* _sign;
}
@property(copy, nonatomic) NSString* sign;
@property(copy, nonatomic) NSString* timestamp;
@property(copy, nonatomic) NSString* extend;
@property(copy, nonatomic) NSString* authUrl;
@property(copy, nonatomic) NSString* shopId;
@property(copy, nonatomic) NSString* appId;
@property(copy, nonatomic) NSString* ticket;
@property(copy, nonatomic) NSString* sessionKey;
@property(copy, nonatomic) NSString* mid;
@property(copy, nonatomic) NSString* mpUrl;
@property(copy, nonatomic) NSString* qrCode;
@property(copy, nonatomic) NSString* ssid;
-(void).cxx_destruct;
-(id)initWithSsid:(id)ssid withQRCode:(id)qrcode;
-(void)dealloc;
@end
