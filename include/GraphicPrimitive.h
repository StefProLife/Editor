#pragma once

#include "IGraphicPrimitive.h"

class GraphicPrimitive : public IGraphicPrimitive
{
public:
    virtual void Draw() override = 0;

    GraphicColor GetColor() override;
    void SetColor(GraphicColor color) override;

    GraphicRender GetRender() override;
    void SetRender(GraphicRender render) override;

private:
    GraphicColor _color = GraphicColor::Blue;
    GraphicRender _render = GraphicRender::Solid;
};