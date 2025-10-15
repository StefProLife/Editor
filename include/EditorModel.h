#pragma once

#include "IEditorModel.h"
#include "IViewEditor.h"

class EditorModel : public IEditorModel
{
public:
    EditorModel(ViewEditorPtr view);
    void AddDocument(DocumentModelPtr document) override;
    void RemoveDocument(DocumentModelPtr document) override;
    const std::vector<DocumentModelPtr>& GetDocuments() const override;
    void SetDocuments(const std::vector<DocumentModelPtr>& vectorDocuments) override;

private:
    ViewEditorPtr _view;
    std::vector<DocumentModelPtr> _vectorDocuments;
};