/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MyFavoritesDB;

@interface FavoritesFileRetainCountDB : XXUnknownSuperclass {
	MyFavoritesDB* _mmDB;
}
-(void).cxx_destruct;
-(BOOL)isMd5RetainCountZero:(id)zero;
-(BOOL)deleteItemByMd5:(id)a5 andItemLocalId:(unsigned long)anId;
-(BOOL)insertToFileRetainCountTable:(id)fileRetainCountTable ItemLocalId:(unsigned long)anId;
-(BOOL)isItemExist:(id)exist ItemLocalId:(unsigned long)anId;
-(void)initDB:(id)db;
-(id)init;
@end
