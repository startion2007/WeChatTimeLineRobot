/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class rankDesc, NSMutableArray, NSString, BaseResponse;

@interface GetUserRankDetailResponse : WXPBGeneratedMessage {
}
@property(assign, nonatomic) BOOL isLikedCover;
@property(retain, nonatomic) NSMutableArray* buttons;
@property(assign, nonatomic) BOOL isFollower;
@property(retain, nonatomic) NSMutableArray* follows;
@property(retain, nonatomic) NSMutableArray* steps;
@property(retain, nonatomic) NSString* sharetitle;
@property(retain, nonatomic) NSString* shareurl;
@property(retain, nonatomic) NSMutableArray* affecteduserlist;
@property(retain, nonatomic) NSString* source;
@property(retain, nonatomic) NSMutableArray* rankdetaillist;
@property(retain, nonatomic) NSMutableArray* ranklist;
@property(retain, nonatomic) rankDesc* rankdesc;
@property(retain, nonatomic) NSString* motto;
@property(retain, nonatomic) NSString* coverurl;
@property(retain, nonatomic) BaseResponse* baseResponse;
+(void)initialize;
@end

