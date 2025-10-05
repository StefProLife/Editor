#include <EditorModel.h>

void EditorModel::AddDocument(DocumentModelPtr document)
{
    auto it = std::find(_vectorDocuments.cbegin(), _vectorDocuments.cend(), document);
    if (it != _vectorDocuments.cend()) return;
    _vectorDocuments.push_back(document);
}

void EditorModel::RemoveDocument(DocumentModelPtr document)
{
    auto it = std::find(_vectorDocuments.cbegin(), _vectorDocuments.cend(), document);
    if (it == _vectorDocuments.cend()) return;
    _vectorDocuments.erase(it);
}

std::vector<DocumentModelPtr> EditorModel::GetDocuments() const
{
    return static_cast<const std::vector<DocumentModelPtr>>(_vectorDocuments);
}

void EditorModel::SetDocuments(const std::vector<DocumentModelPtr> vectorDocument)
{
   _vectorDocuments = vectorDocument;
}