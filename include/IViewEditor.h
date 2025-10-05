#pragma once

class IViewEditor
{
public:
    virtual ~IViewEditor() = default;
    virtual void CreateNewDocument() = 0;
    virtual void ImportDocumentFromFile() = 0;
    virtual void ExportDocumentInFile() = 0;
    virtual void CreateGraphicPrimitive() = 0;
    virtual void DeleteGraphicPrimitive() = 0;
};