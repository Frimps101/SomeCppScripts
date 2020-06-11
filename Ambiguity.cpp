#include <iostream>
using namespace std;

void fun(int);
void fun(double);

void fun(int i){
	cout<<"The value of i is: "<<i;
	}

void fun(double j){
	cout<<"The value of j is: "<<j;
}

// Ambiguity with type casting

int main(void){
	
	fun(2);
	fun(1.2);
	return 0;
}
