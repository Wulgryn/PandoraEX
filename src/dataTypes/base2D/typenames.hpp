#ifndef BASE2D_TYPENAMES_HPP
#define BASE2D_TYPENAMES_HPP

#include "base2D.hpp"
#include "math.hpp"
#include "planeGeometryMath.hpp"
#include "utils.hpp"
#include "transform.hpp"

#include "primitives/size2D.hpp"

#include "../dataTypes2D.hpp"

//template struct PandoraEX::Base2D<PandoraEX::Vector2>;
template struct PandoraEX::Base2D::Base2D<PandoraEX::Size2>;
template struct PandoraEX::Base2D::Base2D<PandoraEX::RSize2>;
//template struct PandoraEX::Base2D<PandoraEX::Point2>;

template struct PandoraEX::Base2D::Math<PandoraEX::Size2>;

template struct PandoraEX::Base2D::Transform<PandoraEX::Size2>;

template struct PandoraEX::Base2D::Size2D<PandoraEX::Size2>;
template struct PandoraEX::Base2D::Size2D<PandoraEX::RSize2>;

#endif // BASE2D_TYPENAMES_HPP