/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"


@interface TranslateSnsUtil : MMObject {
}
+(BOOL)isSameLanguage:(id)language;
+(BOOL)IsIgnoreChar:(unsigned short)aChar;
+(BOOL)IsEnChar:(unsigned short)aChar;
+(BOOL)couldTranslateSns;
+(BOOL)couldTranslateSnsComment:(id)comment;
+(BOOL)couldTranslateSnsContent:(id)content;
+(BOOL)isTranslateSnsOff;
+(id)getUserTranslateRootDir;
@end

