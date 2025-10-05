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

std::vector<GraphicPrimitivePtr> DocumentModel::GetPrimitives() const
{
    return static_cast<const std::vector<GraphicPrimitivePtr>>(_vectorPrimitives);
}

void DocumentModel::SetPrimitives(const std::vector<GraphicPrimitivePtr> vectorPrimitives)
{
    _vectorPrimitives = vectorPrimitives;
}

const std::string DocumentModel::GetNameDocument()
{
    return static_cast<const std::string>(_nameDocument);
}

void DocumentModel::SetNameDocument(const std::string name)
{
    _nameDocument = name;
}

const std::string DocumentModel::DefaultNameWithCreate()
{
    return static_cast<const std::string>(_defaultName);
}