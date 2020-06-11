#include <iostream>
using namespace std;

class Buckysclass{
	public:
		void coolSaying(){
			cout<<"Preaching to the choir"<<endl;
		}
};
int main(){
	
	//string convention = "Hello world";
	//An object is how you access stuff inside your class
	  
	Buckysclass buckysObject;
	buckysObject.coolSaying();
	 
	return 0;
}
