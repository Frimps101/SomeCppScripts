#include <iostream>
#include <cstdlib>
#include <ctime> // Allows us to access the clock on our computer
// A Simple Program To Generate Random Numbers
using namespace std;

int main(){
	
	srand(time(0)); // srand alllows you change the algorithm to generate truly random numbers and time
 					//is also constantly changing so that means you dont get the same set of numbers when you pass numbers to srand	
	for(int i=1; i< 25; i++){
		cout<<1 + (rand() % 6)<<endl;  
	}
	
}
