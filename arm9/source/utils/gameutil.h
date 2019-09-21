#pragma once

#include "common.h"
#include "game.h"

u32 LoadNcchHeaders(NcchHeader* ncch, NcchExtHeader* exthdr, ExeFsHeader* exefs, const char* path, u32 offset);
u32 LoadNcsdHeader(NcsdHeader* ncsd, const char* path);
u32 VerifyGameFile(const char* path);
u32 CheckEncryptedGameFile(const char* path);
u32 PCryptGameFile(const char* path, const char* outdir, bool encrypt, bool calc_sha, bool set_flag);
u32 CryptGameFile(const char* path, bool inplace, bool encrypt);
u32 BuildCiaFromGameFile(const char* path, bool force_legit);
u32 DumpCxiSrlFromTmdFile(const char* path);
u32 ExtractCodeFromCxiFile(const char* path, const char* path_out, char* extstr);
u32 CompressCode(const char* path, const char* path_out);
u64 GetGameFileTrimmedSize(const char* path);
u32 TrimGameFile(const char* path);
u32 ShowGameFileTitleInfo(const char* path);
u32 ShowCiaCheckerInfo(const char* path);
u32 GetTmdContentPath(char* path_content, const char* path_tmd);
u32 BuildNcchInfoXorpads(const char* destdir, const char* path);
u32 CheckHealthAndSafetyInject(const char* hsdrv);
u32 InjectHealthAndSafety(const char* path, const char* destdrv);
u32 BuildTitleKeyInfo(const char* path, bool dec, bool dump);
u32 BuildSeedInfo(const char* path, bool dump);
u32 GetGoodName(char* name, const char* path, bool quick);
u32 BuildCmdTmdFromSDDir(const char* path, bool doCmd, bool doTmd);
u32 InstallTicketTieFromTmd(const char* path/*, bool emu*/);
