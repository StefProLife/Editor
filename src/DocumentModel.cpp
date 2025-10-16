#include <iostream>
#include "DocumentModel.h"

DocumentModel::DocumentModel(ViewEditorPtr view)
    : _view(view)
{}

void DocumentModel::AddPrimitive(GraphicPrimitivePtr primitive)
{
    auto it = std::find(_vectorPrimitives.cbegin(), _vectorPrimitives.cend(), primitive);
    if (it != _vectorPrimitives.cend()) return;
    _vectorPrimitives.push_back(primitive);

    _view->Update();
}

void DocumentModel::RemovePrimitive(GraphicPrimitivePtr primitive)
{
    auto it = std::find(_vectorPrimitives.cbegin(), _vectorPrimitives.cend(), primitive);
    if (it == _vectorPrimitives.cend()) return;
    _vectorPrimitives.erase(it);

    _view->Update();
}

const std::vector<GraphicPrimitivePtr>& DocumentModel::GetPrimitives() const
{
    return _vectorPrimitives;
}

void DocumentModel::SetPrimitives(const std::vector<GraphicPrimitivePtr> vectorPrimitives)
{
    _vectorPrimitives = vectorPrimitives;
    _view->Update();
}

const std::string& DocumentModel::GetName()
{
    return _nameDocument;
}

void DocumentModel::SetName(const std::string& name)
{
    _nameDocument = name;
    _view->Update();
}

void DocumentModel::Export()
{
    std::cout << "Model | " << _nameDocument << " | Export document" << std::endl;
    // Запись в файл из вектора примитивов...
    _view->Update();
}

void DocumentModel::Import(const std::string& fileName)
{
    std::cout << "Model | " << _nameDocument << " | import Import" << std::endl;
    // Запись в вектор примитивов из файла...
    _view->Update();
}