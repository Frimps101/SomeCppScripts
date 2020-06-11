#include "Burrito.h"
#include <iostream>

using namespace std;

Burrito::Burrito()
{
	cout<<"I am a banana"<<endl;
}

// The double colon is called the binary scope resolution operator and all it basically means is that that Burrito constructor(the one on the right) is a member of the class Burrito(the one on the left)
// If the operator is not used, then the program would not know what class the function belonged to
