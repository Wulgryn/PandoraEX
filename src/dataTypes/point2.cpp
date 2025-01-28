#include "point2.hpp"

using namespace PandoraEX;

Point2::Point2() : Math<Point2>(x, y), Transform<Point2>(x, y) {}

Point2::Point2(double xy) : Point2() { x = y = xy; }

Point2::Point2(double x, double y) : Point2()
{
    this->x = x;
    this->y = y;
}