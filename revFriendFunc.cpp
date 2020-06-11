#include <iostream>
using namespace std;

class A{
	int x = 5;
	friend class B;
};

class B{
	public:
	void display(A &a){ // also works without the ampersand
		cout<<"Value of x is: "<<a.x;
	}
};
int main(void){
	
	A a;
	B b;
	b.display(a);
	return 0;
}
