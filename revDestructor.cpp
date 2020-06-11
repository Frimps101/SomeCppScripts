#include <iostream>
using namespace std;

class Employee{
	public:
		Employee(){
			cout<<"Employee constructor invoked"<<endl;
		}
		
		~Employee(){
			cout<<"Employee destructor invoked"<<endl;
		}
};
int main(void){
	
	Employee e1;
	
}
