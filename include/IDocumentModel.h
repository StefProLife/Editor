#pragma once

#include <string>
#include <vector>
#include <memory>
#include "IGraphicPrimitive.h"

class IDocumentModel
{
public:
    virtual ~IDocumentModel() = default;
    virtual void AddPrimitive(const GraphicPrimitivePtr primitive) = 0;
    virtual void RemovePrimitive(const GraphicPrimitivePtr primitive) = 0;
    virtual const std::vector<GraphicPrimitivePtr>& GetPrimitives() const = 0;
    virtual void SetPrimitives(const std::vector<GraphicPrimitivePtr> vectorPrimitives) = 0;
    virtual const std::string& GetName();
    virtual void SetName(const std::string& name);
    virtual void Export();
    virtual void Import();
    bool operator ==(const IDocumentModel& other) const
    {
        this == &other;
    }
};

using DocumentModelPtr = std::shared_ptr<IDocumentModel>;