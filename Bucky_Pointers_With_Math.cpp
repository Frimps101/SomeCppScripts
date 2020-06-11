#include <iostream>
using namespace std;

// Whenever you add an integer to a pointer, it doesnt change the memory address of that pointer it only changes what element 
// its pointing to 
int main(){
	
	
	int bucky [5];
	int *bp0 = &bucky[0];
	int *bp1 = &bucky[1];
	int *bp2 = &bucky[2];
	
	cout<<bp0<<endl;
	cout<<bp1<<endl;
	cout<<bp2<<endl;
	
	bp0 += 2;
	
}
