#include "People.h"
#include "Birthday.h"
#include <iostream>
using namespace std;

People::People(string x, Birthday bo): name(x), dateOfBirth(bo)
{
    //Every time you are working with a class inside another class, you need a member initializer list
}

void People::printInfo(){
    cout<<name<<" was born on "<<dateOfBirth.printDate();
}
