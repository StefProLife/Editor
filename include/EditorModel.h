#pragma once

#include "IEditorModel.h"

class EditorModel : IEditorModel
{
public:
    void AddDocument(const DocumentModelPtr document) override;
    void RemoveDocument(const DocumentModelPtr document) override;
    const std::vector<DocumentModelPtr>& GetDocuments() const override;
    void SetDocuments(const std::vector<DocumentModelPtr>& vectorDocuments) override;

private:
    std::vector<DocumentModelPtr> _vectorDocuments;
};