#include "../vector2.hpp"

using namespace PandoraEX;

Vector2 Vector2::operator-(const double& val) const {
    return Vector2(x - val, y - val);
}

Vector2 Vector2::operator-() const {
    return Vector2(-x, -y);
}

Vector2 &Vector2::operator-=(const double& val) {
    x -= val;
    y -= val;
    return *this;
}

Vector2 &Vector2::operator--() {
    --x;
    --y;
    return *this;
}

Vector2 &Vector2::operator--(int) {
    x--;
    y--;
    return *this;
}