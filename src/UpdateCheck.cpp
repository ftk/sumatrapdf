/* Copyright 2021 the SumatraPDF project authors (see AUTHORS file).
   License: GPLv3 */

#include "utils/BaseUtil.h"
#include "utils/ThreadUtil.h"
#include "utils/UITask.h"
#include "utils/SquareTreeParser.h"
#include "utils/HttpUtil.h"
#include "utils/WinUtil.h"
#include "utils/FileUtil.h"

#include "SumatraConfig.h"
#include "DisplayMode.h"
#include "SettingsStructs.h"
#include "GlobalPrefs.h"
#include "AppUtil.h"
#include "AppTools.h"
#include "AppPrefs.h"
#include "Version.h"
#include "Translations.h"
#include "SumatraPDF.h"
#include "Flags.h"
#include "ProgressUpdateUI.h"
#include "Notifications.h"
#include "WindowInfo.h"
#include "SumatraDialogs.h"
#include "UpdateCheck.h"


void CheckForUpdateAsync(WindowInfo* win, UpdateCheck updateCheckType) {
}

void UpdateSelfTo(const WCHAR* path) {
}
