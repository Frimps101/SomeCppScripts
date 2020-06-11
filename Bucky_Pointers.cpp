#include <iostream>
using namespace std;

// A pointer is a special type of variable that contains a memory address as its value
// The pointer points to a memory address
// The & sign is called the address operator

int main(){
	
	 /*int fish = 5;
	 cout<<&fish<<endl;*/
	 int fish = 5;
	 
	 int *fishPointer;
	 
	 fishPointer = &fish;
	 
	 cout<<fishPointer<<endl;
	
}
