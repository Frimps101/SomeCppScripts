#include <iostream>
#include <string>

using namespace std;
int main(){
	
	string s1("hi my name is jo and i love bacon and ham");
	cout <<s1<< endl;
	s1.replace(14, 2, "Max");
	cout <<s1<< endl;

}
