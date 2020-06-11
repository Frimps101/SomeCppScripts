/*

--This is Ambiguity; what java calls overloading
#include <iostream>
using namespace std;

void fun(int i){
	cout<<"The value of i is " << i <<endl;
	cout<<"Hello world";
}

void fun(double j){
	cout<<"The value of j is " << j <<endl;
	cout<<"This one executed";
	
}
int main(){
	
	fun(20);
	
}
*/

#include <iostream>
using namespace std;

void printArray(int theArray, int sizeOfArray){
	for(int i=0; i<sizeOfArray; i++){
		cout<<theArray[i]<<endl;
	}
	
}
int main(){
	
	int arr1[5] = {1,2,3,4,5};
	
	printArray(arr1,5);
	
	
}




