#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>
#include <sstream>

class Element
{
    public:
        virtual ~Element() {};
        virtual std::ostream& toString(std::ostream&) const = 0;
        friend std::ostream& operator<<(std::ostream &out, Element &elem1)
        {
            elem1.toString(out);
            return out;
        }
};

#endif // ELEMENT_H
