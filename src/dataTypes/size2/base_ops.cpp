#include "../size2.hpp"

using namespace PandoraEX;

Size2 &Size2::operator=(const Base2D &b2)
{
    width = b2.getVal1();
    height = b2.getVal2();
    return *this;
}

Size2 &Size2::operator=(const double &b2)
{
    width = height = b2;
    return *this;
}

double &Size2::operator[](const int &index)
{
    return index == 0 ? width : height;
}
