#include "GraphicPrimitive.h"

GraphicColor GraphicPrimitive::GetColor()
{
    return static_cast<const GraphicColor>(_color);
}

void GraphicPrimitive::SetColor(GraphicColor color)
{
    _color = color;
}

GraphicRender GraphicPrimitive::GetRender()
{
    return static_cast<GraphicRender>(_render);
}

void GraphicPrimitive::SetRender(GraphicRender render)
{
    _render = render;
}