#include "utils.hpp"
#include "typenames.hpp"

#include <iostream>
using namespace std;

using namespace PandoraEX;
using namespace PandoraEX::Base2D;

Utils::Utils(double &val1, double&val2) : val1(val1), val2(val2)
{
    
}

void Utils::print() const
{
    std::cout << "x: " << val1 << ", y: " << val2 << std::endl;
}

void Utils::print(const String &msg) const
{
    /* ADD: reference to values
     *+ *=================================ADD===================================
     *+ * DESCRIPTION: example print("this is my X: {val1}, and this is my Y: {val2}"), or {0},{1}... as in C#
     *+ *=======================================================================
     *+ */
    std::cout << msg << " x: " << val1 << ", y: " << val2 << std::endl;
}

String Utils::toString() const
{
    return "x: " + std::to_string(val1) + ", y: " + std::to_string(val2);
}