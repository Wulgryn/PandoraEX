#include "base2D_base.hpp"
#include "base2D_typenames.hpp"

#include <cmath>
#include <algorithm>
#include <functional>

using namespace PandoraEX;

// struct Base2D
// {
//     double x, y;
//     double length() const
//     {
//         return sqrt(x * x + y * y);
//     }

//     double distance(const T &b2)
//     {
//         return sqrt(pow(b2.x - x, 2) + pow(b2.y - y, 2));
//     }

//     double dot(const T &b2)
//     {
//         return x * b2.x + y * b2.y;
//     }

//     double cross(const T &b2)
//     {
//         return x * b2.y - y * b2.x;
//     }

//     T &min(const T &b2)
//     {
//         x = std::min(x, b2.x);
//         y = std::min(y, b2.y);
//         return static_cast<T&>(*this);
//     }

//     T &min(const double &b2)
//     {
//         x = std::min(x, b2);
//         y = std::min(y, b2);
//         return static_cast<T&>(*this);
//     }

//     T &max(const T &b2)
//     {
//         x = std::max(x, b2.x);
//         y = std::max(y, b2.y);
//         return static_cast<T&>(*this);
//     }

//     T &max(const double &b2)
//     {
//         x = std::max(x, b2);
//         y = std::max(y, b2);
//         return static_cast<T&>(*this);
//     }

//     T &abs()
//     {
//         x = std::abs(x);
//         y = std::abs(y);
//         return static_cast<T&>(*this);
//     }

//     T &ceil()
//     {
//         x = std::ceil(x);
//         y = std::ceil(y);
//         return static_cast<T&>(*this);
//     }

//     T &floor()
//     {
//         x = std::floor(x);
//         y = std::floor(y);
//         return static_cast<T&>(*this);
//     }

//     T &round()
//     {
//         x = std::round(x);
//         y = std::round(y);
//         return static_cast<T&>(*this);
//     }

//     T &invert()
//     {
//         x = -x;
//         y = -y;
//         return static_cast<T&>(*this);
//     }

//     T &negate()
//     {
//         x = -x;
//         y = -y;
//         return static_cast<T&>(*this);
//     }

//     T &avg(const T &b2)
//     {
//         x = (x + b2.x) / 2;
//         y = (y + b2.y) / 2;
//         return static_cast<T&>(*this);
//     }

//     T &avg(const double &b2)
//     {
//         x = (x + b2) / 2;
//         y = (y + b2) / 2;
//         return static_cast<T&>(*this);
//     }

//     T &clamp(const T &min, const T &max)
//     {
//         x = std::clamp(x, min.x, max.x);
//         y = std::clamp(y, min.y, max.y);
//         return static_cast<T&>(*this);
//     }
// };

template <class T>
double Base2D<T>::length() const
{
    return sqrt(x * x + y * y);
}

template <class T>
double Base2D<T>::distance(const T &b2)
{
    return sqrt(pow(b2.x - x, 2) + pow(b2.y - y, 2));
}

template <class T>
double Base2D<T>::dot(const T &b2)
{
    return x * b2.x + y * b2.y;
}

template <class T>
double Base2D<T>::cross(const T &b2)
{
    return x * b2.y - y * b2.x;
}

template <class T>
T &Base2D<T>::min(const T &b2)
{
    x = std::min(x, b2.x);
    y = std::min(y, b2.y);
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::min(const double &b2)
{
    x = std::min(x, b2);
    y = std::min(y, b2);
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::max(const T &b2)
{
    x = std::max(x, b2.x);
    y = std::max(y, b2.y);
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::max(const double &b2)
{
    x = std::max(x, b2);
    y = std::max(y, b2);
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::abs()
{
    x = std::abs(x);
    y = std::abs(y);
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::ceil()
{
    x = std::ceil(x);
    y = std::ceil(y);
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::floor()
{
    x = std::floor(x);
    y = std::floor(y);
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::round()
{
    x = std::round(x);
    y = std::round(y);
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::invert()
{
    x = -x;
    y = -y;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::negate()
{
    x = std::negate<double>()(x);
    y = std::negate<double>()(y);
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::avg(const T &b2)
{
    x = (x + b2.x) / 2;
    y = (y + b2.y) / 2;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::avg(const double &b2)
{
    x = (x + b2) / 2;
    y = (y + b2) / 2;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::clamp(const T &min, const T &max)
{
    x = std::clamp(x, min.x, max.x);
    y = std::clamp(y, min.y, max.y);
    return static_cast<T&>(*this);
}
