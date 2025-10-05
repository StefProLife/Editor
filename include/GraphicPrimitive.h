#pragma once

#include "IGraphicPrimitive.h"

class GraphicPrimitive : public IGraphicPrimitive
{
public:
    virtual void Draw() override = 0;

    const GraphicColor GetColor() override;
    void SetColor(const GraphicColor color) override;

    const GraphicRender GetRender() override;
    void SetRender(const GraphicRender render) override;

private:
    GraphicColor _color = GraphicColor::Blue;
    GraphicRender _render = GraphicRender::Solid;
};