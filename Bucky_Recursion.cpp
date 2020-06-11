#include <iostream>
using namespace std;

// Recursion is the idea that a function can call itself
// Whenever you build a truly perfect recursive function, you need to have a base case
// Base case is the ending point for your function

int factorialFinder(int x){
	if(x == 1){
		return 1;
	}
	else if(x == 0){
		return 0;
	}
	else{
		return x * factorialFinder(x-1); 
	}
}

int main(){
	
	cout<<factorialFinder(0); 
	
}
