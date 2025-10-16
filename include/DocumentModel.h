#pragma once

#include "IDocumentModel.h"
#include "IViewEditor.h"

class DocumentModel : public IDocumentModel
{
public:
    DocumentModel(ViewEditorPtr view);
    void AddPrimitive(GraphicPrimitivePtr primitive) override;
    void RemovePrimitive(GraphicPrimitivePtr primitive) override;
    const std::vector<GraphicPrimitivePtr>& GetPrimitives() const override;
    void SetPrimitives(const std::vector<GraphicPrimitivePtr> vectorPrimitives) override;
    const std::string& GetName() override;
    void SetName(const std::string& name) override;
    void Export() override;
    void Import(const std::string& fileName) override;

private:
    ViewEditorPtr _view;
    std::string _nameDocument = "New document";
    std::vector<GraphicPrimitivePtr> _vectorPrimitives;
};