// A simple calculator program by:
// Josephine Frimpomaa Kwakye

#include <iostream>
using namespace std;
int main(){
	
	int firstNum,secondNum,op;
	
	
	cout<<"Please select any of the following operator of your choice"<<endl;
	cout<<"Enter 1 for addition"<<endl;
	cout<<"Enter 2 for subtraction"<<endl;
	cout<<"Enter 3 for division"<<endl;
	cout<<"Enter 4 for multiplication"<<endl;
	cout<<"Enter 5 for remainder"<<endl;
	
	cin>>op;
	cout<<"Enter first number "<<endl;
	cin>>firstNum;
	cout<<"Enter second number ";
	cin>>secondNum;
	
	
	switch(op){
		case 1:
			cout<<"The sum of the two numbers are: "<<(firstNum + secondNum);
			break;
		case 2:
			cout<<"The subtraction of the two numbers are: "<<(firstNum - secondNum);
			break;
		case 3:
			cout<<"The division of the two numbers are: "<<(firstNum / secondNum);
			break;
		case 4:
			cout<<"The multiplication of the two numbers are: "<<(firstNum * secondNum);
			break;
		case 5:
			cout<<"The remainder of the two numbers is: "<<(firstNum % secondNum);
			break;
		default:
			cout<<"Invalid operator! Try again";
			break;
	}
		
}
