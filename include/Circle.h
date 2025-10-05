#pragma once

#include <string>
#include "GraphicPrimitive.h"

class Circle : public GraphicPrimitive
{
public:
    void Draw() override;

private:
    std::string _circle = "Drawing a circle";
};