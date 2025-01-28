#include "../vector2.hpp"

using namespace PandoraEX;

Vector2 Vector2::operator+(const double& val) const
{
    return Vector2(x + val, y + val);
}

Vector2 &Vector2::operator+=(const double& b2)
{
    x += b2;
    y += b2;
    return *this;
}

Vector2 &Vector2::operator++()
{
    ++x;
    ++y;
    return *this;
}

Vector2 &Vector2::operator++(int)
{
    x++;
    y++;
    return *this;
}

