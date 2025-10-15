#pragma once

#include "IEditorModel.h"

class EditorController
{
    EditorController(EditorModelPtr model);
    void CreateNewDocument();
    void ImportDocumentFromFile(const std::string& fileName);
    void ExportDocumentToFile(const std::string& fileName);
    void CreatingGraphicalPrimitive();
    void RemovingGraphicalPrimitive();

private:
    EditorModelPtr _model;
};