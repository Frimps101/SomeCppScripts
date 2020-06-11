#include <iostream>
using namespace std;
int main(){
	
	try{
		int momsAge = 20, sonsAge = 34;
		
		if(sonsAge > momsAge){
			throw 99;
		}
		}catch(int x){
			cout<<"Son cannot be older than mom, ERROR NUMBER: "<<x<<endl;
		}
	}
	

