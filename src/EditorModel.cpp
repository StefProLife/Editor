#include <EditorModel.h>

void EditorModel::AddDocument(const DocumentModelPtr document)
{
    auto it = std::find(_vectorDocuments.cbegin(), _vectorDocuments.cend(), document);
    if (it != _vectorDocuments.cend()) return;
    _vectorDocuments.push_back(document);
}

void EditorModel::RemoveDocument(const DocumentModelPtr document)
{
    auto it = std::find(_vectorDocuments.cbegin(), _vectorDocuments.cend(), document);
    if (it == _vectorDocuments.cend()) return;
    _vectorDocuments.erase(it);
}

const std::vector<DocumentModelPtr>& EditorModel::GetDocuments() const
{
    return _vectorDocuments;
}

void EditorModel::SetDocuments(const std::vector<DocumentModelPtr>& vectorDocument)
{
   _vectorDocuments = vectorDocument;
}