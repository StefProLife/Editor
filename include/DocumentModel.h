#pragma once

#include "IDocumentModel.h"

class DocumentModel : IDocumentModel
{
public:
    void AddPrimitive(GraphicPrimitivePtr primitive) override;
    void RemovePrimitive(GraphicPrimitivePtr primitive) override;
    const std::vector<GraphicPrimitivePtr>& GetPrimitives() const override;
    void SetPrimitives(const std::vector<GraphicPrimitivePtr> vectorPrimitives) override;
    const std::string& GetName() override;
    void SetName(const std::string& name) override;
    void Export() override;
    void Import() override;

private:
    std::string _nameDocument = "New document";
    std::vector<GraphicPrimitivePtr> _vectorPrimitives;
};