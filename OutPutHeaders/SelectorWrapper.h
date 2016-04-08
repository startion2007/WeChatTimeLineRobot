/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SelectorWrapper : XXUnknownSuperclass {
	NSString* _objKey;
	SEL _selector;
	id _parameter;
	unsigned long long _inQueueTime;
}
@property(assign, nonatomic) unsigned long long inQueueTime;
@property(retain, nonatomic) id parameter;
@property(assign, nonatomic) SEL selector;
@property(retain, nonatomic) NSString* objKey;
+(id)genKeyForObject:(id)object withSelector:(SEL)selector;
-(void)dealloc;
@end
