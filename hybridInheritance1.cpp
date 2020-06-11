#include <iostream>
using namespace std;

class A{
	public:
		void a_func(){
			cout<<"This is class A"<<endl;
		}
};

class B:public A{
	public:
		void b_func(){
			cout<<"This is class B"<<endl;
		}
};

class C:public B{
	public:
		void c_func(){
			cout<<"This is class C"<<endl;
		}
};
int main(){
	
	A a;
	B b;
	C c;
	
	c.a_func();
	c.b_func();
	c.c_func();
	
}
