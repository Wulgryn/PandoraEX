#ifndef BASE2D_UTILS_HPP
#define BASE2D_UTILS_HPP

#include "../string.hpp"

/* ADD: descriptions
 *+ *=================================ADD===================================
 *+ * DESCRIPTION: add descriptions
 *+ *=======================================================================
 *+ */

namespace PandoraEX::Base2D
{
    struct Utils
    {
        // @brief Default constructor.
        Utils(double &val1, double &val2);

        void print() const;
        void print(const PandoraEX::String &msg) const;

        PandoraEX::String toString() const;

    private:
        double &val1, &val2;
    };
}
#endif // BASE2D_UTILS_HPP