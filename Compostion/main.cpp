#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;

int main()
{
    //Composition is basically using other classes inside your class
    Birthday bObj(04, 28, 2000);
    People Jo("Josephine ", bObj);
    Jo.printInfo();
    return 0;
}
