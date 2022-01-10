/* Copyright 2021 the SumatraPDF project authors (see AUTHORS file).
   License: Simplified BSD */

#include "utils/BaseUtil.h"


#include "utils/WinDynCalls.h"
#include "utils/DbgHelpDyn.h"
#include "utils/FileUtil.h"
#include "utils/HttpUtil.h"
#include "utils/LzmaSimpleArchive.h"
#include "utils/WinUtil.h"

#include "DisplayMode.h"
#include "SumatraPDF.h"
#include "AppTools.h"
#include "AppUtil.h"
#include "CrashHandler.h"
#include "Version.h"
#include "SumatraConfig.h"
#include "AppPrefs.h"

#include "utils/Log.h"


void _submitDebugReportIfFunc(bool cond, __unused const char* condStr) {
}

void InstallCrashHandler(const WCHAR* crashDumpPath, const WCHAR* crashFilePath, const WCHAR* symDir) {

}

void UninstallCrashHandler() {
}
