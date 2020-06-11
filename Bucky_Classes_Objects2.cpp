#include <iostream>
#include <string>
using namespace std;

class Josclass{
	public:
		void saysomethingcool(){
			cout<<"Preaching to the choir"<<endl;
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
	
// Objects are how you get access to stuff stored in a class
// Making class variables public is generally not good programming practice
// Usually u'd wanna make class variables private and like java define some sort of 
// setter and getter methods for them. They are public and so functions can be accessed inside of the main function

//Josclass josObject;
//josObject.saysomethingcool();
//josObject.name = "Josephine Kwakye"	;
//cout<<josObject.name;

// Constructors are such that u dont have to sort of use the dot notation in order to access the function
// They are used to give variables an initial value
// Whenever u create an object from a class, the object has its own set of values

Josclass josObj;
josObj.setName("Josephine");
string gettingName = josObj.getName();
cout<<gettingName;
	
	return 0;
}
