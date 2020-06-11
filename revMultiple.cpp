#include <iostream>
using namespace std;

class A{
	public:
		void display(){
			cout<<"This is class A \n";
		}
};

class B{
	public:
		void display(){
			cout<<"This is class B \n";
		}
};

class C:public A,public B{
	public:
		void showing(){
			cout<<"This is class c \n";
			A::display();
			B::display();
		}
};

int main(void){
	
	C c1;

	c1.showing();
	
	
	
	
}
