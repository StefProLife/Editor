#pragma once

#include <vector>
#include "IDocumentModel.h"

class IEditorModel;
class IViewEditor;

using EditorModelPtr = std::shared_ptr<IEditorModel>;
using ViewEditorPtr = std::shared_ptr<IViewEditor>;

class IViewEditor
{
public:
    virtual ~IViewEditor() = default;
    virtual void SetModel(EditorModelPtr model) = 0;
    virtual void Update() = 0;
    bool operator ==(const IViewEditor& other) const
    {
        return this == &other;
    }
};

class IEditorModel
{
public:
    virtual ~IEditorModel() = default;
    virtual void SetView(ViewEditorPtr view) = 0;
    virtual void AddDocument(DocumentModelPtr document) = 0;
    virtual void RemoveDocument(DocumentModelPtr document) = 0;
    virtual const std::vector<DocumentModelPtr>& GetDocuments() const = 0;
    virtual void SetDocuments(const std::vector<DocumentModelPtr>& vectorDocuments) = 0;
    bool operator ==(const IEditorModel& other) const
    {
        return this == &other;
    }
};
