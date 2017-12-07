#ifndef ELEMENTCONTAINER_H
#define ELEMENTCONTAINER_H
#include <vector>
#include <iostream>
#include <memory>
#include <iterator>
#include <Element.h>

class elementContainer
{
    private:
        std::vector<Element*> els;
    public:
        elementContainer() : els(0, nullptr)
        {
        }
        ~elementContainer()
        {
            for(unsigned int i = 0; i < els.size(); ++i)
            {
                delete els[i];
            }
        }
        elementContainer(const elementContainer& e) : els(e.els)
        {
        }

        elementContainer(const elementContainer&& e) : els(std::move(e.els))
        {
        }

        void insert(const Element& e);
        void remove(const Element& e);
        std::string toString();
        //Functions for unit tests
        int koko();
        Element* palautaElement(unsigned int i);

};

#endif // ELEMENTCONTAINER_H
