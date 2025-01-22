#include "rSize2.hpp"

using namespace PandoraEX;

RSize2::RSize2(double width, double height) : Size2D()
{
    this->width = width;
    this->height = height;
}

RSize2::RSize2(double width_height) : RSize2(width_height, width_height)
{
}

RSize2::RSize2() : RSize2(0, 0)
{
}

double RSize2::getWidth()
{
    return width;
}

double RSize2::getHeight()
{
    return height;
}

double RSize2::operator[](const int &index)
{
    return index == 0 ? width : height;
}

Size2 RSize2::toSize2()
{
    return Size2(width, height);
}