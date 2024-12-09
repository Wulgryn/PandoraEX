#include "base2D_base.hpp"
#include "base2D_typenames.hpp"

#include <cmath>

using namespace PandoraEX;

template <class T>
T &Base2D<T>::operator+(const T &b2)
{
    x = b2.x;
    y = b2.y;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator+(const double &b2)
{
    x += b2;
    y += b2;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator+=(const T &b2)
{
    x += b2.x;
    y += b2.y;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator+=(const double &b2)
{
    x += b2;
    y += b2;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator++()
{
    x++;
    y++;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator-(const T &b2)
{
    x = b2.x;
    y = b2.y;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator-(const double &b2)
{
    x -= b2;
    y -= b2;
    return static_cast<T&>(*this);
}

template <class T>
T Base2D<T>::operator-() const
{
    return static_cast<T>(Base2D<T>(-x, -y));
}

template <class T>
T &Base2D<T>::operator-=(const T &b2)
{
    x -= b2.x;
    y -= b2.y;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator-=(const double &b2)
{
    x -= b2;
    y -= b2;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator--()
{
    x--;
    y--;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator*(const T &b2)
{
    x *= b2.x;
    y *= b2.y;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator*(const double &b2)
{
    x *= b2;
    y *= b2;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator*=(const T &b2)
{
    x *= b2.x;
    y *= b2.y;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator*=(const double &b2)
{
    x *= b2;
    y *= b2;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator/(const T &b2)
{
    x /= b2.x;
    y /= b2.y;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator/(const double &b2)
{
    x /= b2;
    y /= b2;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator/=(const T &b2)
{
    x /= b2.x;
    y /= b2.y;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator/=(const double &b2)
{
    x /= b2;
    y /= b2;
    return static_cast<T&>(*this);
}

template <class T>
bool Base2D<T>::operator==(const T &b2) const
{
    return x == b2.x && y == b2.y;
}

template <class T>
bool Base2D<T>::operator==(const double &b2) const
{
    return x == b2 && y == b2;
}

template <class T>
bool Base2D<T>::operator!=(const T &b2) const
{
    return x != b2.x || y != b2.y;
}

template <class T>
bool Base2D<T>::operator!=(const double &b2) const
{
    return x != b2 || y != b2;
}

template <class T>
bool Base2D<T>::operator>(const T &b2) const
{
    return x > b2.x && y > b2.y;
}

template <class T>
bool Base2D<T>::operator>(const double &b2) const
{
    return x > b2 && y > b2;
}

template <class T>
bool Base2D<T>::operator<(const T &b2) const
{
    return x < b2.x && y < b2.y;
}

template <class T>
bool Base2D<T>::operator<(const double &b2) const
{
    return x < b2 && y < b2;
}

template <class T>
bool Base2D<T>::operator>=(const T &b2) const
{
    return x >= b2.x && y >= b2.y;
}

template <class T>
bool Base2D<T>::operator>=(const double &b2) const
{
    return x >= b2 && y >= b2;
}

template <class T>
bool Base2D<T>::operator<=(const T &b2) const
{
    return x <= b2.x && y <= b2.y;
}

template <class T>
bool Base2D<T>::operator<=(const double &b2) const
{
    return x <= b2 && y <= b2;
}

template <class T>
bool Base2D<T>::operator!() const
{
    return !x && !y;
}

template <class T>
bool Base2D<T>::operator&&(const T &b2) const
{
    return x && y && b2.x && b2.y;
}

template <class T>
bool Base2D<T>::operator&&(const double &b2) const
{
    return x && y && b2;
}

template <class T>
bool Base2D<T>::operator||(const T &b2) const
{
    return x || y || b2.x || b2.y;
}

template <class T>
bool Base2D<T>::operator||(const double &b2) const
{
    return x || y || b2;
}
