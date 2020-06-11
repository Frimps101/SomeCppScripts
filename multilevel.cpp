#include <iostream>
using namespace std;

class Account{
	public:
		float salary = 50000;
};

class Programmer:public Account{
	public:
		float bonus = 1000;
};

class Accountant:public Programmer{
	public:
		float expenses = 800;
};

int main(void){
	
	Programmer p1;
	cout<<p1.salary<<endl;
	cout<<p1.bonus<<"\n";
	
	Accountant a1;
	cout<<a1.bonus<<endl;
	cout<<a1.expenses<<endl;
	cout<<a1.salary;
	
	

	return 0;
}
