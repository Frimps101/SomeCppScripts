#include <iostream>
using namespace std;

void passByValue(int x);
void passByReference(int *x);

// There are two different ways to pass arguments to functions:
// 1. Pass by value : Here, arguments passed are themselves copies not the actual value that can only be changed by reassigning the variable
// 2. Pass by reference : Whenever you pass a variable by reference, you pass in the variable's address and when this is done, the function is given direct access to the variable
// This way, the original value of the variable can be manipulated by the function.
// Less stress on computer as it doesnt have to make copies of the variable everytime it is called
// Functions that receive a memory address need to have a pointer as its argument



int main(){
	
	int betty = 13;
	int sandy = 13;
	
	//cout<<&sandy<<endl;
	
	passByValue(betty);
	passByReference(&sandy);
	
	cout<<"Betty is now " <<betty <<endl;
	cout<<"Sandy is now " <<sandy <<endl;
	cout<<&sandy;
	
}

void passByValue(int x){
	x = 99;
}

void passByReference(int *x){
	*x = 66;
}
