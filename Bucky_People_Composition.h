#ifndef BUCKY_PEOPLE_COMPOSITION_H
#define BUCKY_PEOPLE_COMPOSITION_H

#include <string>
#include "Bucky_Birthday_Composition.h"
using namespace std;

class Bucky_People_Composition
{
	public:
		Bucky_People_Composition(string x, Bucky_Birthday_Composition bObj);
		void printInfo();
	protected:
	private:
		string name;
		Bucky_Birthday_Composition dateOfBirth;
		
};

#endif // BUCKY_PEOPLE_COMPOSITION_H
