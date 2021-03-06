/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class WCDataBase, WCDataBaseTable;

@interface WCShareCardDB : MMObject {
	WCDataBase* m_db;
	WCDataBaseTable* m_tableShareCardInfo;
}
@property(retain, nonatomic) WCDataBaseTable* m_tableShareCardInfo;
@property(retain, nonatomic) WCDataBase* m_db;
-(void).cxx_destruct;
-(id)DBContext;
-(BOOL)initDB;
-(BOOL)getAllShareCard:(id)card;
-(BOOL)searchShareCardByKey:(id)key CardList:(id)list HasMore:(BOOL*)more;
-(BOOL)getNextPageWCShareCardListByShare:(id)share ShareUserName:(id)name CurMinUpdateTime:(unsigned long)time;
-(BOOL)getFirstPageWCShareCardListByShare:(id)share ShareUserName:(id)name;
-(BOOL)getNextPageWCShareCardListByAppId:(id)anId AppId:(id)anId2 CurMinUpdateTime:(unsigned long)time;
-(BOOL)getFirstPageWCShareCardListByAppId:(id)anId AppId:(id)anId2;
-(BOOL)getNextPageWCShareCardList:(id)list CurMinShareTime:(unsigned long)time;
-(BOOL)getFirstPageWCShareCardList:(id)list;
-(BOOL)getWCShareCardByCardTPID:(id)tpid andShareCardList:(id)list;
-(id)getWCShareCardByCardID:(id)anId;
-(unsigned long)getWCShareCardCountByAppId:(id)anId;
-(BOOL)getAllMyMarked:(id)marked;
-(BOOL)getShareUserList:(id)list AppId:(id)anId;
-(BOOL)getLastThreeShareCardList:(id)list AppId:(id)anId;
-(unsigned long)getNoramlShareCardCount:(id)count;
-(void)deleteUselessShareCard;
-(BOOL)deleteWCShareCardByCardID:(id)anId;
-(BOOL)insertOrUpdateShareCardData:(id)data;
-(BOOL)insertOrUpdateShareCardBySyncItem:(id)item;
-(unsigned long)getValidShareCardCountByTpId:(id)anId;
-(BOOL)getNeedBatchGetWCShareCardIdList:(id)list byMinUpdateTime:(unsigned long)time;
-(BOOL)getNextPageNeedBatchGetWCShareCardIdList:(id)list byCurMinUpdateTime:(unsigned long)time;
-(BOOL)getFirstPageNeedBatchGetWCShareCardIdList:(id)list;
-(unsigned long)getShareCardAvailableCount;
-(unsigned long)getShareCardCount;
@end

