#include "Birthday_Composition.h"
#include <iostream>
using namespace std;

Birthday_Composition::Birthday_Composition(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

void Birthday_Composition::PrintBirthday(){
            cout<<"My birthday is: "<<day <<"/"<<month<<"/"<<year;
}
