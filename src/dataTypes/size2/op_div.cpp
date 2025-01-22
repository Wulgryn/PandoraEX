#include "../size2.hpp"

using namespace PandoraEX;

Size2 Size2::operator/(const Base2D &b2)
{
    return Size2(width / b2.getVal1(), height / b2.getVal2());
}

Size2 Size2::operator/(const double &b2)
{
    return Size2(width / b2, height / b2);
}

Size2 &Size2::operator/=(const Base2D &b2)
{
    width /= b2.getVal1();
    height /= b2.getVal2();
    return *this;
}

Size2 &Size2::operator/=(const double &b2)
{
    width /= b2;
    height /= b2;
    return *this;
}