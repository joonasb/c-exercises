#include "elementContainer.h"

int elementContainer::koko()
{
    return els.size();
}

Element* elementContainer::palautaElement(unsigned int i)
{
    if(i < els.size())
    {
        return els.at(i);
    }
    else
    {
        return NULL;
    }
}

void elementContainer::insert(const Element& e)
{
    Element *elem1 = const_cast<Element*>(&e);
    els.push_back(elem1);
}

void elementContainer::remove(const Element& e)
{
    if( els.size() == 1)
    {
        std::vector<Element*>::iterator it1;
        it1 = els.begin();
        it1 = els.erase(it1);
    }
    else
    {
        Element *elem2 = const_cast<Element*>(&e);
        std::vector<Element*>::iterator it1;
        for(it1 = els.begin(); it1 != els.end(); ++it1)
        {
            if((*it1) == elem2)
            {
            it1 = els.erase(it1);
            }
        }
    }
}

std::string elementContainer::toString()
{
    std::stringstream ss;
    std::string merkkijono;
    std::vector<Element*>::iterator it1;
    for(it1 = els.begin(); it1 != els.end(); ++it1)
    {
        ss << (*(*it1)) << "\n";
        merkkijono = ss.str();
    }
    return merkkijono;
}

