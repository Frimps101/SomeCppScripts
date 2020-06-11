#include <iostream>
using namespace std;

class Stankfist{
	public:
		void saySomething(){
			cout<<"My name is Khan and i am not a terrorist"<<endl;
		}
		friend void stankFistsFriend(Stankfist s);
};

void stankFistsFriend(Stankfist s){
	s.saySomething();
}
int main(){
	
	Stankfist obj;
	
	stankFistsFriend(obj);
	
}
