#include <iostream>
using namespace std;

void printArray(int theArray[], int sizeOfArray);

int main(){
	
	int jo[3] = {20,30,54};
	int eugenia[6] = {23,45,67,23,12,58};
	
	printArray(jo, 3);
	printArray(eugenia, 6);
	
}

void printArray(int theArray[], int sizeOfArray){
	for(int x=0; x < sizeOfArray; x++){
		cout<<theArray[x] << endl;
	}
}
