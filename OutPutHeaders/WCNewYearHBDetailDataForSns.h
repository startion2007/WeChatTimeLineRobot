/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class NSMutableArray, NSString;

@interface WCNewYearHBDetailDataForSns : XXUnknownSuperclass {
	int _hbType;
	int _coverType;
	NSString* _username;
	unsigned long _enterpriseID;
	NSString* _coverUrl;
	NSString* _sightUrl;
	NSString* _sightPath;
	unsigned long _hbSendID;
	NSString* _praise;
	NSMutableArray* _arrRewardItem;
	unsigned long long _money;
	CGSize _coverSize;
}
@property(assign, nonatomic) CGSize coverSize;
@property(retain, nonatomic) NSMutableArray* arrRewardItem;
@property(retain, nonatomic) NSString* praise;
@property(assign, nonatomic) unsigned long long money;
@property(assign, nonatomic) unsigned long hbSendID;
@property(retain, nonatomic) NSString* sightPath;
@property(retain, nonatomic) NSString* sightUrl;
@property(retain, nonatomic) NSString* coverUrl;
@property(assign, nonatomic) unsigned long enterpriseID;
@property(retain, nonatomic) NSString* username;
@property(assign, nonatomic) int coverType;
@property(assign, nonatomic) int hbType;
-(void).cxx_destruct;
@end

