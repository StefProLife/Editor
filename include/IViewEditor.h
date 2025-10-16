#pragma once

#include "IEditorModel.h"

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

using ViewEditorPtr = std::shared_ptr<IViewEditor>;