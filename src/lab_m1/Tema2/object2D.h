#pragma once

#include <string>

#include "core/gpu/mesh.h"
#include "utils/glm_utils.h"


namespace object2D
{

    // Create square with given bottom left corner, length and color
    Mesh* CreateTriangle(const std::string &name, glm::vec3 leftBottomCorner, float pointA, float pointB, float pointC, glm::vec3 color, bool fill = false);
}
