#pragma once

#include <vector>
#include <IDocumentModel.h>

class IEditorModel
{
public:
    virtual ~IEditorModel() = default;
    virtual void AddDocument(DocumentPtr document) = 0;
    virtual void RemoveDocument(DocumentPtr document) = 0;
    virtual std::vector<DocumentPtr> GetDocuments() const = 0;
    virtual void SetDocuments(const std::vector<DocumentPtr> vectorDocuments) = 0;
    bool operator ==(const IEditorModel& other) const
    {
        this == &other;
    }
};