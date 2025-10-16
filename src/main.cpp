#include <iostream>
#include "ViewEditor.h"
#include "EditorModel.h"
#include "DocumentModel.h"
#include "EditorController.h"

int main(int argc, char const* argv[])
{
    EditorModelPtr model = std::make_shared<EditorModel>();
    ViewEditorPtr view = std::make_shared<ViewEditor>();
    view->SetModel(model);
    model->SetView(view);

    EditorController controller(model, view);

    controller.CreateNewDocument();
    controller.CreatingGraphicalPrimitive("New document", GraphicRenderType::circle, GraphicRender::Dotted, GraphicColor::Blue, 32/*id*/);
    controller.ExportDocumentToFile("New document");
    controller.RemovingGraphicalPrimitive(32/*id*/);
    controller.ImportDocumentFromFile("Old document");

    return 0;
}