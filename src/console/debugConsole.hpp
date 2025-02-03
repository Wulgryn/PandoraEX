#ifndef DEBUG_CONSOLE_HPP
#define DEBUG_CONSOLE_HPP

#include "../dataTypes/string.hpp"

namespace PandoraEX
{
    enum DebugConsoleClockPrecision
    {
        SECONDS,
        MILLISECONDS,
        MICROSECONDS,
        NANOSECOND
    };

    class DebugConsole
    {
        static String getTime();
    public:
        static DebugConsoleClockPrecision clockPrecision;
        static void log(const String &message, ...);

        static void logError(const String &message, ...);
        static void logInfo(const String &message, ...);
        static void logWarning(const String &message, ...);
        static void logDebug(const String &message, ...);
        static void logTrace(const String &message, ...);
        static void logFatal(const String &message, ...);
        static void logSuccess(const String &message, ...);
        static void logFailure(const String &message, ...);
        static void logCritical(const String &message, ...);
        static void logException(const String &message, ...);
    };
    typedef DebugConsole DC;
}

#endif // DEBUG_CONSOLE_HPP