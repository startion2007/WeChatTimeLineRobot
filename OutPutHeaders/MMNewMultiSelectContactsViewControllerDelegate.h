/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MMNewMultiSelectContactsViewControllerDelegate <NSObject>
@optional
-(void)onMultiSelectContactsDidCancel;
-(void)onMultiSelectContactsDidDismiss;
-(void)onSingleSelectContactDidFinishSelect:(id)onSingleSelectContact;
-(void)onMultiSelectContactsDidFinishSelect:(id)onMultiSelectContacts tmpDisplayView:(id)view;
-(void)onMultiSelectContactsEndWithReportSelectedCount:(unsigned)reportSelectedCount hasReachLimit:(BOOL)limit clickCount:(unsigned)count;
-(void)onMultiSelectContactsDidFinishSelect:(id)onMultiSelectContacts;
@end
