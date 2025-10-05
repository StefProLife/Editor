#pragma once

#include "IDocumentModel.h"

class DocumentModel : IDocumentModel
{
public:
    void AddPrimitive(GraphicPrimitivePtr primitive) override;
    void RemovePrimitive(GraphicPrimitivePtr primitive) override;
    std::vector<GraphicPrimitivePtr> GetPrimitives() const override;
    void SetPrimitives(const std::vector<GraphicPrimitivePtr> vectorPrimitive) override;

private:
    std::vector<GraphicPrimitivePtr> _vectorPrimitive;
};