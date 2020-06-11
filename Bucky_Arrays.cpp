#include <iostream>
using namespace std;
int main(){
	
	/*int jo[9];
	
	cout<<"Element   -   Value" <<endl;
	
	for(int x=0; x<=8; x++){
		jo[x] = 99;
		
		cout<< x << "  ------   " << jo[x] <<endl;
	}
	*/
	
	int jo[10] = {1,2,3,4,5,6,7,8,9,10};
	int sum;
	
	for(int i=0; i<10; i++){
		sum += jo[i];
	}
	
	cout<<sum;
}
