#pragma once

#include <string>
#include "GraphicPrimitive.h"

class Rectangle : public GraphicPrimitive
{
public:
    void Draw() override;

private:
    const std::string _rectangle = "Drawing a rectangle";
};