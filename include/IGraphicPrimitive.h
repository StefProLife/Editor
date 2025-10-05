#pragma once

#include "GraphicColor.h"
#include "GraphicRender.h"

class IGraphicPrimitive
{
public:
    virtual ~IGraphicPrimitive() = default;
    virtual void Draw() = 0;

    virtual const GraphicColor GetColor() = 0;
    virtual void SetColor(const GraphicColor color) = 0;

    virtual const GraphicRender GetDept() = 0;
    virtual void SetDept(const GraphicRender type) = 0;
};