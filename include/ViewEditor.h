#pragma once

#include "IViewEditor.h"

class ViewEditor : public IViewEditor
{
public:
    ViewEditor() = default;
    void SetModel(EditorModelPtr model) override;
    void Update() override;

private:
    EditorModelPtr _model;
};