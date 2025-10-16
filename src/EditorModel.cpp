#include <EditorModel.h>

void EditorModel::SetView(ViewEditorPtr view)
{
    _view = view;
}

void EditorModel::AddDocument(DocumentModelPtr document)
{   for(const auto& item : _vectorDocuments)
        if (item == document) return;

    _vectorDocuments.push_back(document);
    _view->Update();
}

void EditorModel::RemoveDocument(DocumentModelPtr document)
{
    // TODO Логика удаления документа из списка.
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