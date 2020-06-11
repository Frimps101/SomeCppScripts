#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(int id, string name)
{
    this->id = id;
}

void Person::display(){
    cout<<this->id<<endl;
}
