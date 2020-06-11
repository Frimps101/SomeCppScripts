#include <iostream>
#include "Bucky_Sally.h"
#include "Bucky_Birthday_Composition.h"
#include "Bucky_People_Composition.h"

// Whenever you use a pointer to access stuff inside a class, you need to use the arrow member selection operator
// Composition is the idea that whenever you build a class that has members(variables); a class can also have objects
// of another class as its member
// Composition is basically using objects of other classes inside your class
using namespace std;
int main(){

	Bucky_Sally sallyObject;
	Bucky_Sally *sallyPointer = &sallyObject;

	// sallyObject.printCrap();
	// sallyObject->printCrap();

	//const Bucky_Sally salObj;
	//salObj.printShiz2(); NB: This is for constant objs

	Bucky_Sally salObj(3,3);
	salObj.print();


	Bucky_Birthday_Composition birthObj(04,28,2000);

	Bucky_People_Composition joFrimps("Josephine ", birthObj);

	joFrimps.printInfo();
}
