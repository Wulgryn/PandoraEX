#ifndef SIZE_HPP
#define SIZE_HPP

#include "base2D/math.hpp"
#include "base2D/transform.hpp"
#include "base2D/primitives/size2D.hpp"

namespace PandoraEX
{
/* [ ] FIX: fix comments
 *& *================================FIX====================================
 *& * DESCRIPTION: fix the style of the comments, and the names from x,y to val1, val2
 *& * HINT: highlight val1 and val2 with ``
 *& *=======================================================================
 *& */

/* ADD: descriptions
 *+ *=================================ADD===================================
 *+ * DESCRIPTION: add descriptions
 *+ *=======================================================================
 *+ */

    struct Size2 : public Base2D::Size2D<Size2>, Base2D::Math<Size2>, Base2D::Transform<Size2>
    {
        Size2();
        Size2(double width_height);
        Size2(double width, double height);
    
        using Base2D::operator=;
        Size2 &operator=(const Size2 &b2);

        /// @brief Index operator.
        /// @param index The index to get. 0 for val1, 1 for val2.
        /// @return double The value at the index.
        /// @note 0 for val1, otherwise val2.
        double &operator[](const int &index);

/**=======================================================================================================================*
**                                                  REGION SIZE2 OP+
*========================================================================================================================*/
#pragma region SIZE2 OP+

        Size2 operator+(const Base2D &op);
        Size2 operator+(const double &val);

        Size2 &operator+=(const Base2D &b2);
        Size2 &operator+=(const double &b2);

        Size2 &operator++();

/**=======================================================================================================================*
 **                                           END OF REGION SIZE2 OP+
 *========================================================================================================================*/
#pragma endregion SIZE2 OP +

/**=======================================================================================================================*
 **                                                  REGION SIZE2 OP -
 *========================================================================================================================*/
#pragma region SIZE2 OP - -

        Size2 operator-(const Base2D &b2);
        Size2 operator-(const double &b2);
        Size2 operator-() const;

        Size2 &operator-=(const Base2D &b2);
        Size2 &operator-=(const double &b2);

        Size2 &operator--();

/**=======================================================================================================================*
 **                                           END OF REGION SIZE2 OP-
 *========================================================================================================================*/
#pragma endregion SIZE2 OP - -

/**=======================================================================================================================*
 **                                                  REGION SIZE2 OP *
 *========================================================================================================================*/
#pragma region SIZE2 OP*

        Size2 operator*(const Base2D &b2);
        Size2 operator*(const double &b2);

        Size2 &operator*=(const Base2D &b2);
        Size2 &operator*=(const double &b2);

/**=======================================================================================================================*
 **                                           END OF REGION SIZE2 OP*
 *========================================================================================================================*/
#pragma endregion SIZE2 OP *

/**=======================================================================================================================*
 **                                                  REGION SIZE2 OP/
 *========================================================================================================================*/
#pragma region SIZE2 OP/

        Size2 operator/(const Base2D &b2);
        Size2 operator/(const double &b2);

        Size2 &operator/=(const Base2D &b2);
        Size2 &operator/=(const double &b2);

/**=======================================================================================================================*
 **                                           END OF REGION SIZE2 OP/
 *========================================================================================================================*/
#pragma endregion SIZE2 OP /
    };
}

#endif // SIZE_HPP