#include "People.h"
#include <iostream>
using namespace std;

People::People(int id, int salary)
{
  this->id = id;
  this->salary = salary;

}

void People::display(){
    cout<<this->id <<" "<<this->salary;
}
