#pragma once

#include "IEditor.h"

#include "GraphicRenderType.h"
#include "GraphicRender.h"
#include "GraphicColor.h"

class EditorController
{
public:
    EditorController(EditorModelPtr model, ViewEditorPtr view);
    void CreateNewDocument();
    void ImportDocumentFromFile(const std::string& fileName);
    void ExportDocumentToFile(const std::string& fileName);
    void CreatingGraphicalPrimitive(const std::string& nameDoc, GraphicRenderType type, GraphicRender render, GraphicColor color, uint64_t id);
    void RemovingGraphicalPrimitive(uint64_t id);

private:
    EditorModelPtr _model;
    // Используется только для инициализации ModelDocumnt.
    ViewEditorPtr _view;
};