#include <iostream>
using namespace std;

class StankFist{
	public:
		StankFist(){
			stinkyVar = 0;
		}
	private:
		int stinkyVar;
		
	friend void stinkysFriend(StankFist &sfo);
};

void stinkysFriend(StankFist &sfo){class  {
	// Private section
	public:
		// Public Declarations
	protected:
		// Protected Declarations
};

	 sfo.stinkyVar = 99;
	 cout <<sfo.stinkyVar <<endl;
};

int main(){

// Basically every class can have friends and the friend of the class is something that is totally different from the class
// but it still has access to stuff inside your class like variables and functions
// If a class wanted to have a function, it can make that function its friend and now it has access to variables and functions inside a class
// In order to make a function your friend, you need to prototype it in your class
// Its the class that has to give away its friendship
// C++ uses friend functions to ensure that data is accessible only by the functions operating on it and not to anyone outside the class
// But sometimes, an outsider class might want to access the private and protected data of another C++ class
// When the function is declared as friend, only then can it access the private and protected members of that class
// The friend fuction is declared inside the class whose private and protected members are to be accessed.
// The friend function is defined anywhere in the code file and we need not use the friend keyword or the scope resolution operator
// A friend function can be declared in the private or public section of the class
// It can be called like a normal function without using the object
// It is not in the scope of the class of which it is a friend
// It is not invoked using the class object as it is not in the scope of the class
// A friend function cannot access the private and protected data members of a class directly. It needs to make use of a class object
and then access the members using the dot operator

StankFist bob;

stinkysFriend(bob);
}

