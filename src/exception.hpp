#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <exception>
#include "dataTypes/string.hpp"
namespace PandoraEX::Exceptions
{
    extern bool logExceptions;
    class Exception : public std::exception
    {
        String _message;
    public:
        Exception(String message = "An exception has occurred.") noexcept;
        Exception(String message, String exception_class ,String file, String line) noexcept;
        Exception(String message ,String file, String line) noexcept;
        const char *what() const noexcept override;

        void print() const noexcept;
        String message() const noexcept;
        String className() const noexcept;

        void throw_();

        ~Exception() noexcept = default;
    };

/// Creates a new exception object with the given message.
#define Exception_(exceptionClass, message) exceptionClass(message, PandoraEX::String(__FILE__), PandoraEX::String(__LINE__))

/// Creates a new exception object with the given message and throws it.
#define ThrowException(exceptionClass, message) exceptionClass(message, PandoraEX::String(__FILE__), PandoraEX::String(__LINE__)).throw_()

    class InvalidArgumentException : public Exception
    {
    public:
        InvalidArgumentException(String message = "An invalid argument was passed.") noexcept : Exception(message) {}
        InvalidArgumentException(String message, String file, String line) noexcept : Exception(message, "InvalidArgumentException",file, line) {}
    };

}

#endif // EXCEPTION_HPP