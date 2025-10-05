#pragma once

#include "IDocumentModel.h"

class DocumentModel : IDocumentModel
{
public:
    void AddPrimitive(GraphicPrimitivePtr primitive) override;
    void RemovePrimitive(GraphicPrimitivePtr primitive) override;
    std::vector<GraphicPrimitivePtr> GetPrimitives() const override;
    void SetPrimitives(const std::vector<GraphicPrimitivePtr> vectorPrimitives) override;
    const std::string GetNameDocument();
    void SetNameDocument(const std::string name);
    virtual const std::string DefaultNameWithCreate();

private:
    const std::string _defaultName = "New file";
    std::string _nameDocument = _defaultName;
    std::vector<GraphicPrimitivePtr> _vectorPrimitives;
};