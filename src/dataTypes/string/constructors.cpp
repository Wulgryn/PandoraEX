#include "../string.hpp"

using namespace PandoraEX;

String::String()
{
}

String::String(const char *str) : std::string(str)
{
}

String::String(const std::string &str) : std::string(str)
{
}

String::String(const String &str) : std::string(str)
{
}