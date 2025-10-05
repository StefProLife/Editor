#include "DocumentEditor.h"

void DocumentEditor::AddPrimitive(GraphicPrimitivePtr primitive)
{
    auto it = std::find(_vectorPrimitive.cbegin(), _vectorPrimitive.cend(), primitive);
    if (it != _vectorPrimitive.cend()) return;
    _vectorPrimitive.push_back(primitive);
}

void DocumentEditor::RemovePrimitive(GraphicPrimitivePtr primitive)
{
    auto it = std::find(_vectorPrimitive.cbegin(), _vectorPrimitive.cend(), primitive);
    if (it == _vectorPrimitive.cend()) return;
    _vectorPrimitive.erase(it);
}

std::vector<GraphicPrimitivePtr> DocumentEditor::GetPrimitives() const
{
    return static_cast<const std::vector<GraphicPrimitivePtr>>(_vectorPrimitive);
}

void DocumentEditor::SetPrimitives(const std::vector<GraphicPrimitivePtr> vectorPrimitive)
{
    _vectorPrimitive = vectorPrimitive;
}