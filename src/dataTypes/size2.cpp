#include "size2.hpp"

using namespace PandoraEX;
using namespace PandoraEX::Base2D;

Size2::Size2() :
Math<Size2>(width,height),
Transform<Size2>(width,height)
{
}

Size2::Size2(double width_height) : Size2()
{
    width = height = width_height;
}

Size2::Size2(double width, double height) : Size2()
{
    this->width = width;
    this->height = height;
}

Size2 &Size2::operator=(const Size2 &b2)
{
    width = b2.width;
    height = b2.height;
    return *this;
}