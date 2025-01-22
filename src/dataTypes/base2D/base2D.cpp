#include "base2D.hpp"
#include "typenames.hpp"

#include <type_traits>

using namespace PandoraEX::Base2D;

template <class T>
Base2D<T>::Base2D(double &val1, double &val2) : val1(val1), val2(val2)
{
    static_assert(std::is_base_of<Base2D<T>, T>::value, "T must derive from Base2D<T>");
}

template <class T>
T Base2D<T>::clone() const
{
    return T(val1, val2);
}

template <class T>
T &Base2D<T>::set(double &x, double &y)
{
    this->val1 = x;
    this->val2 = y;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator=(const double &b2)
{
    val1 = b2;
    val2 = b2;
    return static_cast<T&>(*this);
}

template <class T>
double Base2D<T>::getVal1() const
{
    return val1;
}

template <class T>
double Base2D<T>::getVal2() const
{
    return val2;
}