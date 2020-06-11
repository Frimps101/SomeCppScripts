#include <iostream>
using namespace std;

class Address{
	public:
		string addressLine, city, state;
		Address(string addressline, string city, string state){
			this->addressLine = addressLine;
			this->city = city;
			this->state = state;
		}
};

class Employee{
	private:
		Address *address;
	public:
		int id;
		string name;
		Employee(int id, string name, Address *address){
			this->id = id;
			this->name = name;
			this->address = address;
		}
		
		void display(){
			cout<<id<<" "<<name<<" "<<address->addressLine<<" "<<address->city<<" "<<address->state<<endl;
		}
};
int main(){
	
	Address a1 = Address("a-1", "Legon", "Accra");
	Employee e1 = Employee(001, "Josephine F Kwakye", &a1);
	e1.display();
	
	Address a2 = Address("a-2", "Darkuman-Russia", "Accra");
	Employee e2 = Employee(002, "Maxwell K Kwakye", &a2);
	e2.display();
	
	Address a3 = Address("a-3", "Ashtown", "Kumasi-Ashanti Region");
	Employee e3 = Employee(003, "Margaret Ampomaa", &a3);
	e3.display();
}
