#include "base2D_base.hpp"
#include "base2D_typenames.hpp"

#include <cmath>
#include <algorithm>

using namespace PandoraEX;

// struct Base2D
// {
//     double x, y;

//     double length() const;
//     double dot(const T &other) const;
//     T clone() const;

//     T &operator-=(const T &other);
//     T operator-() const;
//     T &operator*=(const double &other);

//     T &operator+=(const T &other);

//     T &min(const T &other);
//     T &max(const T &other);

//     T &normalize(const T &b2)
//     {
//         double len = b2.length();
//         x = b2.x / len;
//         y = b2.y / len;
//         return static_cast<T&>(*this);
//     }

//     T &normalize(const double &b2)
//     {
//         double len = length();
//         x /= len;
//         y /= len;
//         return static_cast<T&>(*this);
//     }

//     T &normalize()
//     {
//         double len = length();
//         x /= len;
//         y /= len;
//         return static_cast<T&>(*this);
//     }

//     double angle() const
//     {
//         T v2 = clone();
//         v2.normalize();
//         return atan2(v2.y, v2.x);
//     }

//     T &setAngle(const T &v2)
//     {
//         double len = length();
//         x = len * cos(v2.angle());
//         y = len * sin(v2.angle());
//         return static_cast<T&>(*this);
//     }

//     T &setAngle(const double &angle)
//     {
//         double len = length();
//         x = len * cos(angle);
//         y = len * sin(angle);
//         return static_cast<T&>(*this);
//     }

//     T &rotate(const T &v2)
//     {
//         double cosA = cos(v2.angle());
//         double sinA = sin(v2.angle());
//         double x = this->x;
//         this->x = x * cosA - this->y * sinA;
//         this->y = x * sinA + this->y * cosA;
//         return static_cast<T&>(*this);
//     }

//     T &rotate(const T &v2, const T &vCenter)
//     {
//         double cosA = cos(v2.angle());
//         double sinA = sin(v2.angle());
//         double x = this->x - vCenter.x;
//         this->x = x * cosA - (this->y - vCenter.y) * sinA + vCenter.x;
//         this->y = x * sinA + (this->y - vCenter.y) * cosA + vCenter.y;
//         return static_cast<T&>(*this);
//     }

//     T &rotate(const double &angle)
//     {
//         double cosA = cos(angle);
//         double sinA = sin(angle);
//         double x = this->x;
//         this->x = x * cosA - this->y * sinA;
//         this->y = x * sinA + this->y * cosA;
//         return static_cast<T&>(*this);
//     }

//     T &rotate(const double &angle, const T &vCenter)
//     {
//         double cosA = cos(angle);
//         double sinA = sin(angle);
//         double x = this->x - vCenter.x;
//         this->x = x * cosA - (this->y - vCenter.y) * sinA + vCenter.x;
//         this->y = x * sinA + (this->y - vCenter.y) * cosA + vCenter.y;
//         return static_cast<T&>(*this);
//     }

//     T &lerp(const T &v2, const double &amount)
//     {
//         x = x + (v2.x - x) * amount;
//         y = y + (v2.y - y) * amount;
//         return static_cast<T&>(*this);
//     }

//     T &lerp(const T &v2, const T &v3, const double &amount)
//     {
//         x = x + (v2.x - v3.x) * amount;
//         y = y + (v2.y - v3.y) * amount;
//         return static_cast<T&>(*this);
//     }

//     T &reflect(const T &normal)
//     {
//         T n = normal.clone();
//         n.normalize();
//         double _dot = this->dot(n);
//         x = x - 2 * _dot * n.x;
//         y = y - 2 * _dot * n.y;
//         return static_cast<T&>(*this);
//     }

//     T &setLength(double length)
//     {
//         normalize();
//         x *= length;
//         y *= length;
//         return static_cast<T&>(*this);
//     }

//     T &zero()
//     {
//         x = 0;
//         y = 0;
//         return static_cast<T&>(*this);
//     }

//     T &one()
//     {
//         x = 1;
//         y = 1;
//         return static_cast<T&>(*this);
//     }

//     T &up(bool forceSet = false)
//     {
//         y += 1;
//         if (forceSet)
//         {
//             x = 0;
//             y = 1;
//         }
//         return static_cast<T&>(*this);
//     }

//     T &down(bool forceSet = false)
//     {
//         y -= 1;
//         if (forceSet)
//         {
//             x = 0;
//             y = -1;
//         }
//         return static_cast<T&>(*this);
//     }

