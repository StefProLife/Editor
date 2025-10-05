#pragma once

#include "IViewEditor.h"

class ViewEditor : public IViewEditor
{
public:
    void CreateNewDocument() override;
    void ImportDocumentFromFile() override;
    void ExportDocumentInFile() override;
    void CreateGraphicPrimitive() override;
    void DeleteGraphicPrimitive() override;
};