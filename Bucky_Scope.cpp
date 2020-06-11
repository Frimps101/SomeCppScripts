#include <iostream>
using namespace std;
void bucky();
int tuna = 60; // variables can be declared outside of main . It is a global variable
int main(){
	
	//unary scope resolution operator - ::
	//To access global variables
	
	double tuna = 20;
	
	cout<<tuna <<endl;
	cout<<::tuna;
}


