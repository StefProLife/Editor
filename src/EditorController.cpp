#include "EditorController.h"
#include "DocumentModel.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Line.h"

EditorController::EditorController(EditorModelPtr model, ViewEditorPtr view)
    : _model(model), _view(view)
{}

void EditorController::CreateNewDocument()
{
    // По-хорошему логика создания "некоторого конкретного" DocumentModel
    const auto doc = std::make_shared<DocumentModel>(_view);
    _model->AddDocument(doc);
}

void EditorController::ImportDocumentFromFile(const std::string& fileName)
{
    const auto doc = std::make_shared<DocumentModel>(_view);
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

void EditorController::CreatingGraphicalPrimitive(const std::string& nameDoc, GraphicRenderType type, GraphicRender render, GraphicColor color, uint64_t id)
{
    IGraphicPrimitive* pIGraphicPrimitive;
    switch (type)
    {
        case GraphicRenderType::circle:
            pIGraphicPrimitive = new Circle();
            break;
        case GraphicRenderType::rectangle:
            pIGraphicPrimitive = new Rectangle();
            break;
        case GraphicRenderType::line:
            pIGraphicPrimitive = new Line();
            break;
        default:
            return;
    }

    pIGraphicPrimitive->Draw();
    // Поиск и добавление в текущего(переданного) документ.
}

void EditorController::RemovingGraphicalPrimitive(uint64_t id)
{
    // Поиск и  удаление из текущего(переданного) документа.
}