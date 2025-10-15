#include "EditorController.h"
#include "DocumentModel.h"

EditorController::EditorController(EditorModelPtr model)
    : _model(model)
{}

void EditorController::CreateNewDocument()
{
    //auto doc = std::make_shared<IDocumentModel>(new DocumentModel());
    //_model->AddDocument(doc);
}

void EditorController::ImportDocumentFromFile(const std::string& fileName)
{
}

void EditorController::ExportDocumentToFile(const std::string& fileName)
{
    auto docs = _model->GetDocuments();
    if (docs.size() == 0) return;
    for (const auto& item : docs)
    {
        if (item->GetName() == fileName)
            item->Import();
    }
}

void EditorController::CreatingGraphicalPrimitive()
{

}

void EditorController::RemovingGraphicalPrimitive()
{

}