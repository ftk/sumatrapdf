/* Copyright 2022 the SumatraPDF project authors (see AUTHORS file).
   License: GPLv3 */

enum class UpdateCheck {
    UserInitiated, // user used menu "Check update"
    Automatic,     // an automatic, periodic check done at startup
};

inline void CheckForUpdateAsync(MainWindow* win, UpdateCheck updateCheckType) {}
inline void UpdateSelfTo(const char* path) {}
