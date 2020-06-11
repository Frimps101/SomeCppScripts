#include <iostream>
using namespace std;

class Employee{
	public:
		int id;
		string name;
		float salary;
		
		Employee(int id,string name,float salary){
			this->id = id;
			this->name = name;
			this->salary = salary;
		}
		
		void display(){
			cout<<id<<" "<<name<<" "<<salary;
		}
};
int main(void){
	
	Employee e1(107,"Jo",10000);
	e1.display();
	
}
