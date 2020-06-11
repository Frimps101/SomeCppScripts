#include <iostream>
using namespace std;

class A{
	int x = 5;
	friend class B;
};

class B{
	public:
		void display(A a){ // why you can also pass &a as an argument, I dont know as the & of any variable reveals its address
			cout<<"The value of x is: "<<a.x;
		}
};

int main(void){
	
	A c;
	B b;
	b.display(c); 
	
	return 0;
}

// B is declared as a friend inside A. Therefore B is a friend of class A.
// B can access the private members of class A
