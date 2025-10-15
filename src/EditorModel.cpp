#include <EditorModel.h>

EditorModel::EditorModel(ViewEditorPtr view)
    : _view(view)
{}

void EditorModel::AddDocument(DocumentModelPtr document)
{
    auto it = std::find(_vectorDocuments.cbegin(), _vectorDocuments.cend(), document);
    if (it != _vectorDocuments.cend()) return;
    _vectorDocuments.push_back(document);

    _view->Update();
}

void EditorModel::RemoveDocument(DocumentModelPtr document)
{
    auto it = std::find(_vectorDocuments.cbegin(), _vectorDocuments.cend(), document);
    if (it == _vectorDocuments.cend()) return;
    _vectorDocuments.erase(it);

    _view->Update();
}

const std::vector<DocumentModelPtr>& EditorModel::GetDocuments() const
{
    return _vectorDocuments;
}

void EditorModel::SetDocuments(const std::vector<DocumentModelPtr>& vectorDocument)
{
   _vectorDocuments = vectorDocument;
   _view->Update();
}