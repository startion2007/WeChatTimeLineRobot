/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSData, NSString;

@interface UploadEmojiInfoReq : WXPBGeneratedMessage {
}
@property(retain, nonatomic) NSData* emojiBuffer;
@property(assign, nonatomic) int totalLen;
@property(assign, nonatomic) int startPos;
@property(retain, nonatomic) NSString* md5;
+(void)initialize;
@end

