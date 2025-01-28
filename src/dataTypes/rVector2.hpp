#ifndef RVECTOR2_HPP
#define RVECTOR2_HPP

#include "base2D/primitives/vector2D.hpp"
#include "vector2.hpp"
#include "base2D/base2D.hpp"

namespace PandoraEX
{
    struct RVector2 : public Base2D::Vector2D<RVector2>
    {
        RVector2();
        RVector2(double xy);
        RVector2(double x, double y);
        double getX();
        double getY();

        double operator[](const int &index);

        Vector2 toVector2();

        RVector2 set(double &val1, double &val2) = delete;
    };
}

#endif // RVECTOR2_HPP