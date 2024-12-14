#ifndef BASE2D_BASE_HPP
#define BASE2D_BASE_HPP

#include <type_traits>
#include <string>

namespace PandoraEX
{
    /// @brief Base2D class
    /// @tparam T The derived class, must be derived from Base2D<T>
    template <class T>
    struct Base2D
    {
/**=======================================================================================================================*
 **                                                  REGION BASE
 *========================================================================================================================*/
#pragma region BASE

        double x, y;

        /// @brief Default constructor.
        /// @param xy The value to set x and y to.
        Base2D(double xy = 0.0);

        /// @brief Constructor.
        /// @param x The value to set x to.
        /// @param y The value to set y to.
        Base2D(double x, double y);

        /// @brief Clones the object.
        /// @return T The cloned object.
        T clone() const;

        /// @brief Sets the x and y values.
        /// @param x The value to set x to.
        /// @param y The value to set y to.
        /// @return T The object.
        T &set(double x, double y);

        /// @brief Assignment operator. Sets x to b2.x and y to b2.y.
        /// @param b2 The object to assign.
        /// @return T The object.
        T &operator=(const T &b2);

        /// @brief Assignment operator. Sets x and y to b2.
        /// @param b2 The value to assign.
        /// @return T The object.
        T &operator=(const double &b2);

        /// @brief Index operator.
        /// @param index The index to get. 0 for x, 1 for y.
        /// @return double The value at the index.
        /// @note 0 for x, otherwise y.
        double operator[](const int &index);
/**=======================================================================================================================*
 **                                           END OF REGION BASE
 *========================================================================================================================*/
#pragma endregion BASE

/**=======================================================================================================================*
 **                                                  REGION MATH
 *========================================================================================================================*/
#pragma region MATH

        /// @brief Length of the vector.
        /// @return double The length of the vector.
        /// @note This method handles the struct as a vector.
        double length() const;

        /// @brief Distance between two vectors.
        /// @param b2 The second vector.
        /// @return double The distance between the two vectors.
        /// @note This method handles the struct as a vector.
        double distance(const T &b2);

        /// @brief The scalar product of two vectors.
        /// @param b2 The second vector.
        /// @return double The dot product of the two vectors.
        /// @note This method handles the struct as a vector.
        /// @note #### Values(x):
        /// @note x > 0: The angle between the two vectors is less than 90 degrees.
        /// @note x = 0: The angle between the two vectors is 90 degrees.
        /// @note x < 0: The angle between the two vectors is greater than 90 degrees.
        double dot(const T &b2);

        /// @brief The cross product of two vectors.
        /// @param b2 The second vector.
        /// @return double The cross product of the two vectors.
        /// @note This method handles the struct as a vector.
        /// @note #### Values(x):
        /// @note x > 0: The second vector is clockwise from the first vector.
        /// @note x = 0: The two vectors are parallel.
        /// @note x < 0: The second vector is counterclockwise from the first vector.
        double cross(const T &b2);

        /// @brief The minimum of two values.
        /// @param b2 The second vector.
        /// @return T The object.
        /// @note x = min(x, b2.x)
        /// @note y = min(y, b2.y)
        T &min(const T &b2);

        /// @brief The minimum of x, y and a value.
        /// @param b2 The value to compare.
        /// @return T The object.
        /// @note x = min(x, b2)
        /// @note y = min(y, b2)
        T &min(const double &b2);

        /// @brief The maximum of two values.
        /// @param b2 The second vector.
        /// @return T The object.
        /// @note x = max(x, b2.x)
        /// @note y = max(y, b2.y)
        T &max(const T &b2);

        /// @brief The maximum of x, y and a value.
        /// @param b2 The value to compare.
        /// @return T The object.
        /// @note x = max(x, b2)
        /// @note y = max(y, b2)
        T &max(const double &b2);

        /// @brief The absolute of x and y.
        /// @return T The object.
        T &abs();

        /// @brief The ceiling of x and y.
        /// @return T The object.
        T &ceil();

        /// @brief The floor of x and y.
        /// @return T The object.
        T &floor();

        /// @brief The round of x and y.
        /// @return T The object.
        T &round();

        /// @brief The inverse of x and y.
        /// @return T The object.
        T &invert();

        /// @brief The negate of x and y.
        /// @return T The object.
        T &negate();

        /// @brief The average of x and y and b2.
        /// @param b2 The second vector.
        /// @return T The object.
        T &avg(const T &b2);

        /// @brief The average of x and y and a value.
        /// @param b2 The value to compare.
        /// @return T The object.
        T &avg(const double &b2);

        /// @brief Clamps x and y between min and max.
        /// @param min The minimum value.
        /// @param max The maximum value.
        /// @return T The object.
        T &clamp(const T &min, const T &max);

        /// @brief Clamps x and y between min and max.
        /// @param min The minimum value.
        /// @param max The maximum value.
        /// @return T The object. 
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