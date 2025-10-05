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
    virtual std::vector<GraphicPrimitivePtr> GetPrimitives() const = 0;
    virtual void SetPrimitives(const std::vector<GraphicPrimitivePtr> vectorPrimitives) = 0;
    virtual const std::string GetNameDocument();
    virtual void SetNameDocument(const std::string name);
    virtual const std::string DefaultNameWithCreate();
    bool operator ==(const IDocumentModel& other) const
    {
        this == &other;
    }
};

using DocumentModelPtr = std::shared_ptr<IDocumentModel>;