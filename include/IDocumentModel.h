#pragma once

#include <vector>
#include "IGraphicPrimitive.h"

class IDocumentModel
{
public:
    virtual ~IDocumentModel() = default;
    virtual void AddPrimitive(GraphicPrimitivePtr primitive) = 0;
    virtual void RemovePrimitive(GraphicPrimitivePtr primitive) = 0;
    virtual std::vector<GraphicPrimitivePtr> GetPrimitives() const = 0;
    virtual void SetPrimitives(const std::vector<GraphicPrimitivePtr> vectorPrimitive) = 0;
};