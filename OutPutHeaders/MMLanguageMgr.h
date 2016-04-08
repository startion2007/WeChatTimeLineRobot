/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "IClearDataMgrExt.h"
#import "MMService.h"

@class NSBundle, NSString;

@interface MMLanguageMgr : MMService <IClearDataMgrExt, MMService> {
	NSString* m_nsCurSystemLanguage;
	NSString* m_curLanguage;
	NSBundle* m_curBundle;
	NSBundle* m_backupBundle;
	BOOL bDownloadPackageRightNow;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onDiskStorageWarningCleanedSize:(unsigned*)size subQueue:(id)queue;
-(void)onDiskStorageWarningCleanedSize:(unsigned*)size CacheMask:(unsigned long)mask;
-(void)onDiskStorageWarningCleanedSize:(unsigned*)size;
-(BOOL)isVersionString:(id)string olderThanMajor:(unsigned*)major minor:(unsigned*)minor minorex:(unsigned*)minorex;
-(void)ClearOlderVersionData;
-(void)refreshNewVersionForCurLanguage:(id)curLanguage fromViewScene:(unsigned long)viewScene;
-(void)setCurLanguage:(id)language shouldChangeMainFrame:(BOOL)frame;
-(void)setCurLanguage:(id)language forRefresh:(BOOL)refresh withViewScene:(unsigned long)viewScene shouldChangeMainFrame:(BOOL)frame;
-(BOOL)curLanguageIsChineseTraditional;
-(id)getStringForLanguage:(id)language withID:(id)anId defaultTo:(id)to;
-(id)getStringForCurLanguage:(id)curLanguage defaultTo:(id)to table:(id)table;
-(id)getStringForCurLanguage:(id)curLanguage defaultTo:(id)to;
-(id)getStringForCurLanguage:(id)curLanguage defaultString:(id)string;
-(id)getStringForCurLanguageWithBackupBundle:(id)backupBundle defaultTo:(id)to table:(id)table;
-(id)getStringForCurLanguageWithBackupBundle:(id)backupBundle defaultTo:(id)to;
-(id)getSupportedLanguageDisplayNames;
-(id)getSupportedLanguages;
-(id)getCurLanguageDisplayName;
-(id)getCurLanguage;
-(id)getCurBundle;
-(void)dealloc;
-(id)init;
-(void)initLanguage;
-(void)initBackUpLanguage;
-(BOOL)ifNeedBackupBundle;
-(id)getBackUpLanguage;
-(id)isSupportedLanguage:(id)language;
-(id)getRealCurSystemLanguage;
-(id)getCurSystemLanguage;
-(id)trimForiOS9Plus:(id)plus;
-(void)internalSetCurLanguage:(id)language;
-(id)internalGetCurLanguage;
-(id)getLanguagePath;
-(id)getLangPackageVerifiedFailFileForLang:(id)lang;
-(id)getLangPackageNotVerifiedFileForLang:(id)lang;
-(id)getLangPackageFileForLang:(id)lang;
-(id)getLangPackageZipFileForLang:(id)lang;
-(id)getLangPackagePathForLang:(id)lang;
-(id)getLangPackageRootPath;
@end
