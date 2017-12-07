#include <iostream>
#include <elementContainer.h>
#include <Element.h>
#include <intElement.h>
#include <charElement.h>

using namespace std;

int main()
{
    elementContainer *elemCont1 = new elementContainer();
    intElement *elem1 = new intElement();
    elem1->setValue(5);
    charElement *elem2 = new charElement();
    elem2->setValue('R');
    elemCont1->insert(*elem1);
    elemCont1->insert(*elem2);
    cout << "----VECTOR PRINT AFTER PUSHING ELEMENTS----\n\n";
    cout << elemCont1->toString();
    elemCont1->remove(*elem1);
    cout << "----VECTOR PRINT AFTER REMOVING intElement-----\n\n";
    cout << elemCont1->toString();
    elemCont1->remove(*elem2);
    cout << "----VECTOR PRINT AFTER REMOVING charElement----\n\n";
    cout << elemCont1->toString();
    return 0;
}
