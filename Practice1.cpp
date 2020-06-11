#include <iostream>
using namespace std;

class Address{
	public:
		string addressLine, city, state;
		Address(string addressLine, string city, string state){
			this->addressLine = addressLine;
			this->city = city;
			this->state = state;
		}
};

class Employee{
	private: // Making Address public does not affect the code
		Address*address;
	public:
		int id;
		string name;
		Employee(int id, string name, Address*address){
			this->id = id;
			this->name = name;
			this->address = address;
		}
		
		void display(){
			cout<<id<<" "<<name<<" "<<address->addressLine<<" "<<address->city<<" "<<address->state<<endl;
		}
};
int main(){
	
Address address = Address("C-46","Accra","Greater Accra");
Employee employee = Employee(104, "Josephine", &address);

employee.display();
	
	
	return 0;
}
