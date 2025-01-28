#ifndef VECTOR2_HPP
#define VECTOR2_HPP

#include "base2D/primitives/vector2D.hpp"
#include "base2D/math.hpp"
#include "base2D/transform.hpp"

namespace PandoraEX
{
    struct Vector2 : public Base2D::Math<Vector2>, Base2D::Transform<Vector2>, Base2D::Vector2D<Vector2>
    {
        Vector2();
        Vector2(double xy);
        Vector2(double x, double y);

        using Base2D::operator=;
        Vector2 &operator=(const Vector2 &b2);

        double &operator[](const int &index);
/**=======================================================================================================================*
**                                                  REGION SIZE2 OP+
*========================================================================================================================*/
#pragma region SIZE2 OP+

        template <class U>
        Vector2 operator+(const Base2D<U> &op) const
        {
            return Vector2(x + op.getVal1(), y + op.getVal2());
        }
        Vector2 operator+(const double &val) const;

        template <class U>
        Vector2 &operator+=(const Base2D<U> &b2)
        {
            x += b2.getVal1();
            y += b2.getVal2();
            return *this;
        }
        Vector2 &operator+=(const double &b2);

        Vector2 &operator++();
        Vector2 &operator++(int);

/**=======================================================================================================================*
 **                                           END OF REGION SIZE2 OP+
 *========================================================================================================================*/
#pragma endregion SIZE2 OP +

/**=======================================================================================================================*
 **                                                  REGION SIZE2 OP -
 *========================================================================================================================*/
#pragma region SIZE2 OP - -

        template <class U>
        Vector2 operator-(const Base2D<U> &b2) const
        {
            return Vector2(x - b2.getVal1(), y - b2.getVal2());
        }
        Vector2 operator-(const double &b2) const;
        Vector2 operator-() const;

        template <class U>
        Vector2 &operator-=(const Base2D<U> &b2)
        {
            x -= b2.getVal1();
            y -= b2.getVal2();
            return *this;
        }
        Vector2 &operator-=(const double &b2);

        Vector2 &operator--();
        Vector2 &operator--(int);

/**=======================================================================================================================*
 **                                           END OF REGION SIZE2 OP-
 *========================================================================================================================*/
#pragma endregion SIZE2 OP - -

/**=======================================================================================================================*
 **                                                  REGION SIZE2 OP *
 *========================================================================================================================*/
#pragma region SIZE2 OP*

        template <class U>
        Vector2 operator*(const Base2D<U> &b2) const
        {
            return Vector2(x * b2.getVal1(), y * b2.getVal2());
        }
        Vector2 operator*(const double &b2) const;

        template <class U>
        Vector2 &operator*=(const Base2D<U> &b2)
        {
            x *= b2.getVal1();
            y *= b2.getVal2();
            return *this;
        }
        Vector2 &operator*=(const double &b2);

/**=======================================================================================================================*
 **                                           END OF REGION SIZE2 OP*
 *========================================================================================================================*/
#pragma endregion SIZE2 OP *

/**=======================================================================================================================*
 **                                                  REGION SIZE2 OP/
 *========================================================================================================================*/
#pragma region SIZE2 OP/

        template <class U>
        Vector2 operator/(const Base2D<U> &b2) const
        {
            return Size2(x / b2.getVal1(), y / b2.getVal2());
        }
        Vector2 operator/(const double &b2) const;

        template <class U>
        Vector2 &operator/=(const Base2D<U> &b2)
        {
            x /= b2.getVal1();
            y /= b2.getVal2();
            return *this;
        }
        Vector2 &operator/=(const double &b2);

/**=======================================================================================================================*
 **                                           END OF REGION SIZE2 OP/
 *========================================================================================================================*/
#pragma endregion SIZE2 OP /
    };
}

#endif // VECTOR2_HPP