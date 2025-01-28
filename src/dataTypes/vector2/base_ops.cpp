#include "../vector2.hpp"

using namespace PandoraEX;

Vector2 &Vector2::operator=(const Vector2 &v)
{
    x = v.x;
    y = v.y;
    return *this;
}

double &Vector2::operator[](const int &index)
{
    return index == 0 ? x : y;
}