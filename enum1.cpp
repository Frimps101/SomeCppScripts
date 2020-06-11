/*
#include <iostream>
using namespace std;

enum week{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main(){

	// Enum is a user-defined data type that consists of integral constants.
	// When using it, you should sort of initialize it like you would an object
	week day;
	// Variables can be created for the enum type during its declaration
	// Enum's functionality can be achieved with C++ structs but enum provides more efficiency along w/ flexibility
	
	
	day = Sunday;
	
	cout<<"Day : "<<day + 1;
}

#include <iostream>
using namespace std;

enum seasons {summer = 34, winter = 5, autumn = 45, spring = 89
};
int main(){
	
	seasons s;
	s = spring;
	cout<<s+1;
	
}
*/

#include <iostream>
using namespace std;

// Creating variables of the enum type

enum suits{
	club=0,
	diamonds=10,
	hearts=20,
	spades=3
} card;
int main(){
	
	//card = club;
	card = diamonds;
	cout << "Size of enum variable " << sizeof(diamonds) << " bytes."<<endl;
	cout << card+1;
}


