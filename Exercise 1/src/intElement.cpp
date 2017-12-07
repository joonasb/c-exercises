#include "intElement.h"



int intElement::getInt() const
{
    return i;
}

void intElement::setValue(int ii)
{
    i = ii;
}

std::ostream& intElement::toString(std::ostream &os) const
{
    return os << "intElement: (" << this->getInt() << ")" << "\n";
}
