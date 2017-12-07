#include "charElement.h"


char charElement::getChar() const
{
    return c;
}

void charElement::setValue(char cr)
{
    c = cr;
}

std::ostream& charElement::toString(std::ostream &os) const
{
    return os << "charElement: (" << this->getChar() << ")" << "\n";
}
