#include <iostream>
using namespace std;

class Student{
	public:
		int id;
		int pin;
		
		void insert(int i,int d){
			id = i;
			pin = d;
		}
		
		void display(){
			cout<<"id is: "<<id<<" pin is: "<<pin<<endl;
		}
};
int main(void){
	
	Student jo;
	
	jo.insert(10729174,64736);
	jo.display();
	
	
	return 0;
}
