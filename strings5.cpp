#include <iostream>
#include <string>

using namespace std;
int main(){
	
	string one("apples");
	string two("beans");
	
	cout<< one<<endl;
	cout<< two<<endl;
	
	one.swap(two);
	
	cout<< one<<endl;
	cout<< two<<endl; 
	
}
