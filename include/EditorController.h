#pragma once

#include "IEditorModel.h"

class EditorController
{
    EditorController(EditorModelePtr model);
    void CreateNewDocument(const DocumentModelPtr doc);
    void ImportDocumentFromFile(const std::string& fileName);
    void ExportDocumentToFile(const std::string& fileName);
    void CreatingGraphicalPrimitive();
    void RemovingGraphicalPrimitive();

private:
    EditorModelePtr _model;
};