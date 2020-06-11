/*
#include <iostream>
using namespace std;

class A{
	public:
		int x,y;
		void getInput(){
			cout<<"Please enter your numbers: "<<endl;
			cin>>x>>y;
		}
};

class B:public A{
	public:
		void product(){
			cout<<"Product: "<<x*y<<endl;
		}
};

class C:public A{
	public:
		void sum(){
			cout<<"Sum: "<<x+y<<endl;
		}
};
int main(){
	
	B b;
	C c;
	
	b.getInput();
	b.product();
	
	c.getInput();
	c.sum();
		
}

#include <iostream>
using namespace std;

class Shape{
	public:
		int x, y;
		void get_values(){
			cout<<"Enter values for x and y"<<endl;
			cin>>x>>y;
		}
};

class Rectangle:public Shape{
	public:
		void getArea(){
			cout<<"The area of the rectangle is: "<<x*y<<endl;
		}
};

class Triangle: public Shape{
	public:
		void getAreaOfTriangle(){
			cout<<0.5*x*y<<endl;
		}
};
int main(){
	
	Rectangle r;
	Triangle t;
	
	r.get_values();
	r.getArea();
	
	t.get_values();
	t.getAreaOfTriangle();
	
}
*/

#include <iostream>
using namespace std;

class Car{
	public:
		int num_of_tyres;
		Car(int num_of_tyres){
			this->num_of_tyres = num_of_tyres;
		}
};

class Audi:public Car{
	public:
		int mileage;
		string name;
		Audi(int mileage, string name){
			this->mileage = mileage;
			this->name = name;
		}
};

int main(){
	
	Car c(4);
	Audi a(1000, "Audi");
	
	cout<<a.num_of_tyres<<endl;
	cout<<a.mileage<<endl;
	cout<<a.name;
	
}


