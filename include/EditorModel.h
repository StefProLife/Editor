#pragma once

#include "IEditor.h"

class EditorModel : public IEditorModel
{
public:
    EditorModel() = default;
    void SetView(ViewEditorPtr view) override;
    void AddDocument(DocumentModelPtr document) override;
    void RemoveDocument(DocumentModelPtr document) override;
    const std::vector<DocumentModelPtr>& GetDocuments() const override;
    void SetDocuments(const std::vector<DocumentModelPtr>& vectorDocuments) override;

private:
    ViewEditorPtr _view;
    std::vector<DocumentModelPtr> _vectorDocuments;
};