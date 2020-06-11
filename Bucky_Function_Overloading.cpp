#include <iostream>
using namespace std;

//Function Overloading: Functions that have the same names but different data types

void printNumber(int x){
	cout<<"I am printing an integer " << x <<endl;
}

void printNumber(float x){
	cout<<"I am printing a float " << x <<endl;
}

int main(){
	//cout<<"Hello world";
	
	int a = 54;
	float b = 32.4896;
	
	printNumber(a);
	printNumber(b); 
}
