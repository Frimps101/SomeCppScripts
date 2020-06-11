#include <iostream>
using namespace std;
int main(){
	
	int userInput,sum;
	int count = 1;
	
	while(count <= 5){
		cout<<"Enter a number " <<endl;
		cin>>userInput;
		
		sum += userInput;
		
		count ++;
	}
	
	cout<<sum;
}
