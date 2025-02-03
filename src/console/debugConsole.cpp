#include "debugConsole.hpp"
#include "consoleColor.hpp"
#include "../dateTime.hpp"

#include <cstdarg>

using namespace PandoraEX;

DebugConsoleClockPrecision DebugConsole::clockPrecision = DebugConsoleClockPrecision::MILLISECONDS;

String DebugConsole::getTime()
{
    String time = "[" + String(DateTime::Month());
    time += "." + String(DateTime::Day());
    time += "|" + String(DateTime::Hour());
    time += ":" + String(DateTime::Minute());
    time += ":" + String(DateTime::Second());

    switch (clockPrecision)
    {
    case DebugConsoleClockPrecision::SECONDS:
        return time + "]";
    case DebugConsoleClockPrecision::MILLISECONDS:
        return time + "." + String(DateTime::Millisecond()) + "]";
    case DebugConsoleClockPrecision::MICROSECONDS:
        return time + "." + String(DateTime::Millisecond()) + "." + String(DateTime::Microsecond()) + "]";
    case DebugConsoleClockPrecision::NANOSECOND:
        return time + "." + String(DateTime::Millisecond()) + "." + String(DateTime::Microsecond()) + "." + String(DateTime::Nanosecond()) + "]";
    default:
        return time + "]";
    }

    return time + "]";
}

void DebugConsole::log(const String &message, ...)
{
    va_list args;
    va_start(args, message);

    String formattedMessage = getTime() + " " + String(message) + "\n";

    vprintf(formattedMessage.c_str(), args);

    va_end(args);
}

void DebugConsole::logError(const String &message, ...)
{
    va_list args;
    va_start(args, message);

    String formattedMessage = getTime() + " [ERROR] " + message + "\n";
    ConsoleColor::set(ConsoleForegroundColors::FG_DEFAULT, ConsoleBackgroundColors::BG_RED);
    vprintf(formattedMessage.c_str(), args);
    ConsoleColor::reset();
    va_end(args);
}

void DebugConsole::logInfo(const String &message, ...)
{
    va_list args;
    va_start(args, message);

    String formattedMessage = getTime() + " [INFO] " + message + "\n";
    ConsoleColor::set(ConsoleForegroundColors::FG_CYAN);
    vprintf(formattedMessage.c_str(), args);
    ConsoleColor::reset();
    va_end(args);
}

void DebugConsole::logWarning(const String &message, ...)
{
    va_list args;
    va_start(args, message);

    String formattedMessage = getTime() + " [WARNING] " + message + "\n";
    ConsoleColor::set(ConsoleForegroundColors::FG_YELLOW);
    vprintf(formattedMessage.c_str(), args);
    ConsoleColor::reset();
    va_end(args);
}

void DebugConsole::logDebug(const String &message, ...)
{
    va_list args;
    va_start(args, message);

    String formattedMessage = getTime() + " [DEBUG] " + message + "\n";
    ConsoleColor::set(ConsoleForegroundColors::FG_GREEN);
    vprintf(formattedMessage.c_str(), args);
    ConsoleColor::reset();
    va_end(args);
}

void DebugConsole::logTrace(const String &message, ...)
{
    va_list args;
    va_start(args, message);

    String formattedMessage = getTime() + " [TRACE] " + message + "\n";
    ConsoleColor::set(ConsoleForegroundColors::FG_MAGENTA);
    vprintf(formattedMessage.c_str(), args);
    ConsoleColor::reset();
    va_end(args);
}

void DebugConsole::logFatal(const String &message, ...)
{
    va_list args;
    va_start(args, message);

    String formattedMessage = getTime() + " [FATAL] " + message + "\n";
    ConsoleColor::set(ConsoleForegroundColors::FG_WHITE, ConsoleBackgroundColors::BG_RED);
    vprintf(formattedMessage.c_str(), args);
    ConsoleColor::reset();
    va_end(args);
}

void DebugConsole::logSuccess(const String &message, ...)
{
    va_list args;
    va_start(args, message);

    String formattedMessage = getTime() + " [SUCCESS] " + message + "\n";
    ConsoleColor::set(ConsoleForegroundColors::FG_GREEN);
    vprintf(formattedMessage.c_str(), args);
    ConsoleColor::reset();
    va_end(args);
}

void DebugConsole::logFailure(const String &message, ...)
{
    va_list args;
    va_start(args, message);

    String formattedMessage = getTime() + " [FAILURE] " + message + "\n";
    ConsoleColor::set(ConsoleForegroundColors::FG_RED);
    vprintf(formattedMessage.c_str(), args);
    ConsoleColor::reset();
    va_end(args);
}

void DebugConsole::logCritical(const String &message, ...)
{
    va_list args;
    va_start(args, message);

    String formattedMessage = getTime() + " [CRITICAL] " + message + "\n";
    ConsoleColor::set(ConsoleForegroundColors::FG_RED);
    vprintf(formattedMessage.c_str(), args);
    ConsoleColor::reset();
    va_end(args);
}

void DebugConsole::logException(const String &message, ...)
{
    va_list args;
    va_start(args, message);

    String formattedMessage = getTime() + " [EXCEPTION] " + message + "\n";
    ConsoleColor::set(ConsoleForegroundColors::FG_RED);
    vprintf(formattedMessage.c_str(), args);
    ConsoleColor::reset();
    va_end(args);
}