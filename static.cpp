#include <iostream>
using namespace std;

class Account{
	public:
		int id;
		string name;
		static float rateOfInterest;
		
		Account(int id,string name){
			this->id = id;
			this->name = name;
		}
		
		void display(){
			cout<<id<<" "<<name<<" "<<rateOfInterest;
		}
		
		
};

float Account::rateOfInterest = 6.5;

int main(void){
	
	Account a1 = Account(107,"Jo");
	
	a1.display();
	
	
	
	return 0;
}
