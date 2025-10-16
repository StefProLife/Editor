#pragma once

#include "IEditor.h"

class ViewEditor : public IViewEditor
{
public:
    void SetModel(EditorModelPtr model) override;
    void Update() override;

private:
    EditorModelPtr _model;
};