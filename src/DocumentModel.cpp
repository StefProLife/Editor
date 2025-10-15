#include <iostream>
#include "DocumentModel.h"


void DocumentModel::AddPrimitive(GraphicPrimitivePtr primitive)
{
    auto it = std::find(_vectorPrimitives.cbegin(), _vectorPrimitives.cend(), primitive);
    if (it != _vectorPrimitives.cend()) return;
    _vectorPrimitives.push_back(primitive);
}

void DocumentModel::RemovePrimitive(GraphicPrimitivePtr primitive)
{
    auto it = std::find(_vectorPrimitives.cbegin(), _vectorPrimitives.cend(), primitive);
    if (it == _vectorPrimitives.cend()) return;
    _vectorPrimitives.erase(it);
}

const std::vector<GraphicPrimitivePtr>& DocumentModel::GetPrimitives() const
{
    return _vectorPrimitives;
}

void DocumentModel::SetPrimitives(const std::vector<GraphicPrimitivePtr> vectorPrimitives)
{
    _vectorPrimitives = vectorPrimitives;
}

const std::string& DocumentModel::GetName()
{
    return _nameDocument;
}

void DocumentModel::SetName(const std::string& name)
{
    _nameDocument = name;
}

void DocumentModel::Export()
{
    std::cout << "Model | " << _nameDocument << " | Export document" << std::endl;
    // Запись в файл из вектора примитивов...
}

void DocumentModel::Import()
{
    std::cout << "Model | " << _nameDocument << " | import Import" << std::endl;
    // Запись в вектор примитивов из файла...
}