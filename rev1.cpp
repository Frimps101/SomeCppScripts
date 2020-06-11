#include <iostream>
using namespace std;

//enum week{Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};

/*class Employee{
	public:
		float salary = 5000000;
};

class Programmer : public Employee{
	public:
		string name;
		int id;
		void display(){
			cout<<"id: "<<id<<"name: "<<name;
		}
};

class Accountant : public Programmer{
	public:
		string position = "senior level";
};
*/

class A{
	public:
		void display(){
			cout<<"Class A";
		}
};

class B : public A{
	public:
		void display(){
			cout<<"Class B";
		}
};

int main(void){
	// Enum
	/*
	week day;
	day = Friday;
	cout<<day + 1;
	*/
	
	/*Programmer p1;
	Accountant a1;
	
	p1.name = "Josephine";
	p1.id = 10729174;
	
	p1.display();
	cout<<a1.salary;*/
	
A a1;
B b1;

a1.display();
b1.display();




return 0;
}
