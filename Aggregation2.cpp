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

class Person{
	private:
		Address*address;
	public:
		int id;
		string name;
		Person(int id, string name, Address*address){
			this->id = id;
			this->name = name;
			this->address = address;
		}
		
		void display(){
			cout<<id<<" "<<name<<" "<<address->addressLine<<" "<<address->city<<" "<<address->state<<endl;
		}
};
int main(){
	
	Address a = Address("c-10","Accra", "Madina");
	Person p = Person(101, "Josephine F Kwakye", &a);
	p.display();
	
	Address a1 = Address("b-10","Accra", "Darkuman-Russia");
	Person p1 = Person(102, "Maxwell K Kwakye", &a1);
	p1.display();
	
	Address a2 = Address("a-20","Kumasi", "Ashtown");
	Person p2 = Person(103, "Margaret Akua Ampomaa", &a2);
	p2.display();
	
	Address a3 = Address("d-10","Accra", "Dansoman");
	Person p3 = Person(104, "Mary Yaa Nyantekyiwaa", &a3);
	p3.display();
	
	Address a4 = Address("c-10","Swits", "Switz");
	Person p4 = Person(105, "Mary Arko Frimpong", &a4);
	p4.display();
	
}
