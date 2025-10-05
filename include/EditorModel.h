#pragma once

#include "IEditorModel.h"

class EditorModel : IEditorModel
{
public:
    void AddDocument(DocumentPtr document) override;
    void RemoveDocument(DocumentPtr document) override;
    std::vector<DocumentPtr> GetDocuments() const override;
    void SetDocuments(const std::vector<DocumentPtr> vectorDocuments) override;

private:
    std::vector<DocumentPtr> _vectorDocuments;
};