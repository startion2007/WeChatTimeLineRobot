/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface SubmitPayProductBuyInfoRequest : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* ticket;
@property(retain, nonatomic) NSString* remarks;
@property(retain, nonatomic) NSString* payAppId;
@property(retain, nonatomic) NSString* payProductId;
@property(retain, nonatomic) NSString* payFuncId;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end
