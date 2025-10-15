#pragma once

#include "IViewEditor.h"

class ViewEditor : public IViewEditor
{
public:
    ViewEditor(EditorModelPtr model);
    void Update() override;

private:
    EditorModelPtr _model;
};