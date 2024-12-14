#include "../string.hpp"

using namespace PandoraEX;

String &String::operator=(const char *str)
{
    std::string::operator=(str);
    return *this;
}