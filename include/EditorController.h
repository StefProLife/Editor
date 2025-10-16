#pragma once

#include "IEditorModel.h"
#include "IViewEditor.h"
#include "GraphicRenderType.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Line.h"

class EditorController
{
public:
    EditorController(EditorModelPtr model, ViewEditorPtr view);
    void CreateNewDocument();
    void ImportDocumentFromFile(const std::string& fileName);
    void ExportDocumentToFile(const std::string& fileName);
    void CreatingGraphicalPrimitive(GraphicRenderType type, GraphicRender render, GraphicColor color, uint64_t id);
    void RemovingGraphicalPrimitive(uint64_t id);

private:
    EditorModelPtr _model;
    // Используется для инициализации ModelDocumnt.
    ViewEditorPtr _view;
};