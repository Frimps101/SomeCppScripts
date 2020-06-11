/*
#include <iostream>
using namespace std;

class Car{
	public:
		int numOfTyres = 4;
		void move(){
			cout<<"The car is moving"<<endl;
		}
};

class Audi:public Car{
	public:
		string name;
		int mileage;
		Audi(string name,int mileage):name(name),mileage(mileage){
		};
};
int main(){
	
	
	Car c;
	cout<<c.numOfTyres<<endl;
	c.move();
	
	
	Audi a("Audi", 4000);
	cout<<a.name<<endl;
	cout<<a.numOfTyres<<endl;
	a.move();
	
}
*/

// This is not working and i cant find error
#include <iostream>
using namespace std;

class A{
	public:
	int x,y;
	void get_input(){
		cout<<"Please enter numbers for x and y"<<endl;cin>>x>>y;
		
		}
};

class B: public A{
	void product(){
		cout<<"The product of the two numbers is: " <<x*y<<endl;
	}
};

class C: public A{
	void sum(){
		cout<<"The sum of the two numbers is: " << x+y<<endl;
	}
};
int main(){
	
	
	B b;
	C c;
	
	b.get_input();
	b.product;
	
	
	c.get_input();
	c.sum;
}
