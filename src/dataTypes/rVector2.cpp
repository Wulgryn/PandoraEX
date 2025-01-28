#include "rVector2.hpp"

using namespace PandoraEX;

RVector2::RVector2() : RVector2(0,0) {}

RVector2::RVector2(double xy) : RVector2(xy, xy) {}

RVector2::RVector2(double x, double y) : Vector2D<RVector2>()
{
    this->x = x;
    this->y = y;
}

double RVector2::getX()
{
    return x;
}

double RVector2::getY()
{
    return y;
}

double RVector2::operator[](const int &index)
{
    return index == 0 ? x : y;
}

Vector2 RVector2::toVector2()
{
    return Vector2(x, y);
}