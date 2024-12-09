#ifndef VECTOR2_HPP
#define VECTOR2_HPP

#include "base2D/base2D_base.hpp"

namespace PandoraEX
{
    struct Vector2 : public Base2D<Vector2> {
        Vector2(double xy = 0.0) : Base2D<Vector2>(xy) {}
        Vector2(double x, double y) : Base2D<Vector2>(x, y) {}
    };
}


#endif // VECTOR2_HPP