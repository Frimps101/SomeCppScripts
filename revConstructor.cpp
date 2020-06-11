#include <iostream>
using namespace std;

class Employee{
	public:
	int id;
	string name;
	float salary;
	
	Employee(int i,string n,float s){
		id = i;
		name = n;
		salary = s;
		cout<<"My name is: "<<name; 
	}
	
	void display(){
		cout<<"id: "<<id<<endl;
		cout<<"name: "<<name<<endl;
		cout<<"salary: "<<salary<<endl;
	}
};

int main(void){
	
Employee e1 = Employee(10729174,"Josephine F Kwakye",100000);

e1.display();
	
}
