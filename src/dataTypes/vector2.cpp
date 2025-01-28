#include "vector2.hpp"

using namespace PandoraEX;

Vector2::Vector2() : Math<Vector2>(x, y), Transform<Vector2>(x, y) {}

Vector2::Vector2(double xy) : Vector2() { x = y = xy; }

Vector2::Vector2(double x, double y) : Vector2()
{
    this->x = x;
    this->y = y;
}