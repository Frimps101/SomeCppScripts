#include <iostream>
#include <string>

using namespace std;
int main(){
	
	string s1("hamster");
	string s2;
	string s3;
	
	s2 = s1; // Copy a string
	s3.assign(s1); // Another way to copy a string
	
	cout<<s2<<endl;
	cout<<s3;
}
