#ifndef BASE2D_MATH_HPP
#define BASE2D_MATH_HPP

/* [ ] FIX: fix comments
 *& *================================FIX====================================
 *& * DESCRIPTION: fix the style of the comments, and the names from x,y to val1, val2
 *& * HINT: highlight val1 and val2 with ``
 *& *=======================================================================
 *& */

namespace PandoraEX::Base2D
{
    template <class T>
    struct Math
    {
        Math(double &val1, double &val2);

        /// @brief The minimum of two values.
        /// @param b2 The second vector.
        /// @return T The object.
        /// @note `val1 = min(val1, b2.val1)`
        /// @note `val2 = min(y, b2.val2)`
        T &min(const T &b2);

        /// @brief The minimum of val1, val2 and a value.
        /// @param b2 The value to compare.
        /// @return T The object.
        /// @note val1 = min(val1, b2)
        /// @note val2 = min(val2, b2)
        T &min(const double &b2);

        /// @brief The maximum of two values.
        /// @param b2 The second vector.
        /// @return T The object.
        /// @note val1 = max(val1, b2.val2)
        /// @note val2 = max(val2, b2.val2)
        T &max(const T &b2);

        /// @brief The maximum of val1, val2 and a value.
        /// @param b2 The value to compare.
        /// @return T The object.
        /// @note val1 = max(val1, b2)
        /// @note val2 = max(val2, b2)
        T &max(const double &b2);

        /// @brief The absolute of val1 and val2.
        /// @return T The object.
        T &abs();

        /// @brief The ceiling of val1 and val2.
        /// @return T The object.
        T &ceil();

        /// @brief The floor of `val1` and val2.
        /// @return T The object.
        T &floor();

        /// @brief The round of x and y.
        /// @return T The object.
        T &round();

        /// @brief The inverse of x and y.
        /// @return T The object.
        T &invert();

        /// @brief The reciprocal of val1 and val2.
        /// @return T The object.
        T &reciprocal();

        /// @brief The negate of val1 and val2 with bitwise.
        /// @return T The object.
        /// @warning This is a bitwise operation with double, return value might be NaN;
        T &negate();

        /// @brief The bits of val1 and val2.
        /// @param index The selected value: 0 for val1, 1 for val2.
        /// @return __UINT64_C The bits of the selected value.
        __UINT64_TYPE__ bits(int index) const;

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

    private:
        double &val1, &val2;
    };
}

#endif // BASE2D_MATH_HPP