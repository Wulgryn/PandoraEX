#ifndef BASE2D_PRIMITIVES_POINT2D
#define BASE2D_PRIMITIVES_POINT2D

#include "../base2D.hpp"
#include "../utils.hpp"

namespace PandoraEX::Base2D
{
    template <class T>
    struct Point2D : Base2D<T>, Utils
    {
        double x = 0, y = 0;
        Point2D() : Base2D<T>(x, y), Utils(x, y) {}

        template <class U>
        bool operator==(const U &b2) const
        {
            return x == b2.x && y == b2.y;
        }

        bool operator==(const double &b2) const
        {
            return x == b2 && y == b2;
        }

        template <class U>
        bool operator!=(const U &b2) const
        {
            return x != b2.x || y != b2.y;
        }

        bool operator!=(const double &b2) const
        {
            return x != b2 || y != b2;
        }

        template <class U>
        bool operator>(const U &b2) const
        {
            /* REVIEW: calculation of the comparison
             *$ *===============================REVIEW==================================
             *$ * WHY: Other
             *$ * DESCRIPTION: My be better if it returns the distance from the 'O' point, and with includind negative value calculations
             *$ *=======================================================================
             *$ */
            return x > b2.x && y > b2.y;
        }

        bool operator>(const double &b2) const
        {
            return x > b2 && y > b2;
        }

        template <class U>
        bool operator<(const U &b2) const
        {
            return x < b2.x && y < b2.y;
        }

        bool operator<(const double &b2) const
        {
            return x < b2 && y < b2;
        }

        template <class U>
        bool operator>=(const U &b2) const
        {
            return x >= b2.x && y >= b2.y;
        }

        bool operator>=(const double &b2) const
        {
            return x >= b2 && y >= b2;
        }

        template <class U>
        bool operator<=(const U &b2) const
        {
            return x <= b2.x && y <= b2.y;
        }

        bool operator<=(const double &b2) const
        {
            return x <= b2 && y <= b2;
        }

        bool operator!() const
        {
            return !x && !y;
        }

        template <class U>
        bool operator&&(const U &b2) const
        {
            return x && y && b2.x && b2.y;
        }

        bool operator&&(const double &b2) const
        {
            return x && y && b2;
        }

        template <class U>
        bool operator||(const U &b2) const
        {
            return x || y || b2.x || b2.y;
        }

        bool operator||(const double &b2) const
        {
            return x || y || b2;
        }
    };


};

#endif // BASE2D_PRIMITIVES_POINT2D