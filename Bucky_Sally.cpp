#include "Bucky_Sally.h"
#include <iostream>
using namespace std;

Bucky_Sally::Bucky_Sally(int a,int b)
// The colon tells c++ that we are going to be working with the member initializer syntax
// This is done whenever you have a constant variable in your class but this is not so for 
// the regular variable as it can be initialized the normal way
: regVar(a), constVar(b)
{
	//cout<<"I am the constructor"<<endl;
}

void Sally::print(){
	cout<<"Regular variable is: " << regVar << "Const variable is: "<< constVar<<endl;
}

/*
Bucky_Sally::~Bucky_Sally()
{
	// A destructor has no parameters and also doesnt have a return value
	// There is also no destructor overloading
	cout<<"I am the deconstructor"<<endl;
}

void Sally::printCrap(){
	cout<<"Did someone say steak"<<endl;
}

void Bucky_Sally::printShiz(){
	cout<<"I am a regular function"<<endl;
}

void Bucky_Sally::printShiz2() const{
cout<<"I am the constant function"<<endl;
}
*/
