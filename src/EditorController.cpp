#include "EditorController.h"
#include "DocumentModel.h"

EditorController::EditorController(EditorModelPtr model)
    : _model(model)
{}

void EditorController::CreateNewDocument()
{
    // По-хорошему логика создания "некоторого конкретного" DocumentModel
    const auto doc = std::make_shared<DocumentModel>();
    _model->AddDocument(doc);
}

void EditorController::ImportDocumentFromFile(const std::string& fileName)
{
    const auto doc = std::make_shared<DocumentModel>();
    doc->SetName(fileName);
    doc->Import(fileName);
    _model->AddDocument(doc);
}

void EditorController::ExportDocumentToFile(const std::string& fileName)
{
    auto docs = _model->GetDocuments();
    if (docs.size() == 0) return;
    auto it = std::find_if(docs.begin(),
                           docs.end(),
                           [&fileName](const DocumentModelPtr p)
                           {
                                if (!p) return false;
                                return (p->GetName() == fileName);
                          });
    if (it != docs.end())
        (*it)->Export();
}

void EditorController::CreatingGraphicalPrimitive()
{

}

void EditorController::RemovingGraphicalPrimitive()
{

}