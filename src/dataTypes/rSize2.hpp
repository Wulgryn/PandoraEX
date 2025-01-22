#ifndef RSIZE2_HPP
#define RSIZE2_HPP

#include "base2D/primitives/size2D.hpp"
#include "size2.hpp"
#include "base2D/base2D.hpp"

namespace PandoraEX
{
    // @brief Read-only size 2D
    struct RSize2 : public Base2D::Size2D<RSize2>
    {
        RSize2();
        RSize2(double width_height);
        RSize2(double width, double height);
        double getWidth();
        double getHeight();

        /// @brief Index operator.
        /// @param index The index to get. 0 for val1, 1 for val2.
        /// @return double The value at the index.
        /// @note 0 for val1, otherwise val2.
        double operator[](const int &index);

        Size2 toSize2();

        RSize2 set(double &val1, double &val2) = delete;
    };
}

#endif // RSIZE2_HPP