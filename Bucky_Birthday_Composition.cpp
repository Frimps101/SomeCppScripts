#include "Bucky_Birthday_Composition.h"
#include <iostream>
usimg namespace std;


Bucky_Birthday_Composition::Bucky_Birthday_Composition(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}

void Bucky_Birthday_Composition::printDate(){
	cout<<month <<"/" <<day <<"/" <<year <<endl;
}
