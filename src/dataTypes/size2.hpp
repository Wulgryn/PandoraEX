#ifndef SIZE_HPP
#define SIZE_HPP

#include "base2D/base2D.hpp"

namespace PandoraEX
{
    struct Size2 : public Base2D<Size2> {
        Size2(double xy = 0.0) : Base2D<Size2>(xy) {}
        Size2(double x, double y) : Base2D<Size2>(x, y) {}
    };
}

#endif // SIZE_HPP