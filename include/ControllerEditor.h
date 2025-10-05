#pragma once

class IModelEditor;
class IViewEditor;

class ControllerEditor
{
public:
    ControllerEditor(IModelEditor* model, IViewEditor view)
        : _model(model), _view(view)
    {}

private:
    IModelEditor* _model = nullptr;
    IViewEditor* _view = nullptr;
};
