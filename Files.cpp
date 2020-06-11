#include <iostream>
#include <fstream>
using namespace std;
int main(){
	
	ofstream josFile; 
	josFile.open("tuna.txt ");
	
	josFile<<"I love tuna and tuna loves me \n";
	
	josFile.close();
}
