#include "../point2.hpp"

using namespace PandoraEX;

Point2 Point2::operator+(const double& val) const
{
    return Point2(x + val, y + val);
}

Point2 &Point2::operator+=(const double& b2)
{
    x += b2;
    y += b2;
    return *this;
}

Point2 &Point2::operator++()
{
    ++x;
    ++y;
    return *this;
}

Point2 &Point2::operator++(int)
{
    x++;
    y++;
    return *this;
}