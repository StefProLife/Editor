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

    EditorController Controller(model, view);

    return 0;
}