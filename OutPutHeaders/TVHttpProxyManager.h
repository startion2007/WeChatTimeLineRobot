/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface TVHttpProxyManager : XXUnknownSuperclass {
}
+(id)getInstance;
-(void)TVHttpProxyHandlerMemoryWarning;
-(void)TVHttpProxySetPlayerState:(int)state;
-(void)TVHttpProxySetNetWorkState:(int)state;
-(void)TVHttpProxyStopPlay:(int)play;
-(void)TVHttpProxySetRemainTime:(int)time withRemainTime:(int)remainTime;
-(id)TVHttpProxyBuildPlayURLMP4:(int)a4;
-(int)TVHttpProxyPreLoad:(int)load withDuration:(int)duration;
-(int)TVHttpProxyStartPlay:(id)play withFileType:(int)fileType withFileID:(id)fileID withFileSize:(long long)fileSize withFileDuration:(int)fileDuration;
-(id)TVHttpProxyGetVersion;
-(void)TVHttpProxyDeinit;
-(int)TVHttpProxyGetLocalServerPort;
-(int)TVHttpProxyInit:(id)init;
-(void)enterForeground:(id)foreground;
-(void)enterBackground:(id)background;
-(void)deinitModule;
-(int)initModule:(/*function-pointer*/ void*)module withReportFunc:(/*function-pointer*/ void*)reportFunc withIDKeyReportFunc:(/*function-pointer*/ void*)idkeyReportFunc withKVReportFunc:(/*function-pointer*/ void*)kvreportFunc;
-(void)deinitLog;
-(void)initLog;
-(id)init;
@end

