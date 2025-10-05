#include "GraphicPrimitive.h"

const GraphicColor GraphicPrimitive::GetColor()
{
    return static_cast<const GraphicColor>(_color);
}

void GraphicPrimitive::SetColor(const GraphicColor color)
{
    _color = color;
}

const GraphicRender GraphicPrimitive::GetRender()
{
    return static_cast<GraphicRender>(_render);
}

void GraphicPrimitive::SetRender(const GraphicRender render)
{
    _render = render;
}