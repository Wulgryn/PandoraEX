#ifndef BASE2D_BASE_HPP
#define BASE2D_BASE_HPP

#include <type_traits>
#include <string>

namespace PandoraEX
{
    template <class T>
    struct Base2D
    {
/**=======================================================================================================================*
 **                                                  REGION BASE
 *========================================================================================================================*/
#pragma region BASE

        double x, y;
        Base2D(double xy = 0.0);
        Base2D(double x, double y);
        T clone() const;
        T &set(double x, double y);

        T &operator=(const T &b2);
        T &operator=(const double &b2);

        double operator[](const int &index);
/**=======================================================================================================================*
 **                                           END OF REGION BASE
 *========================================================================================================================*/
#pragma endregion BASE

/**=======================================================================================================================*
 **                                                  REGION MATH
 *========================================================================================================================*/
#pragma region MATH

        double length() const;
        double distance(const T &b2);
        double dot(const T &b2);
        double cross(const T &b2);

        T &min(const T &b2);
        T &min(const double &b2);

        T &max(const T &b2);
        T &max(const double &b2);

        T &abs();
        T &ceil();
        T &floor();
        T &round();
        T &invert();
        T &negate();

        T &avg(const T &b2);
        T &avg(const double &b2);

        T &clamp(const T &min, const T &max);
        T &clamp(const double &min, const double &max);

/**=======================================================================================================================*
 **                                           END OF REGION MATH
 *========================================================================================================================*/
#pragma endregion MATH

/**=======================================================================================================================*
 **                                                  REGION VEC2 OP+
 *========================================================================================================================*/
#pragma region VEC2 OP+

        T &operator+(const T &b2);
        T &operator+(const double &b2);

        T &operator+=(const T &b2);
        T &operator+=(const double &b2);

        T &operator++();

/**=======================================================================================================================*
 **                                           END OF REGION VEC2 OP+
 *========================================================================================================================*/
#pragma endregion VEC2 OP +

/**=======================================================================================================================*
 **                                                  REGION VEC2 OP -
 *========================================================================================================================*/
#pragma region VEC2 OP - -

        T &operator-(const T &b2);
        T &operator-(const double &b2);
        T operator-() const;

        T &operator-=(const T &b2);
        T &operator-=(const double &b2);

        T &operator--();

/**=======================================================================================================================*
 **                                           END OF REGION VEC2 OP-
 *========================================================================================================================*/
#pragma endregion VEC2 OP - -

/**=======================================================================================================================*
 **                                                  REGION VEC2 OP *
 *========================================================================================================================*/
#pragma region VEC2 OP*

        T &operator*(const T &b2);
        T &operator*(const double &b2);

        T &operator*=(const T &b2);
        T &operator*=(const double &b2);

/**=======================================================================================================================*
 **                                           END OF REGION VEC2 OP*
 *========================================================================================================================*/
#pragma endregion VEC2 OP *

/**=======================================================================================================================*
 **                                                  REGION VEC2 OP/
 *========================================================================================================================*/
#pragma region VEC2 OP/

        T &operator/(const T &b2);
        T &operator/(const double &b2);

        T &operator/=(const T &b2);
        T &operator/=(const double &b2);

/**=======================================================================================================================*
 **                                           END OF REGION VEC2 OP/
 *========================================================================================================================*/
#pragma endregion VEC2 OP /
/**=======================================================================================================================*
 **                                                  REGION LOGIC OPERATORS
 *========================================================================================================================*/
#pragma region LOGIC OPERATORS

        bool operator==(const T &b2) const;
        bool operator==(const double &b2) const;

        bool operator!=(const T &b2) const;
        bool operator!=(const double &b2) const;

        bool operator>(const T &b2) const;
        bool operator>(const double &b2) const;

        bool operator<(const T &b2) const;
        bool operator<(const double &b2) const;

        bool operator>=(const T &b2) const;
        bool operator>=(const double &b2) const;

        bool operator<=(const T &b2) const;
        bool operator<=(const double &b2) const;

        bool operator!() const;
        bool operator&&(const T &b2) const;
        bool operator&&(const double &b2) const;

        bool operator||(const T &b2) const;
        bool operator||(const double &b2) const;

/**=======================================================================================================================*
 **                                           END OF REGION LOGIC OPERATORS
 *========================================================================================================================*/
#pragma endregion LOGIC OPERATORS

/**=======================================================================================================================*
 **                                                  REGION TRANSFROM
 *========================================================================================================================*/
#pragma region TRANSFROM

        T &normalize(const T &b2);
        T &normalize(const double &b2);
        T &normalize();

        double angle() const;

        T &setAngle(const T &v2);
        T &setAngle(const double &angle);

        T &rotate(const T &v2);
        T &rotate(const T &v2, const T &vCenter);
        T &rotate(const double &angle);
        T &rotate(const double &angle, const T &vCenter);

        T &lerp(const T &v2, const double &amount);
        T &lerp(const T &v2, const T &v3, const double &amount);

        T &reflect(const T &normal);

        T &setLength(double length);

        T &zero();
        T &one();
        T &up(bool forceSet = false);
        T &down(bool forceSet = false);
        T &left(bool forceSet = false);
        T &right(bool forceSet = false);

        T &moveTowards(const T &v2, double maxDistanceDelta);
        T &moveTowards(const T &v2, const T &v3, double maxDistanceDelta);

        T &smoothDamp(const T &v2, const T &v3, T &currentVelocity, double smoothTime);
        T &smoothDamp(const T &v2, const T &v3, T &currentVelocity, double smoothTime, double maxSpeed, double deltaTime);

/**=======================================================================================================================*
 **                                           END OF REGION TRANSFROM
 *========================================================================================================================*/
#pragma endregion TRANSFROM

/**=======================================================================================================================*
 **                                                  REGION UTILS
 *========================================================================================================================*/
#pragma region UTILS
        void print() const;
        void print(const char *msg) const;

        std::string toString() const; 
/**=======================================================================================================================*
 **                                           END OF REGION UTILS
 *========================================================================================================================*/
#pragma endregion UTILS
    };
}

#endif // BASE2D_BASE_HPP