#include <iostream>
using namespace std;

class Animal{
	public:
		void eat(){
			cout<<"Eating..."<<endl;
		}
};

class Dog:public Animal{
	public:
		void bark(){
			cout<<"Barking..."<<endl;
		}
};

class BabyDog:public Dog{
	public:
		void weep(){
			cout<<"Weeping..."<<endl;
		}
};
int main(void){
	
	BabyDog Spike;
	
	Spike.eat();
	Spike.weep();
	Spike.bark();
	
	return 0;
	
}
