#include "exception.hpp"

#include <iostream>

#include <typeinfo>
#include <memory>
#include <cxxabi.h>

using namespace PandoraEX;

PandoraEX::Exception::Exception(String message) noexcept
    : std::exception(), _message(message)
{
}

PandoraEX::Exception::Exception(String message, String exception_class, String file, String line) noexcept
    : std::exception(), _message(exception_class + " -> "+ message + "\n  where: " + file + ":" + line)
{
}

const char *Exception::what() const noexcept
{
    return _message.c_str();
}

void Exception::print() const noexcept
{
    std::cerr << _message << std::endl;
}

String Exception::message() const noexcept
{
    return _message;
}

String Exception::className() const noexcept
{
    int status = 0;
    std::unique_ptr<char[], void (*)(void *)> res{
        abi::__cxa_demangle(typeid(*this).name(), nullptr, nullptr, &status),
        std::free};
    return (status == 0) ? res.get() : typeid(*this).name();
}

void Exception::throw_()
{
    throw *this;
}