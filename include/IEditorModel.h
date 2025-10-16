#pragma once

#include <vector>
#include "IViewEditor.h"
#include "IDocumentModel.h"

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

using EditorModelPtr = std::shared_ptr<IEditorModel>;