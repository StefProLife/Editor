#pragma once

#include "IEditorModel.h"

class EditorModel : IEditorModel
{
public:
    void AddDocument(DocumentModelPtr document) override;
    void RemoveDocument(DocumentModelPtr document) override;
    std::vector<DocumentModelPtr> GetDocuments() const override;
    void SetDocuments(const std::vector<DocumentModelPtr> vectorDocuments) override;

private:
    std::vector<DocumentModelPtr> _vectorDocuments;
};