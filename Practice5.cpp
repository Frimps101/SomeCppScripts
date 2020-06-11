/*
#include <iostream>
using namespace std;
int main(){
	
	int num=0;
	
	do{
		cout<<num<<endl;
		
		num++;
	}while(num < 10);
}



int returnNum(int num){
	return num;
}

float returnNum(float num){
	return num;
}
int main(){
	
	//float num = 0.5;
	int num = 1;
	
	cout<< returnNum(num);
	
}

#include <iostream>
using namespace std;
int main(){
	
	int multiDimensional[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	for(int r=0; r<3; r++){
		for(int c=0; c<3; c++){
			cout<<multiDimensional[r][c]<<" ";
		}
		
		cout<<endl;
	}
}

#include <iostream>
using namespace std;

int factorial(int x){
	if(x==1){
		return x;
	}
	else if(x==0){
		return x;
	}
	else{
		return x * factorial(x-1);
	}
}
int main(){
	
	cout<< factorial(5);
	
}

#include <iostream>
using namespace std;

int tuna = 50;
int main(){
	
	float tuna = 30.5;
	
	cout<<tuna<<endl;
	cout<<::tuna; // This operator is called the unary scope resolution operator
}

#include <iostream>
using namespace std;

int tuna = 50; // global variable
int main(){
	
	int num = 12;
	string name = "Josephine";
	float num1 = 20;
	double num2 = 3;
	
	
	cout<<sizeof(::tuna)<<endl;
	cout<<sizeof(num)<<endl;
	cout<<sizeof(num1)<<endl;
	cout<<sizeof(num2)<<endl;
	cout<<sizeof(name)<<endl;
	cout<<sizeof(double)<<endl;
	cout<<sizeof(int)<<endl;
	cout<<sizeof(float)<<endl;
	cout<<sizeof(string)<<endl;
}
*/

// Trying the friend function again

#include <iostream>
using namespace std;

class Person{
	public:
		string name = "Josephine";
		int age = 20;
};

class AnotherPerson{
	public:
	void display(Person p){
		cout<<p.name<<endl;
		cout<<p.age;
	}
};
int main(){
	
	Person p1;
	AnotherPerson a1;
	
	a1.display(p1);
	
}












