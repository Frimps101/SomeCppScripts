#include <iostream>
using namespace std;

class Employee{
	public:
		float salary = 100000;
};

class Programmer:public Employee{
	public:
		float bonus = 10000;
};

int main(void){
	Programmer p1;
	Employee e1;
	
	cout<<"Programmer salary is: "<<p1.salary<<endl;
	cout<<"Programmer bonus is: "<<p1.bonus<<endl;
	cout<<"General employee salary however is: "<<e1.salary;
	
}
