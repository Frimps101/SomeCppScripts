//This is without the virtual keyword

#include <iostream>
using namespace std;

class Animal{
	public:
		void eat(){
			cout<<"Eating...";
		}
};

class Dog:public Animal{
	public:
		void eat(){
			cout<<"Eating bread...";
		}
};

int main(void){
	
	Dog d = Dog(); // just Dog d; also works
	d.eat();
	
	
	
return 0;	
}
