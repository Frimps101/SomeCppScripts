#include "Bucky_People_Composition.h"
#include "Bucky_Birthday_Composition.h"
#include <iostream>
using namespace std; 

//Anytime you are working with a class inside of another class, you need to use a member initializer list
// BAsicially, when working with another class, you need to use their header

Bucky_People_Composition::Bucky_People_Composition(string x, Bucky_Birthday_Composition bObj)
: name(x), dateOfBirth(bo)
{
	
}

void People::printInfo(){
	cout<< name << " was born on ";
	dateOfBirth.printDate();
}
