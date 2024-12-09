#include "base2D_base.hpp"
#include "base2D_typenames.hpp"

using namespace PandoraEX;

// struct Base2D
// {
//     double x, y;
//     //Base2D(double xy) : x(xy), y(xy) {}
//     Base2D(double x, double y) : x(x), y(y) {}

//     T clone() const
//     {
//         return Base2D(x, y);
//     }

//     T &set(double x, double y)
//     {
//         this->x = x;
//         this->y = y;
//         return *this;
//     }

//     T &operator=(const T &b2)
//     {
//         x = b2.x;
//         y = b2.y;
//         return *this;
//     }

//     T &operator=(const double &b2)
//     {
//         x = b2;
//         y = b2;
//         return *this;
//     }

//     double operator[](const int &index)
//     {
//         return index == 0 ? x : y;
//     }
// };

template <class T>
Base2D<T>::Base2D(double xy) : x(xy), y(xy)
{
    static_assert(std::is_base_of<Base2D<T>, T>::value, "T must derive from Base2D<T>");
}

template <class T>
Base2D<T>::Base2D(double x, double y) : x(x), y(y)
{
    static_assert(std::is_base_of<Base2D<T>, T>::value, "T must derive from Base2D<T>");
}

template <class T>
T Base2D<T>::clone() const
{
    return static_cast<T>(Base2D<T>(x, y));
}

template <class T>
T &Base2D<T>::set(double x, double y)
{
    this->x = x;
    this->y = y;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator=(const T &b2)
{
    x = b2.x;
    y = b2.y;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::operator=(const double &b2)
{
    x = b2;
    y = b2;
    return static_cast<T&>(*this);
}

template <class T>
double Base2D<T>::operator[](const int &index)
{
    return index == 0 ? x : y;
}
