#include <iostream>
using namespace std;

class A{
	public:
		int x,y;
		void getInput(){
			cout<<"Enter values for x and y"<<endl;
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
			cout<<"Total: "<<x+y<<endl;
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
