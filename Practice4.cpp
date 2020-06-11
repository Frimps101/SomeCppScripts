/*
#include <iostream>
using namespace std;

int myArray(int myArr[], int sizeOfArray){
	for(int x=0; x<sizeOfArray; x++){
		cout<<myArr[x]<<" ";
	}
}
int main(){
	
	int eugenia[5] = {1,2,3,4,5};
	
	myArray(eugenia, 5);
	
}
*/

#include <iostream>
using namespace std;
int main(){
	int eugenia[5] = {1,2,3,4,5}, total = 0;
	
	for(int x=0; x<5; x++){
		total += eugenia[x];
	}
	
	cout<<total;
	
	
	
}
