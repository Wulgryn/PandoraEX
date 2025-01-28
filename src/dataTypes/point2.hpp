#ifndef POINT2_HPP
#define POINT2_HPP

#include "base2D/primitives/point2D.hpp"
#include "base2D/math.hpp"
#include "base2D/transform.hpp"

namespace PandoraEX
{
    struct Point2 : public Base2D::Point2D<Point2>, Base2D::Math<Point2>, Base2D::Transform<Point2>
    {
        Point2();
        Point2(double xy);
        Point2(double x, double y);

        using Base2D::operator=;
        Point2 &operator=(const Point2 &b2);

        double &operator[](const int &index);

/**=======================================================================================================================*
**                                                  REGION SIZE2 OP+
*========================================================================================================================*/
#pragma region SIZE2 OP+

        template <class U>
        Point2 operator+(const Base2D<U> &op) const
        {
            return Point2(x + op.getVal1(), y + op.getVal2());
        }
        Point2 operator+(const double &val) const;

        template <class U>
        Point2 &operator+=(const Base2D<U> &b2)
        {
            x += b2.getVal1();
            y += b2.getVal2();
            return *this;
        }
        Point2 &operator+=(const double &b2);

        Point2 &operator++();
        Point2 &operator++(int);

/**=======================================================================================================================*
 **                                           END OF REGION SIZE2 OP+
 *========================================================================================================================*/
#pragma endregion SIZE2 OP +

/**=======================================================================================================================*
 **                                                  REGION SIZE2 OP -
 *========================================================================================================================*/
#pragma region SIZE2 OP - -

        template <class U>
        Point2 operator-(const Base2D<U> &b2) const
        {
            return Point2(x - b2.getVal1(), y - b2.getVal2());
        }
        Point2 operator-(const double &b2) const;
        Point2 operator-() const;

        template <class U>
        Point2 &operator-=(const Base2D<U> &b2)
        {
            x -= b2.getVal1();
            y -= b2.getVal2();
            return *this;
        }
        Point2 &operator-=(const double &b2);

        Point2 &operator--();
        Point2 &operator--(int);

/**=======================================================================================================================*
 **                                           END OF REGION SIZE2 OP-
 *========================================================================================================================*/
#pragma endregion SIZE2 OP - -

/**=======================================================================================================================*
 **                                                  REGION SIZE2 OP *
 *========================================================================================================================*/
#pragma region SIZE2 OP*

        template <class U>
        Point2 operator*(const Base2D<U> &b2) const
        {
            return Point2(x * b2.getVal1(), y * b2.getVal2());
        }
        Point2 operator*(const double &b2) const;

        template <class U>
        Point2 &operator*=(const Base2D<U> &b2)
        {
            x *= b2.getVal1();
            y *= b2.getVal2();
            return *this;
        }
        Point2 &operator*=(const double &b2);

/**=======================================================================================================================*
 **                                           END OF REGION SIZE2 OP*
 *========================================================================================================================*/
#pragma endregion SIZE2 OP *

/**=======================================================================================================================*
 **                                                  REGION SIZE2 OP/
 *========================================================================================================================*/
#pragma region SIZE2 OP/

        template <class U>
        Point2 operator/(const Base2D<U> &b2) const
        {
            return Size2(x / b2.getVal1(), y / b2.getVal2());
        }
        Point2 operator/(const double &b2) const;

        template <class U>
        Point2 &operator/=(const Base2D<U> &b2)
        {
            x /= b2.getVal1();
            y /= b2.getVal2();
            return *this;
        }
        Point2 &operator/=(const double &b2);

/**=======================================================================================================================*
 **                                           END OF REGION SIZE2 OP/
 *========================================================================================================================*/
#pragma endregion SIZE2 OP /
    };
}

#endif // POINT2_HPP