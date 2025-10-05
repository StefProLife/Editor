#include <EditorModel.h>

void EditorModel::AddDocument(DocumentPtr document)
{
    auto it = std::find(_vectorDocuments.cbegin(), _vectorDocuments.cend(), document);
    if (it != _vectorDocuments.cend()) return;
    _vectorDocuments.push_back(document);
}

void EditorModel::RemoveDocument(DocumentPtr document)
{
    auto it = std::find(_vectorDocuments.cbegin(), _vectorDocuments.cend(), document);
    if (it == _vectorDocuments.cend()) return;
    _vectorDocuments.erase(it);
}

std::vector<DocumentPtr> EditorModel::GetDocuments() const
{
    return static_cast<const std::vector<DocumentPtr>>(_vectorDocuments);
}

void EditorModel::SetDocuments(const std::vector<DocumentPtr> vectorDocument)
{
   _vectorDocuments = vectorDocument;
}