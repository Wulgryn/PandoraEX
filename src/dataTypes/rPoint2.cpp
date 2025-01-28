#include "rPoint2.hpp"

using namespace PandoraEX;

RPoint2::RPoint2(double x, double y) : Point2D()
{
    this->x = x;
    this->y = y;
}

RPoint2::RPoint2(double xy) : RPoint2(xy, xy) {}

RPoint2::RPoint2() : RPoint2(0, 0) {}

double RPoint2::getX()
{
    return x;
}

double RPoint2::getY()
{
    return y;
}

double RPoint2::operator[](const int &index)
{
    return index == 0 ? x : y;
}

Point2 RPoint2::toPoint2()
{
    return Point2(x, y);
}