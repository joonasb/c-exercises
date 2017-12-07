#ifndef CHARELEMENT_H
#define CHARELEMENT_H
#include <Element.h>

class charElement : public Element
{
    public:
        charElement() : c('0')
        {
        }
        ~charElement() {};
        void setValue(char cr);
        char getChar() const;
        std::ostream& toString(std::ostream &os) const override;
        friend std::ostream& operator<<(std::ostream &out, charElement &charElem)
        {
            charElem.toString(out);
            return out;
        }
    private:
        char c;
};

#endif // CHARELEMENT_H
