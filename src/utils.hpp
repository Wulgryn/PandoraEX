#ifndef UTILS_HPP
#define UTILS_HPP

#include "dataTypes/string.hpp"

namespace PandoraEX::Utils
{
    template <class T>
    void swap(T &a, T &b)
    {
        T temp = a;
        a = b;
        b = temp;
    }

    String clean_className(const String name);
}

#endif // UTILS_HPP