#include "base2D.hpp"
#include "typenames.hpp"

#include <iostream>

using namespace std;
using namespace PandoraEX;

template <class T>
void Base2D<T>::print() const
{
    std::cout << "x: " << x << ", y: " << y << std::endl;
}

template <class T>
void Base2D<T>::print(const char *msg) const
{
    std::cout << msg << " x: " << x << ", y: " << y << std::endl;
}

template <class T>
std::string Base2D<T>::toString() const
{
    return "x: " + std::to_string(x) + ", y: " + std::to_string(y);
}

