#ifndef RPOINT2_HPP
#define RPOINT2_HPP

#include "base2D/primitives/point2D.hpp"
#include "point2.hpp"
#include "base2D/base2D.hpp"

namespace PandoraEX
{
    struct RPoint2 : public Base2D::Point2D<RPoint2>
    {
        RPoint2();
        RPoint2(double xy);
        RPoint2(double x, double y);
        double getX();
        double getY();

        double operator[](const int &index);

        Point2 toPoint2();

        RPoint2 set(double &val1, double &val2) = delete;
    };
}

#endif // RPOINT2_HPP