//     T &left(bool forceSet = false)
//     {
//         x -= 1;
//         if (forceSet)
//         {
//             x = -1;
//             y = 0;
//         }
//         return static_cast<T&>(*this);
//     }

//     T &right(bool forceSet = false)
//     {
//         x += 1;
//         if (forceSet)
//         {
//             x = 1;
//             y = 0;
//         }
//         return static_cast<T&>(*this);
//     }

//     T &moveTowards(const T &v2, double maxDistanceDelta)
//     {
//         T v = v2.clone();
//         T dir = v.clone();
//         dir -= static_cast<T&>(*this);
//         double dist = dir.length();
//         if (dist <= maxDistanceDelta || dist == 0)
//         {
//             x = v.x;
//             y = v.y;
//         }
//         else
//         {
//             dir.normalize();
//             x += dir.x * maxDistanceDelta;
//             y += dir.y * maxDistanceDelta;
//         }
//         return static_cast<T&>(*this);
//     }

//     T &moveTowards(const T &v2, const T &v3, double maxDistanceDelta)
//     {
//         T v = v2.clone();
//         T dir = v.clone();
//         dir -= v3;
//         double dist = dir.length();
//         if (dist <= maxDistanceDelta || dist == 0)
//         {
//             x = v.x;
//             y = v.y;
//         }
//         else
//         {
//             dir.normalize();
//             x += dir.x * maxDistanceDelta;
//             y += dir.y * maxDistanceDelta;
//         }
//         return static_cast<T&>(*this);
//     }

//     T &smoothDamp(const T &v2, const T &v3, T &currentVelocity, double smoothTime)
//     {
//         double deltaTime = 1;
//         double maxSpeed = INFINITY;
//         return smoothDamp(v2, v3, currentVelocity, smoothTime, maxSpeed, deltaTime);
//     }

//     T &smoothDamp(const T &v2, const T &v3, T &currentVelocity, double smoothTime, double maxSpeed, double deltaTime)
//     {
//         double deltaTimeClamped = std::min(deltaTime, 0.1);
//         double omega = 2.0 / smoothTime;
//         double x = omega * deltaTimeClamped;
//         double exp = 1.0 / (1.0 + x + 0.48 * x * x + 0.235 * x * x * x);
//         T change = v3.clone();
//         change -= v2;
//         T originalTo = v2.clone();
//         T maxChange = v3.clone();
//         maxChange *= maxSpeed;
//         change.min(maxChange);
//         change.max(-maxChange);
//         T temp = currentVelocity.clone();
//         T temp2 = change.clone();
//         temp2 *= omega;
//         temp2 *= deltaTimeClamped;
//         temp2 += temp;
//         temp2.min(change);
//         change = temp2;
//         T target = v2.clone();
//         change *= deltaTimeClamped;
//         target += change;
//         T temp3 = v3.clone();
//         T temp4 = v2.clone();
//         temp3 -= temp4;
//         T temp5 = target.clone();
//         temp5 -= v2;
//         bool done = temp3.dot(temp5) > 0;
//         if (done)
//         {
//             target = v3;
//             change = target.clone();
//             change -= v2;
//         }
//         currentVelocity = change;
//         x = v2.x;
//         y = v2.y;
//         x = target.x;
//         y = target.y;
//         return static_cast<T&>(*this);
//     }
// };

