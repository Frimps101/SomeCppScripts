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
	
	Dog d = Dog();
	Animal cow = Animal();
	
	cow.eat();
	d.eat();
	return 0;
}
