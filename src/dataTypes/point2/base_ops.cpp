#include "../point2.hpp"

using namespace PandoraEX;

Point2 &Point2::operator=(const Point2 &b2)
{
    x = b2.x;
    y = b2.y;
    return *this;
}

double &Point2::operator[](const int &index)
{
    return index == 0 ? x : y;
}