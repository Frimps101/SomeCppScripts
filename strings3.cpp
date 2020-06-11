#include <iostream>
#include <string>

using namespace std;
int main(){
	
	string s1 = "Josephine";
	
	cout<<s1.at(3);
	
	for(int i=0; i<s1.length(); i++){
		cout<<s1.at(i);
	}
	
}
