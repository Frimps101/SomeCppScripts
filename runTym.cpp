#include <iostream>
using namespace std;
class Animal{
	public:
	string color = "Black";
		
};

class Dog:public Animal{
	public:
	string color = "Gray";
	
};
int main(){
	
	Animal d = Dog();
	cout<<d.color;
}