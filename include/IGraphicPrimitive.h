#pragma once

#include <memory>
#include "GraphicColor.h"
#include "GraphicRender.h"

class IGraphicPrimitive
{
public:
    virtual ~IGraphicPrimitive() = default;
    virtual void Draw() = 0;

    virtual GraphicColor GetColor() = 0;
    virtual void SetColor(GraphicColor color) = 0;

    virtual GraphicRender GetRender() = 0;
    virtual void SetRender(GraphicRender render) = 0;
};

using GraphicPrimitivePtr = std::shared_ptr<IGraphicPrimitive>;
