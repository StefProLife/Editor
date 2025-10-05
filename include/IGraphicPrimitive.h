#pragma once

#include <memory>
#include "GraphicColor.h"
#include "GraphicRender.h"

class IGraphicPrimitive
{
public:
    virtual ~IGraphicPrimitive() = default;
    virtual void Draw() = 0;

    virtual const GraphicColor GetColor() = 0;
    virtual void SetColor(const GraphicColor color) = 0;

    virtual const GraphicRender GetRender() = 0;
    virtual void SetRender(const GraphicRender render) = 0;
};

using GraphicPrimitivePtr = std::shared_ptr<IGraphicPrimitive>;
