#pragma once

#include <vector>
#include <IDocumentModel.h>

class IEditorModel
{
public:
    virtual ~IEditorModel() = default;
    virtual void AddDocument(const DocumentModelPtr document) = 0;
    virtual void RemoveDocument(const DocumentModelPtr document) = 0;
    virtual const std::vector<DocumentModelPtr>& GetDocuments() const = 0;
    virtual void SetDocuments(const std::vector<DocumentModelPtr>& vectorDocuments) = 0;
    bool operator ==(const IEditorModel& other) const
    {
        this == &other;
    }
};

using EditorModelePtr = std::shared_ptr<IEditorModel>;