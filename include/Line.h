#pragma once

#include <string>
#include "GraphicPrimitive.h"


class Line : public GraphicPrimitive
{
public:
    void Draw() override;

private:
    const std::string _line = "Drawing a line";
};