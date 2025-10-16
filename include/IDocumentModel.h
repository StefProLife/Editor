#pragma once

#include <string>
#include <vector>
#include <memory>

#include "IGraphicPrimitive.h"

class IDocumentModel
{
public:
    virtual ~IDocumentModel() = default;
    virtual void AddPrimitive(GraphicPrimitivePtr primitive) = 0;
    virtual void RemovePrimitive(GraphicPrimitivePtr primitive) = 0;
    virtual const std::vector<GraphicPrimitivePtr>& GetPrimitives() const = 0;
    virtual void SetPrimitives(const std::vector<GraphicPrimitivePtr> vectorPrimitives) = 0;
    virtual const std::string& GetName() = 0;
    virtual void SetName(const std::string& name) = 0;
    virtual void Export() = 0;
    virtual void Import(const std::string& fileName) = 0;
    bool operator ==(const IDocumentModel& other) const
    {
        return this == &other;
    }
};

using DocumentModelPtr = std::shared_ptr<IDocumentModel>;