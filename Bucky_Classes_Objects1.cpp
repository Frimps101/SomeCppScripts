#include <iostream>
#include <string>
using namespace std;

class Buckysclass{
	
	// A constructor is a function that gets called automatically as soon as you create an object
	// A reason to create a constructor would be to give a variable an initial value
	
	public:
		Buckysclass(string z){
			//cout<<"This will get printed automatically";
			setName(z);
		}
		void setName(string x){
			name = x;
		}
		
		string getName(){
			return name;
		}
	private:
		string name;
};
int main(){
	
	Buckysclass bo("Josephine Frimpomaa Kwakye");
	//bo.setName("Josephine");
	//cout<<bo.getName();
	cout<<bo.getName();
	  
	
	 
	return 0;
}
