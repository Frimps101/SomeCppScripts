#include <iostream>
using namespace std;
int main(void){
	
	int num1,num2,sign;
	
	cout<<"Please enter your first number"<<endl;
	cin>>num1;
	cout<<"Enter your second number"<<endl;
	cin>>num2;
	
	cout<<"Enter 1 for addition \n";
	cout<<"Enter 2 for subtraction \n";
	cout<<"Enter 3 for multiplication \n";
	cout<<"Enter 4 for division \n";
	cout<<"Enter 5 for remainder \n";
	cin>>sign;
	
	
	switch(sign){
		case 1:
			cout<<"Their sum is: "<<num1 + num2;
			break;
		case 2:
			cout<<"Their subtraction is: "<<num1 - num2;
			break;
		case 3:
			cout<<"Their product is: "<<num1 * num2;
			break;
		case 4:
			cout<<"Their division is: "<<num1 / num2;
			break;
		case 5:
			cout<<"The remainder is: "<<num1 % num2;
			break;
		default:
			cout<<"Operation cannot be performed";
			break;
		
	}
	

}