template <class T>
T &Base2D<T>::normalize(const T &b2)
{
    double len = b2.length();
    x = b2.x / len;
    y = b2.y / len;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::normalize(const double &b2)
{
    x /= b2;
    y /= b2;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::normalize()
{
    double len = length();
    x /= len;
    y /= len;
    return static_cast<T&>(*this);
}

template <class T>
double Base2D<T>::angle() const
{
    T v2 = clone();
    v2.normalize();
    return atan2(v2.y, v2.x);
}

template <class T>
T &Base2D<T>::setAngle(const T &v2)
{
    double len = length();
    x = len * cos(v2.angle());
    y = len * sin(v2.angle());
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::setAngle(const double &angle)
{
    double len = length();
    x = len * cos(angle);
    y = len * sin(angle);
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::rotate(const T &v2)
{
    double cosA = cos(v2.angle());
    double sinA = sin(v2.angle());
    double x = this->x;
    this->x = x * cosA - this->y * sinA;
    this->y = x * sinA + this->y * cosA;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::rotate(const T &v2, const T &vCenter)
{
    double cosA = cos(v2.angle());
    double sinA = sin(v2.angle());
    double x = this->x - vCenter.x;
    this->x = x * cosA - (this->y - vCenter.y) * sinA + vCenter.x;
    this->y = x * sinA + (this->y - vCenter.y) * cosA + vCenter.y;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::rotate(const double &angle)
{
    double cosA = cos(angle);
    double sinA = sin(angle);
    double x = this->x;
    this->x = x * cosA - this->y * sinA;
    this->y = x * sinA + this->y * cosA;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::rotate(const double &angle, const T &vCenter)
{
    double cosA = cos(angle);
    double sinA = sin(angle);
    double x = this->x - vCenter.x;
    this->x = x * cosA - (this->y - vCenter.y) * sinA + vCenter.x;
    this->y = x * sinA + (this->y - vCenter.y) * cosA + vCenter.y;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::lerp(const T &v2, const double &amount)
{
    x = x + (v2.x - x) * amount;
    y = y + (v2.y - y) * amount;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::lerp(const T &v2, const T &v3, const double &amount)
{
    x = x + (v2.x - v3.x) * amount;
    y = y + (v2.y - v3.y) * amount;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::reflect(const T &normal)
{
    T n = normal.clone();
    n.normalize();
    double _dot = this->dot(n);
    x = x - 2 * _dot * n.x;
    y = y - 2 * _dot * n.y;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::setLength(double length)
{
    normalize();
    x *= length;
    y *= length;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::zero()
{
    x = 0;
    y = 0;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::one()
{
    x = 1;
    y = 1;
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::up(bool forceSet)
{
    y += 1;
    if (forceSet)
    {
        x = 0;
        y = 1;
    }
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::down(bool forceSet)
{
    y -= 1;
    if (forceSet)
    {
        x = 0;
        y = -1;
    }
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::left(bool forceSet)
{
    x -= 1;
    if (forceSet)
    {
        x = -1;
        y = 0;
    }
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::right(bool forceSet)
{
    x += 1;
    if (forceSet)
    {
        x = 1;
        y = 0;
    }
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::moveTowards(const T &v2, double maxDistanceDelta)
{
    T v = v2.clone();
    T dir = v.clone();
    dir -= static_cast<T&>(*this);
    double dist = dir.length();
    if (dist <= maxDistanceDelta || dist == 0)
    {
        x = v.x;
        y = v.y;
    }
    else
    {
        dir.normalize();
        x += dir.x * maxDistanceDelta;
        y += dir.y * maxDistanceDelta;
    }
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::moveTowards(const T &v2, const T &v3, double maxDistanceDelta)
{
    T v = v2.clone();
    T dir = v.clone();
    dir -= v3;
    double dist = dir.length();
    if (dist <= maxDistanceDelta || dist == 0)
    {
        x = v.x;
        y = v.y;
    }
    else
    {
        dir.normalize();
        x += dir.x * maxDistanceDelta;
        y += dir.y * maxDistanceDelta;
    }
    return static_cast<T&>(*this);
}

template <class T>
T &Base2D<T>::smoothDamp(const T &v2, const T &v3, T &currentVelocity, double smoothTime)
{
    double deltaTime = 1;
    double maxSpeed = INFINITY;
    return smoothDamp(v2, v3, currentVelocity, smoothTime, maxSpeed, deltaTime);
}

template <class T>
T &Base2D<T>::smoothDamp(const T &v2, const T &v3, T &currentVelocity, double smoothTime, double maxSpeed, double deltaTime)
{
    double deltaTimeClamped = std::min(deltaTime, 0.1);
    double omega = 2.0 / smoothTime;
    //double x = omega * deltaTimeClamped;
    //double exp = 1.0 / (1.0 + x + 0.48 * x * x + 0.235 * x * x * x);
    T change = v3.clone();
    change -= v2;
    //T originalTo = v2.clone();
    T maxChange = v3.clone();
    maxChange *= maxSpeed;
    change.min(maxChange);
    change.max(-maxChange);
    T temp = currentVelocity.clone();
    T temp2 = change.clone();
    temp2 *= omega;
    temp2 *= deltaTimeClamped;
    temp2 += temp;
    temp2.min(change);
    change = temp2;
    T target = v2.clone();
    change *= deltaTimeClamped;
    target += change;
    T temp3 = v3.clone();
    T temp4 = v2.clone();
    temp3 -= temp4;
    T temp5 = target.clone();
    temp5 -= v2;
    bool done = temp3.dot(temp5) > 0;
    if (done)
    {
        target = v3;
        change = target.clone();
        change -= v2;
    }
    currentVelocity = change;
    x = v2.x;
    y = v2.y;
    x = target.x;
    y = target.y;
    return static_cast<T&>(*this);
}