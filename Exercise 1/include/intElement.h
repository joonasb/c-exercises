#ifndef INTELEMENT_H
#define INTELEMENT_H
#include <Element.h>

class intElement : public Element
{
    public:
        intElement() : i(0)
        {
        }

        ~intElement() {};
        void setValue(int ii);
        int getInt() const;
        std::ostream& toString(std::ostream &os) const override;
        friend std::ostream& operator<<(std::ostream &out, intElement &intElem1)
        {
            intElem1.toString(out);
            return out;

        }

    private:
        int i;
};

#endif // INTELEMENT_H
