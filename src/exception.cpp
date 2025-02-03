#include "exception.hpp"

#include "console/debugConsole.hpp"

#include <iostream>

#include <typeinfo>
#include <memory>
#include <cxxabi.h>

using namespace PandoraEX;

bool Exceptions::logExceptions = true;

Exceptions::Exception::Exception(String message) noexcept
    : std::exception(), _message(message)
{
}

PandoraEX::Exceptions::Exception::Exception(String message, String exception_class, String file, String line) noexcept
    : std::exception(), _message(exception_class + " -> "+ message + "\n  where: " + file + ":" + line)
{
}

PandoraEX::Exceptions::Exception::Exception(String message, String file, String line) noexcept
    : std::exception(), _message("Exception -> " + message + "\n  where: " + file + ":" + line)
{
}

const char *Exceptions::Exception::what() const noexcept
{
    return _message.c_str();
}

void Exceptions::Exception::print() const noexcept
{
    std::cerr << _message << std::endl;
}

String Exceptions::Exception::message() const noexcept
{
    return _message;
}

String Exceptions::Exception::className() const noexcept
{
    int status = 0;
    std::unique_ptr<char[], void (*)(void *)> res{
        abi::__cxa_demangle(typeid(*this).name(), nullptr, nullptr, &status),
        std::free};
    return (status == 0) ? res.get() : typeid(*this).name();
}

void Exceptions::Exception::throw_()
{
    if(logExceptions) DC::logException(_message);
    throw *this;
}