#include "../point2.hpp"

using namespace PandoraEX;

Point2 Point2::operator*(const double &b2) const
{
    return Point2(x * b2, y * b2);
}

Point2 &Point2::operator*=(const double &b2)
{
    x *= b2;
    y *= b2;
    return *this;
}

