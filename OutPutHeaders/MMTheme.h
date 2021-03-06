/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MCssParserDelegate.h"

@class NSString;

@interface MMTheme : XXUnknownSuperclass <MCssParserDelegate> {
	NSString* m_tid;
	NSString* m_name;
	NSString* m_icon;
	NSString* m_version;
	NSString* m_author;
	NSString* m_discription;
	NSString* m_website;
	NSString* m_basePath;
	int m_totalSize;
	int m_finishedSize;
	int m_themeType;
	BOOL m_isAlreadyParsed;
	BOOL m_isParseOK;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int themeType;
@property(assign, nonatomic) int finishedSize;
@property(assign, nonatomic) int totalSize;
@property(retain, nonatomic) NSString* basePath;
@property(retain, nonatomic) NSString* website;
@property(retain, nonatomic) NSString* discription;
@property(retain, nonatomic) NSString* author;
@property(retain, nonatomic) NSString* version;
@property(retain, nonatomic) NSString* icon;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* tid;
+(id)defaultTheme;
+(id)themeFromPath:(id)path;
-(void).cxx_destruct;
-(int)getThemeType;
-(id)getThemeIcon;
-(id)pathForLocalizedResource:(id)localizedResource;
-(id)pathForResource:(id)resource;
-(void)setAsDefaultTheme;
-(BOOL)isDefaultTheme;
-(BOOL)startParse;
-(void)onCssParseEnd;
-(void)onCssParseStart;
-(id)onNextCssFile;
-(void)onParseErrorInFile:(id)file onLineNumber:(id)number withText:(id)text withErrorMessage:(id)errorMessage;
-(void)onReceiveCssRulesetWithSelectors:(id)selectors withDeclarations:(id)declarations;
-(void)onScriptFunctionWithSelectors:(id)selectors withStatements:(id)statements;
-(id)initWithBasePath:(id)basePath;
-(id)keyPaths;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
@end

