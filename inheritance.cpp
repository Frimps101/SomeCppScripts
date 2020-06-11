#include <iostream>
using namespace std;

/*
class Account{
	public:
		float salary = 100000;
};

class Programmer : public Account{
	public:
		float bonus = 50000;
};
*/

class Animal{
	public:
		void eat(){
			cout<<"Eating \n";
		}
};

class Dog:public Animal{
	public:
		void bark(){
			cout<<"Barking";
		}
};

int main(void){
	
	/*Programmer p1;
	
	cout<<"The salary of a programmer is: "<<p1.salary<<endl;
	cout<<"Her bonus is: "<<p1.bonus;*/
	
	Dog d1;
	
	d1.eat();
	d1.bark();
	
}
