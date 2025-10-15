#include <iostream>
#include "ViewEditor.h"

ViewEditor::ViewEditor(EditorModelPtr model)
    : _model(model)
{}

void ViewEditor::Update()
{
    std::cout << "Update UI. It is necessary to implement pulls of data from the model." << std::endl;;
}